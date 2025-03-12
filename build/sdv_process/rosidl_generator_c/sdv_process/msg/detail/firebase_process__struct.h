// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sdv_process:msg/FirebaseProcess.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_process/msg/firebase_process.h"


#ifndef SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__STRUCT_H_
#define SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FirebaseProcess in the package sdv_process.
typedef struct sdv_process__msg__FirebaseProcess
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
} sdv_process__msg__FirebaseProcess;

// Struct for a sequence of sdv_process__msg__FirebaseProcess.
typedef struct sdv_process__msg__FirebaseProcess__Sequence
{
  sdv_process__msg__FirebaseProcess * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sdv_process__msg__FirebaseProcess__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__STRUCT_H_
