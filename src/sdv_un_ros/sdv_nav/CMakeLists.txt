cmake_minimum_required(VERSION 3.8)
project(sdv_nav)

# Find required packages
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)

# Install Python scripts
install(
  DIRECTORY scripts/
  DESTINATION lib/${PROJECT_NAME}
 
)
install(
  DIRECTORY launch
  DESTINATION share/sdv_nav
)

# Export dependencies
ament_package()

