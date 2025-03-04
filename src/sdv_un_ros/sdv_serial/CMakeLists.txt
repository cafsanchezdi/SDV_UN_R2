cmake_minimum_required(VERSION 3.28)
project(sdv_serial)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(PkgConfig REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosbag2_cpp REQUIRED)  
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

#Serial library lookup

#include_directories(${CMAKE_SOURCE_DIR}/src/serial/include)
find_package(serial_driver REQUIRED)

#pkg_check_modules(SERIAL REQUIRED serial)
#include_directories(${SERIAL_INCLUDE_DIRS})



#pkg_check_modules(SERIAL REQUIRED serial)
# Msg interfaces generation
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Encoder.msg"
  "msg/SdvStatus.msg"
  "msg/Ultrasound.msg"
  "msg/Flexiforce.msg"
  "msg/Battery.msg"
  "msg/TagRfid.msg"
  "msg/Motors.msg"
  DEPENDENCIES std_msgs
)

ament_export_dependencies(rosidl_default_runtime)

# Declare the executable
add_executable(sdv_serial_node2
  src/sdv_serial_node2.cpp
  src/motor.cpp
)
#target_link_libraries(sdv_serial_node2
 # ${CMAKE_SOURCE_DIR}/install/serial/lib/libserial.so
#)

# Include directories for generated messages
target_include_directories(sdv_serial_node2 PRIVATE
  include
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_cpp>
  $<INSTALL_INTERFACE:include>
)

# Link against generated message types
rosidl_target_interfaces(sdv_serial_node2 ${PROJECT_NAME} rosidl_typesupport_cpp)

# Dependencies for the executable
ament_target_dependencies(sdv_serial_node2 
  rclcpp  
  std_msgs 
  sensor_msgs 
  geometry_msgs
  rosidl_default_runtime
  serial_driver
)

# Install the executable
install(TARGETS sdv_serial_node2
  DESTINATION lib/${PROJECT_NAME}
)

# Ensure message headers are installed
install(
  DIRECTORY include/
  DESTINATION include
)
#target serial lib
#target_link_libraries(sdv_serial_node2 ${SERIAL_LIBRARIES})
ament_package()

