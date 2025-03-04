// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_serial:msg/Battery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/battery.h"


#ifndef SDV_SERIAL__MSG__DETAIL__BATTERY__STRUCT_H_
#define SDV_SERIAL__MSG__DETAIL__BATTERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Battery in the package sdv_serial.
/**
  * Battery.msg
 */
typedef struct sdv_serial__msg__Battery
{
  std_msgs__msg__Header header;
  uint32_t current_main;
  uint32_t voltage_main;
  uint32_t current_laser;
  uint32_t voltage_laser;
} sdv_serial__msg__Battery;

// Struct for a sequence of sdv_serial__msg__Battery.
typedef struct sdv_serial__msg__Battery__Sequence
{
  sdv_serial__msg__Battery * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_serial__msg__Battery__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_SERIAL__MSG__DETAIL__BATTERY__STRUCT_H_
