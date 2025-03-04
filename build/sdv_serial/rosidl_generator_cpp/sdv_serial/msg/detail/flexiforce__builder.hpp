// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_serial:msg/Flexiforce.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/flexiforce.hpp"


#ifndef SDV_SERIAL__MSG__DETAIL__FLEXIFORCE__BUILDER_HPP_
#define SDV_SERIAL__MSG__DETAIL__FLEXIFORCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_serial/msg/detail/flexiforce__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_serial
{

namespace msg
{

namespace builder
{

class Init_Flexiforce_back_right
{
public:
  explicit Init_Flexiforce_back_right(::sdv_serial::msg::Flexiforce & msg)
  : msg_(msg)
  {}
  ::sdv_serial::msg::Flexiforce back_right(::sdv_serial::msg::Flexiforce::_back_right_type arg)
  {
    msg_.back_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_serial::msg::Flexiforce msg_;
};

class Init_Flexiforce_back_left
{
public:
  explicit Init_Flexiforce_back_left(::sdv_serial::msg::Flexiforce & msg)
  : msg_(msg)
  {}
  Init_Flexiforce_back_right back_left(::sdv_serial::msg::Flexiforce::_back_left_type arg)
  {
    msg_.back_left = std::move(arg);
    return Init_Flexiforce_back_right(msg_);
  }

private:
  ::sdv_serial::msg::Flexiforce msg_;
};

class Init_Flexiforce_front_right
{
public:
  explicit Init_Flexiforce_front_right(::sdv_serial::msg::Flexiforce & msg)
  : msg_(msg)
  {}
  Init_Flexiforce_back_left front_right(::sdv_serial::msg::Flexiforce::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_Flexiforce_back_left(msg_);
  }

private:
  ::sdv_serial::msg::Flexiforce msg_;
};

class Init_Flexiforce_front_left
{
public:
  explicit Init_Flexiforce_front_left(::sdv_serial::msg::Flexiforce & msg)
  : msg_(msg)
  {}
  Init_Flexiforce_front_right front_left(::sdv_serial::msg::Flexiforce::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_Flexiforce_front_right(msg_);
  }

private:
  ::sdv_serial::msg::Flexiforce msg_;
};

class Init_Flexiforce_header
{
public:
  Init_Flexiforce_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Flexiforce_front_left header(::sdv_serial::msg::Flexiforce::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Flexiforce_front_left(msg_);
  }

private:
  ::sdv_serial::msg::Flexiforce msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_serial::msg::Flexiforce>()
{
  return sdv_serial::msg::builder::Init_Flexiforce_header();
}

}  // namespace sdv_serial

#endif  // SDV_SERIAL__MSG__DETAIL__FLEXIFORCE__BUILDER_HPP_
