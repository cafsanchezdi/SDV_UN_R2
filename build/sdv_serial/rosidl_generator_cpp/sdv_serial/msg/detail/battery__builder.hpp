// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_serial:msg/Battery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/battery.hpp"


#ifndef SDV_SERIAL__MSG__DETAIL__BATTERY__BUILDER_HPP_
#define SDV_SERIAL__MSG__DETAIL__BATTERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_serial/msg/detail/battery__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_serial
{

namespace msg
{

namespace builder
{

class Init_Battery_voltage_laser
{
public:
  explicit Init_Battery_voltage_laser(::sdv_serial::msg::Battery & msg)
  : msg_(msg)
  {}
  ::sdv_serial::msg::Battery voltage_laser(::sdv_serial::msg::Battery::_voltage_laser_type arg)
  {
    msg_.voltage_laser = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_serial::msg::Battery msg_;
};

class Init_Battery_current_laser
{
public:
  explicit Init_Battery_current_laser(::sdv_serial::msg::Battery & msg)
  : msg_(msg)
  {}
  Init_Battery_voltage_laser current_laser(::sdv_serial::msg::Battery::_current_laser_type arg)
  {
    msg_.current_laser = std::move(arg);
    return Init_Battery_voltage_laser(msg_);
  }

private:
  ::sdv_serial::msg::Battery msg_;
};

class Init_Battery_voltage_main
{
public:
  explicit Init_Battery_voltage_main(::sdv_serial::msg::Battery & msg)
  : msg_(msg)
  {}
  Init_Battery_current_laser voltage_main(::sdv_serial::msg::Battery::_voltage_main_type arg)
  {
    msg_.voltage_main = std::move(arg);
    return Init_Battery_current_laser(msg_);
  }

private:
  ::sdv_serial::msg::Battery msg_;
};

class Init_Battery_current_main
{
public:
  explicit Init_Battery_current_main(::sdv_serial::msg::Battery & msg)
  : msg_(msg)
  {}
  Init_Battery_voltage_main current_main(::sdv_serial::msg::Battery::_current_main_type arg)
  {
    msg_.current_main = std::move(arg);
    return Init_Battery_voltage_main(msg_);
  }

private:
  ::sdv_serial::msg::Battery msg_;
};

class Init_Battery_header
{
public:
  Init_Battery_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Battery_current_main header(::sdv_serial::msg::Battery::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Battery_current_main(msg_);
  }

private:
  ::sdv_serial::msg::Battery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_serial::msg::Battery>()
{
  return sdv_serial::msg::builder::Init_Battery_header();
}

}  // namespace sdv_serial

#endif  // SDV_SERIAL__MSG__DETAIL__BATTERY__BUILDER_HPP_
