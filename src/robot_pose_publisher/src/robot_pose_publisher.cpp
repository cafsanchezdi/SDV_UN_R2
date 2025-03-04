/*!
 * \file robot_pose_publisher.cpp
 * \brief Publishes the robot's position in a geometry_msgs/Pose message.
 *
 * Publishes the robot's position in a geometry_msgs/Pose message based on the TF
 * difference between /map and /base_link.
 *
 * \author Russell Toris - rctoris@wpi.edu
 * \date April 3, 2014
 */

#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <rclcpp/rclcpp.hpp>
#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/create_timer_ros.h>
#include <tf2/exceptions.h>

class RobotPosePublisher : public rclcpp::Node
{
public:
    RobotPosePublisher()
        : Node("robot_pose_publisher"),
          tf_buffer_(this->get_clock()),
          tf_listener_(tf_buffer_)
    {
        // Declare parameters
        this->declare_parameter<std::string>("map_frame", "map");
        this->declare_parameter<std::string>("base_frame", "base_link");
        this->declare_parameter<double>("publish_frequency", 10.0);
        this->declare_parameter<bool>("is_stamped", false);

        // Get parameters
        this->get_parameter("map_frame", map_frame_);
        this->get_parameter("base_frame", base_frame_);
        this->get_parameter("publish_frequency", publish_frequency_);
        this->get_parameter("is_stamped", is_stamped_);

        // Create publisher
        if (is_stamped_)
            pose_publisher_ = this->create_publisher<geometry_msgs::msg::PoseStamped>("robot_pose", 10);
        else
            pose_publisher_ = this->create_publisher<geometry_msgs::msg::Pose>("robot_pose", 10);

        // Timer for publishing
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(static_cast<int>(1000.0 / publish_frequency_)),
            std::bind(&RobotPosePublisher::publish_pose, this));
    }

private:
    void publish_pose()
    {
        try
        {
            geometry_msgs::msg::TransformStamped transform_stamped =
                tf_buffer_.lookupTransform(map_frame_, base_frame_, tf2::TimePointZero);

            geometry_msgs::msg::PoseStamped pose_stamped;
            pose_stamped.header.frame_id = map_frame_;
            pose_stamped.header.stamp = this->get_clock()->now();

            pose_stamped.pose.orientation = transform_stamped.transform.rotation;
            pose_stamped.pose.position = transform_stamped.transform.translation;

            if (is_stamped_)
                pose_publisher_->publish(pose_stamped);
            else
                pose_publisher_->publish(pose_stamped.pose);
        }
        catch (const tf2::TransformException &ex)
        {
            RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 2000, "Could not transform: %s", ex.what());
        }
    }

    std::string map_frame_, base_frame_;
    double publish_frequency_;
    bool is_stamped_;

    tf2_ros::Buffer tf_buffer_;
    tf2_ros::TransformListener tf_listener_;

    rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr pose_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RobotPosePublisher>());
    rclcpp::shutdown();
    return 0;
}

