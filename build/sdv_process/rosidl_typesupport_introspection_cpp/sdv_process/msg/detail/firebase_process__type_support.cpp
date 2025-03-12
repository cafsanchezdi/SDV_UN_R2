// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sdv_process:msg/FirebaseProcess.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sdv_process/msg/detail/firebase_process__functions.h"
#include "sdv_process/msg/detail/firebase_process__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sdv_process
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FirebaseProcess_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sdv_process::msg::FirebaseProcess(_init);
}

void FirebaseProcess_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sdv_process::msg::FirebaseProcess *>(message_memory);
  typed_message->~FirebaseProcess();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FirebaseProcess_message_member_array[2] = {
  {
    "key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_process::msg::FirebaseProcess, key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sdv_process::msg::FirebaseProcess, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FirebaseProcess_message_members = {
  "sdv_process::msg",  // message namespace
  "FirebaseProcess",  // message name
  2,  // number of fields
  sizeof(sdv_process::msg::FirebaseProcess),
  false,  // has_any_key_member_
  FirebaseProcess_message_member_array,  // message members
  FirebaseProcess_init_function,  // function to initialize message memory (memory has to be allocated)
  FirebaseProcess_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FirebaseProcess_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FirebaseProcess_message_members,
  get_message_typesupport_handle_function,
  &sdv_process__msg__FirebaseProcess__get_type_hash,
  &sdv_process__msg__FirebaseProcess__get_type_description,
  &sdv_process__msg__FirebaseProcess__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sdv_process


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sdv_process::msg::FirebaseProcess>()
{
  return &::sdv_process::msg::rosidl_typesupport_introspection_cpp::FirebaseProcess_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sdv_process, msg, FirebaseProcess)() {
  return &::sdv_process::msg::rosidl_typesupport_introspection_cpp::FirebaseProcess_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
