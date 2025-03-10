// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from sdv_serial:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef SDV_SERIAL__MSG__DETAIL__MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SDV_SERIAL__MSG__DETAIL__MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sdv_serial/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "sdv_serial/msg/detail/motors__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace sdv_serial
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_serial
cdr_serialize(
  const sdv_serial::msg::Motors & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_serial
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sdv_serial::msg::Motors & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_serial
get_serialized_size(
  const sdv_serial::msg::Motors & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_serial
max_serialized_size_Motors(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_serial
cdr_serialize_key(
  const sdv_serial::msg::Motors & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_serial
get_serialized_size_key(
  const sdv_serial::msg::Motors & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_serial
max_serialized_size_key_Motors(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sdv_serial

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_serial
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sdv_serial, msg, Motors)();

#ifdef __cplusplus
}
#endif

#endif  // SDV_SERIAL__MSG__DETAIL__MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
