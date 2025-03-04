// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_serial:msg/Flexiforce.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/flexiforce.h"


#ifndef SDV_SERIAL__MSG__DETAIL__FLEXIFORCE__STRUCT_H_
#define SDV_SERIAL__MSG__DETAIL__FLEXIFORCE__STRUCT_H_

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

/// Struct defined in msg/Flexiforce in the package sdv_serial.
/**
  * Flexiforce.msg
 */
typedef struct sdv_serial__msg__Flexiforce
{
  std_msgs__msg__Header header;
  uint32_t front_left;
  uint32_t front_right;
  uint32_t back_left;
  uint32_t back_right;
} sdv_serial__msg__Flexiforce;

// Struct for a sequence of sdv_serial__msg__Flexiforce.
typedef struct sdv_serial__msg__Flexiforce__Sequence
{
  sdv_serial__msg__Flexiforce * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_serial__msg__Flexiforce__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_SERIAL__MSG__DETAIL__FLEXIFORCE__STRUCT_H_
