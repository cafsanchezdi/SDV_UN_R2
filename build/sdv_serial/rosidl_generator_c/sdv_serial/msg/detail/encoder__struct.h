// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_serial:msg/Encoder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/encoder.h"


#ifndef SDV_SERIAL__MSG__DETAIL__ENCODER__STRUCT_H_
#define SDV_SERIAL__MSG__DETAIL__ENCODER__STRUCT_H_

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

/// Struct defined in msg/Encoder in the package sdv_serial.
/**
  * Encoder.msg
 */
typedef struct sdv_serial__msg__Encoder
{
  std_msgs__msg__Header header;
  int32_t rpm_left;
  int32_t rpm_right;
  int32_t motor_current_left;
  int32_t motor_current_right;
} sdv_serial__msg__Encoder;

// Struct for a sequence of sdv_serial__msg__Encoder.
typedef struct sdv_serial__msg__Encoder__Sequence
{
  sdv_serial__msg__Encoder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_serial__msg__Encoder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_SERIAL__MSG__DETAIL__ENCODER__STRUCT_H_
