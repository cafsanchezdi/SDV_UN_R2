// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_serial:msg/Motors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/motors.hpp"


#ifndef SDV_SERIAL__MSG__DETAIL__MOTORS__BUILDER_HPP_
#define SDV_SERIAL__MSG__DETAIL__MOTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_serial/msg/detail/motors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_serial
{

namespace msg
{

namespace builder
{

class Init_Motors_right_percent
{
public:
  explicit Init_Motors_right_percent(::sdv_serial::msg::Motors & msg)
  : msg_(msg)
  {}
  ::sdv_serial::msg::Motors right_percent(::sdv_serial::msg::Motors::_right_percent_type arg)
  {
    msg_.right_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_serial::msg::Motors msg_;
};

class Init_Motors_left_percent
{
public:
  explicit Init_Motors_left_percent(::sdv_serial::msg::Motors & msg)
  : msg_(msg)
  {}
  Init_Motors_right_percent left_percent(::sdv_serial::msg::Motors::_left_percent_type arg)
  {
    msg_.left_percent = std::move(arg);
    return Init_Motors_right_percent(msg_);
  }

private:
  ::sdv_serial::msg::Motors msg_;
};

class Init_Motors_header
{
public:
  Init_Motors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motors_left_percent header(::sdv_serial::msg::Motors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Motors_left_percent(msg_);
  }

private:
  ::sdv_serial::msg::Motors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_serial::msg::Motors>()
{
  return sdv_serial::msg::builder::Init_Motors_header();
}

}  // namespace sdv_serial

#endif  // SDV_SERIAL__MSG__DETAIL__MOTORS__BUILDER_HPP_
