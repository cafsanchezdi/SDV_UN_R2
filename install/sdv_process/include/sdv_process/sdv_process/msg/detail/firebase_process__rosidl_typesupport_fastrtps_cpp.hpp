// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from sdv_process:msg/FirebaseProcess.idl
// generated code does not contain a copyright notice

#ifndef SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sdv_process/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "sdv_process/msg/detail/firebase_process__struct.hpp"

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

namespace sdv_process
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_process
cdr_serialize(
  const sdv_process::msg::FirebaseProcess & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_process
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sdv_process::msg::FirebaseProcess & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_process
get_serialized_size(
  const sdv_process::msg::FirebaseProcess & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_process
max_serialized_size_FirebaseProcess(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_process
cdr_serialize_key(
  const sdv_process::msg::FirebaseProcess & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_process
get_serialized_size_key(
  const sdv_process::msg::FirebaseProcess & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_process
max_serialized_size_key_FirebaseProcess(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sdv_process

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sdv_process
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sdv_process, msg, FirebaseProcess)();

#ifdef __cplusplus
}
#endif

#endif  // SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
