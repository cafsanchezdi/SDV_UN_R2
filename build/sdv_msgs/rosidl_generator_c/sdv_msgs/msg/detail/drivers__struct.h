// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_msgs:msg/Drivers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/drivers.h"


#ifndef SDV_MSGS__MSG__DETAIL__DRIVERS__STRUCT_H_
#define SDV_MSGS__MSG__DETAIL__DRIVERS__STRUCT_H_

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
// Member 'drivers'
#include "sdv_msgs/msg/detail/motor_driver__struct.h"

/// Struct defined in msg/Drivers in the package sdv_msgs.
/**
  * Drivers.msg
 */
typedef struct sdv_msgs__msg__Drivers
{
  std_msgs__msg__Header header;
  sdv_msgs__msg__MotorDriver__Sequence drivers;
} sdv_msgs__msg__Drivers;

// Struct for a sequence of sdv_msgs__msg__Drivers.
typedef struct sdv_msgs__msg__Drivers__Sequence
{
  sdv_msgs__msg__Drivers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_msgs__msg__Drivers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_MSGS__MSG__DETAIL__DRIVERS__STRUCT_H_
