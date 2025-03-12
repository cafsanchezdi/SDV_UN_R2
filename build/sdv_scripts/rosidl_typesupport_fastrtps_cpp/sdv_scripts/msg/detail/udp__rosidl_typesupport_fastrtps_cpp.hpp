// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from sdv_scripts:msg/Udp.idl
// generated code does not contain a copyright notice

#ifndef SDV_SCRIPTS__MSG__DETAIL__UDP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SDV_SCRIPTS__MSG__DETAIL__UDP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sdv_scripts/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "sdv_scripts/msg/detail/udp__struct.hpp"

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

namespace sdv_scripts
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_scripts
cdr_serialize(
  const sdv_scripts::msg::Udp & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_scripts
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sdv_scripts::msg::Udp & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_scripts
get_serialized_size(
  const sdv_scripts::msg::Udp & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_scripts
max_serialized_size_Udp(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_scripts
cdr_serialize_key(
  const sdv_scripts::msg::Udp & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_scripts
get_serialized_size_key(
  const sdv_scripts::msg::Udp & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_scripts
max_serialized_size_key_Udp(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sdv_scripts

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_scripts
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sdv_scripts, msg, Udp)();

#ifdef __cplusplus
}
#endif

#endif  // SDV_SCRIPTS__MSG__DETAIL__UDP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
