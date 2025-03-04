// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sdv_serial:msg/Battery.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sdv_serial/msg/detail/battery__rosidl_typesupport_introspection_c.h"
#include "sdv_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sdv_serial/msg/detail/battery__functions.h"
#include "sdv_serial/msg/detail/battery__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sdv_serial__msg__Battery__init(message_memory);
}

void sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_fini_function(void * message_memory)
{
  sdv_serial__msg__Battery__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_serial__msg__Battery, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_main",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_serial__msg__Battery, current_main),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "voltage_main",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_serial__msg__Battery, voltage_main),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_laser",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_serial__msg__Battery, current_laser),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "voltage_laser",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_serial__msg__Battery, voltage_laser),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_message_members = {
  "sdv_serial__msg",  // message namespace
  "Battery",  // message name
  5,  // number of fields
  sizeof(sdv_serial__msg__Battery),
  false,  // has_any_key_member_
  sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_message_member_array,  // message members
  sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_init_function,  // function to initialize message memory (memory has to be allocated)
  sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_message_type_support_handle = {
  0,
  &sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_message_members,
  get_message_typesupport_handle_function,
  &sdv_serial__msg__Battery__get_type_hash,
  &sdv_serial__msg__Battery__get_type_description,
  &sdv_serial__msg__Battery__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sdv_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sdv_serial, msg, Battery)() {
  sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_message_type_support_handle.typesupport_identifier) {
    sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sdv_serial__msg__Battery__rosidl_typesupport_introspection_c__Battery_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
