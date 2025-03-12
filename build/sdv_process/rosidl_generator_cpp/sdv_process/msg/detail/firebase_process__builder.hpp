// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_process:msg/FirebaseProcess.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_process/msg/firebase_process.hpp"


#ifndef SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__BUILDER_HPP_
#define SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_process/msg/detail/firebase_process__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_process
{

namespace msg
{

namespace builder
{

class Init_FirebaseProcess_value
{
public:
  explicit Init_FirebaseProcess_value(::sdv_process::msg::FirebaseProcess & msg)
  : msg_(msg)
  {}
  ::sdv_process::msg::FirebaseProcess value(::sdv_process::msg::FirebaseProcess::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_process::msg::FirebaseProcess msg_;
};

class Init_FirebaseProcess_key
{
public:
  Init_FirebaseProcess_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FirebaseProcess_value key(::sdv_process::msg::FirebaseProcess::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_FirebaseProcess_value(msg_);
  }

private:
  ::sdv_process::msg::FirebaseProcess msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_process::msg::FirebaseProcess>()
{
  return sdv_process::msg::builder::Init_FirebaseProcess_key();
}

}  // namespace sdv_process

#endif  // SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__BUILDER_HPP_
