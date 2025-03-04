// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_serial:msg/Ultrasound.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/ultrasound.hpp"


#ifndef SDV_SERIAL__MSG__DETAIL__ULTRASOUND__BUILDER_HPP_
#define SDV_SERIAL__MSG__DETAIL__ULTRASOUND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_serial/msg/detail/ultrasound__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_serial
{

namespace msg
{

namespace builder
{

class Init_Ultrasound_sensor_6
{
public:
  explicit Init_Ultrasound_sensor_6(::sdv_serial::msg::Ultrasound & msg)
  : msg_(msg)
  {}
  ::sdv_serial::msg::Ultrasound sensor_6(::sdv_serial::msg::Ultrasound::_sensor_6_type arg)
  {
    msg_.sensor_6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_serial::msg::Ultrasound msg_;
};

class Init_Ultrasound_sensor_5
{
public:
  explicit Init_Ultrasound_sensor_5(::sdv_serial::msg::Ultrasound & msg)
  : msg_(msg)
  {}
  Init_Ultrasound_sensor_6 sensor_5(::sdv_serial::msg::Ultrasound::_sensor_5_type arg)
  {
    msg_.sensor_5 = std::move(arg);
    return Init_Ultrasound_sensor_6(msg_);
  }

private:
  ::sdv_serial::msg::Ultrasound msg_;
};

class Init_Ultrasound_sensor_4
{
public:
  explicit Init_Ultrasound_sensor_4(::sdv_serial::msg::Ultrasound & msg)
  : msg_(msg)
  {}
  Init_Ultrasound_sensor_5 sensor_4(::sdv_serial::msg::Ultrasound::_sensor_4_type arg)
  {
    msg_.sensor_4 = std::move(arg);
    return Init_Ultrasound_sensor_5(msg_);
  }

private:
  ::sdv_serial::msg::Ultrasound msg_;
};

class Init_Ultrasound_sensor_3
{
public:
  explicit Init_Ultrasound_sensor_3(::sdv_serial::msg::Ultrasound & msg)
  : msg_(msg)
  {}
  Init_Ultrasound_sensor_4 sensor_3(::sdv_serial::msg::Ultrasound::_sensor_3_type arg)
  {
    msg_.sensor_3 = std::move(arg);
    return Init_Ultrasound_sensor_4(msg_);
  }

private:
  ::sdv_serial::msg::Ultrasound msg_;
};

class Init_Ultrasound_sensor_2
{
public:
  explicit Init_Ultrasound_sensor_2(::sdv_serial::msg::Ultrasound & msg)
  : msg_(msg)
  {}
  Init_Ultrasound_sensor_3 sensor_2(::sdv_serial::msg::Ultrasound::_sensor_2_type arg)
  {
    msg_.sensor_2 = std::move(arg);
    return Init_Ultrasound_sensor_3(msg_);
  }

private:
  ::sdv_serial::msg::Ultrasound msg_;
};

class Init_Ultrasound_sensor_1
{
public:
  explicit Init_Ultrasound_sensor_1(::sdv_serial::msg::Ultrasound & msg)
  : msg_(msg)
  {}
  Init_Ultrasound_sensor_2 sensor_1(::sdv_serial::msg::Ultrasound::_sensor_1_type arg)
  {
    msg_.sensor_1 = std::move(arg);
    return Init_Ultrasound_sensor_2(msg_);
  }

private:
  ::sdv_serial::msg::Ultrasound msg_;
};

class Init_Ultrasound_header
{
public:
  Init_Ultrasound_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ultrasound_sensor_1 header(::sdv_serial::msg::Ultrasound::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Ultrasound_sensor_1(msg_);
  }

private:
  ::sdv_serial::msg::Ultrasound msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_serial::msg::Ultrasound>()
{
  return sdv_serial::msg::builder::Init_Ultrasound_header();
}

}  // namespace sdv_serial

#endif  // SDV_SERIAL__MSG__DETAIL__ULTRASOUND__BUILDER_HPP_
