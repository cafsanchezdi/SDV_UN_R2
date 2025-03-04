#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist


class Joy2Twist(Node):
    def __init__(self):
        super().__init__('joy2twist')

        # Parameters
        self.declare_parameter('linear_scale', 1.0)
        self.declare_parameter('angular_scale', 1.0)

        self.vel_scales = [
            self.get_parameter('linear_scale').value,
            self.get_parameter('angular_scale').value
        ]

        # Joystick axes
        self.axes = None
        self.linear_axes = [1, 5]
        self.angular_axes = [0, 4]

        # Twist message
        self.target_twist = Twist()

        # Publishers & Subscribers
        self.twist_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.create_subscription(Joy, '/joy', self.set_axes_values, 10)

        # Timer to send commands at a fixed rate
        self.timer = self.create_timer(0.1, self.send_twist)  # 10Hz

    def set_axes_values(self, msg):
        if self.axes is None:
            self.axes = [0] * len(msg.axes)

        # Copy axes values
        for i in range(len(msg.axes)):
            self.axes[i] = msg.axes[i]

    def send_twist(self):
        if self.axes is None:
            return

        linear = 0.0
        angular = 0.0

        # Selecting highest absolute value for linear speed
        for i in self.linear_axes:
            if abs(self.axes[i]) > abs(linear):
                linear = self.axes[i]

        # Selecting highest absolute value for angular speed
        for i in self.angular_axes:
            if abs(self.axes[i]) > abs(angular):
                angular = self.axes[i]

        self.target_twist.linear.x = linear * self.vel_scales[0]
        self.target_twist.angular.z = angular * self.vel_scales[1]

        self.twist_pub.publish(self.target_twist)


def main(args=None):
    rclpy.init(args=args)
    node = Joy2Twist()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

