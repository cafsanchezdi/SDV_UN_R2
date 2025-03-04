// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_serial:msg/Motors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/motors.h"


#ifndef SDV_SERIAL__MSG__DETAIL__MOTORS__STRUCT_H_
#define SDV_SERIAL__MSG__DETAIL__MOTORS__STRUCT_H_

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

/// Struct defined in msg/Motors in the package sdv_serial.
/**
  * Motors.msg
 */
typedef struct sdv_serial__msg__Motors
{
  std_msgs__msg__Header header;
  double left_percent;
  double right_percent;
} sdv_serial__msg__Motors;

// Struct for a sequence of sdv_serial__msg__Motors.
typedef struct sdv_serial__msg__Motors__Sequence
{
  sdv_serial__msg__Motors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_serial__msg__Motors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_SERIAL__MSG__DETAIL__MOTORS__STRUCT_H_
