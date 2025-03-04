// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_serial:msg/Ultrasound.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/ultrasound.h"


#ifndef SDV_SERIAL__MSG__DETAIL__ULTRASOUND__STRUCT_H_
#define SDV_SERIAL__MSG__DETAIL__ULTRASOUND__STRUCT_H_

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

/// Struct defined in msg/Ultrasound in the package sdv_serial.
/**
  * Ultrasound.msg
 */
typedef struct sdv_serial__msg__Ultrasound
{
  std_msgs__msg__Header header;
  uint32_t sensor_1;
  uint32_t sensor_2;
  uint32_t sensor_3;
  uint32_t sensor_4;
  uint32_t sensor_5;
  uint32_t sensor_6;
} sdv_serial__msg__Ultrasound;

// Struct for a sequence of sdv_serial__msg__Ultrasound.
typedef struct sdv_serial__msg__Ultrasound__Sequence
{
  sdv_serial__msg__Ultrasound * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_serial__msg__Ultrasound__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_SERIAL__MSG__DETAIL__ULTRASOUND__STRUCT_H_
