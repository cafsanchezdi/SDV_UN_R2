// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sdv_process:msg/FirebaseProcess.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sdv_process/msg/detail/firebase_process__rosidl_typesupport_introspection_c.h"
#include "sdv_process/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sdv_process/msg/detail/firebase_process__functions.h"
#include "sdv_process/msg/detail/firebase_process__struct.h"


// Include directives for member types
// Member `key`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sdv_process__msg__FirebaseProcess__init(message_memory);
}

void sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_fini_function(void * message_memory)
{
  sdv_process__msg__FirebaseProcess__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_message_member_array[2] = {
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_process__msg__FirebaseProcess, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_process__msg__FirebaseProcess, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_message_members = {
  "sdv_process__msg",  // message namespace
  "FirebaseProcess",  // message name
  2,  // number of fields
  sizeof(sdv_process__msg__FirebaseProcess),
  false,  // has_any_key_member_
  sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_message_member_array,  // message members
  sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_init_function,  // function to initialize message memory (memory has to be allocated)
  sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_message_type_support_handle = {
  0,
  &sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_message_members,
  get_message_typesupport_handle_function,
  &sdv_process__msg__FirebaseProcess__get_type_hash,
  &sdv_process__msg__FirebaseProcess__get_type_description,
  &sdv_process__msg__FirebaseProcess__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sdv_process
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sdv_process, msg, FirebaseProcess)() {
  if (!sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_message_type_support_handle.typesupport_identifier) {
    sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sdv_process__msg__FirebaseProcess__rosidl_typesupport_introspection_c__FirebaseProcess_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
