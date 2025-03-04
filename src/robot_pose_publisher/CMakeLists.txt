cmake_minimum_required(VERSION 3.10)
project(robot_pose_publisher)

# Use ament_cmake instead of catkin
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(geometry_msgs REQUIRED)

# Specify the executable
add_executable(robot_pose_publisher src/robot_pose_publisher.cpp)

# Link dependencies
ament_target_dependencies(robot_pose_publisher rclcpp tf2_ros geometry_msgs)

# Install executable
install(TARGETS robot_pose_publisher
  DESTINATION lib/${PROJECT_NAME})

# Export package information
ament_package()

