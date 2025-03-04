// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from sdv_serial:msg/Motors.idl
// generated code does not contain a copyright notice
#ifndef SDV_SERIAL__MSG__DETAIL__MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SDV_SERIAL__MSG__DETAIL__MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sdv_serial/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sdv_serial/msg/detail/motors__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_serial
bool cdr_serialize_sdv_serial__msg__Motors(
  const sdv_serial__msg__Motors * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_serial
bool cdr_deserialize_sdv_serial__msg__Motors(
  eprosima::fastcdr::Cdr &,
  sdv_serial__msg__Motors * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_serial
size_t get_serialized_size_sdv_serial__msg__Motors(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_serial
size_t max_serialized_size_sdv_serial__msg__Motors(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_serial
bool cdr_serialize_key_sdv_serial__msg__Motors(
  const sdv_serial__msg__Motors * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_serial
size_t get_serialized_size_key_sdv_serial__msg__Motors(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_serial
size_t max_serialized_size_key_sdv_serial__msg__Motors(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sdv_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sdv_serial, msg, Motors)();

#ifdef __cplusplus
}
#endif

#endif  // SDV_SERIAL__MSG__DETAIL__MOTORS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
