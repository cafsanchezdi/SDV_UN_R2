#!/usr/bin/env python3
# -*- coding: utf-8 -*-
'''
This node receives UDP packets on the default port (4210) and converts them into 'cmd_vel'
messages, publishing them to the 'cmd_vel' topic. You can configure speed and acceleration 
using 'linear_scale' and 'angular_scale' parameters.

Parameters that you can configure are:
 - linear_scale: sets linear speed in m/s
 - angular_scale: sets angular speed in rad/s

Example of use:
ros2 run sdv_scripts udp_to_twist --ros-args -p linear_scale:=1.0 -p angular_scale:=1.0
'''

import socket
import threading
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from signal import signal, SIGINT
import time

# Command mapping for movement
cmd_mapping = {
    'up': [1, 0],
    'down': [-1, 0],
    'right': [0, -1],
    'left': [0, 1],
    'stop': [0, 0]
}

# Default velocity scales
g_vel_scales = [0.5, 0.5]

# UDP settings
UDP_PORT = 4210
udp_listening = True
stopped = True


class UDPThread(threading.Thread):
    '''
    Class that runs a thread that listens for UDP packets, avoiding blocking 
    the main ROS 2 thread while waiting for a new message.
    '''

    def __init__(self, node):
        '''
        Configures the UDP socket and finds the IP address.
        '''
        super().__init__()
        self.node = node
        self.udp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.udp_socket.bind((self.get_ip(), UDP_PORT))
        self.udp_socket.settimeout(0.5)
        self.node.get_logger().info(f"Listening for UDP packets on port {UDP_PORT}")

    def run(self):
        '''
        Entry point of the thread. Continuously listens for UDP packets and 
        stores received commands in the 'data' variable.
        If a timeout occurs (no message received), 'stop' is sent.
        '''
        global udp_listening, data_stamp, data
        while udp_listening:
            try:
                data, _ = self.udp_socket.recvfrom(1024)  # Buffer size: 1024 bytes
                data = data.decode().strip()
                data_stamp = time.time()
            except socket.timeout:
                data = ""

    @staticmethod
    def get_ip():
        '''
        get_ip(): Returns the machine's IP address.
        '''
        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        try:
            s.connect(('10.255.255.255', 1))  # Doesn't need to be reachable
            return s.getsockname()[0]
        except:
            return '127.0.0.1'
        finally:
            s.close()


class UDPToTwist(Node):
    '''
    ROS 2 node that receives UDP commands and converts them into Twist messages.
    '''

    def __init__(self):
        '''
        Initializes the node, sets up the publisher, and loads parameters.
        '''
        super().__init__('udp_to_twist')
        self.publisher = self.create_publisher(Twist, 'cmd_vel', 10)
        self.twist_msg = Twist()

        # Get parameters for velocity scaling
        self.declare_parameter('linear_scale', 0.5)
        self.declare_parameter('angular_scale', 0.5)
        g_vel_scales[0] = self.get_parameter('linear_scale').value
        g_vel_scales[1] = self.get_parameter('angular_scale').value

        self.get_logger().info("Node initialized. Press CTRL+C to exit.")

    def publish_twist(self, command):
        '''
        Processes the received UDP command and publishes a Twist message.
        '''
        global stopped
        if command not in cmd_mapping:
            return  # Ignore unknown commands

        vels = cmd_mapping[command]
        self.twist_msg.linear.x = vels[0] * g_vel_scales[0]
        self.twist_msg.angular.z = vels[1] * g_vel_scales[1]

        if not stopped or command == "stop":
            self.publisher.publish(self.twist_msg)

        stopped = command == "stop"


def sigint_handler(signal_received, frame):
    '''
    Allows stopping this application using the Control + C keyboard combination.
    '''
    global udp_listening
    udp_listening = False
    print("\nSIGINT detected. Shutting down...")


def main(args=None):
    '''
    Main function: Initializes the ROS 2 node, starts the UDP listener thread,
    and continuously processes incoming UDP commands.
    '''
    global data, data_stamp

    rclpy.init(args=args)
    node = UDPToTwist()
    udp_thread = UDPThread(node)
    udp_thread.start()

    signal(SIGINT, sigint_handler)
    data = ""
    data_stamp = time.time()

    try:
        while rclpy.ok() and udp_listening:
            now_stamp = time.time()
            if now_stamp - data_stamp > 0.2:
                data = "stop"

            node.publish_twist(data)
            time.sleep(1 / 20)  # 20Hz loop rate
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

