cmake_minimum_required(VERSION 3.5)
project(sdv_scripts)

# Find required packages
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)

# Install Python scripts
install(
  PROGRAMS
  src/udp2twist.py
  DESTINATION lib/${PROJECT_NAME}
)

# Export package
ament_package()

