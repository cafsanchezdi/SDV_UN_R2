// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_serial:msg/Battery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/battery.hpp"


#ifndef SDV_SERIAL__MSG__DETAIL__BATTERY__TRAITS_HPP_
#define SDV_SERIAL__MSG__DETAIL__BATTERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_serial/msg/detail/battery__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sdv_serial
{

namespace msg
{

inline void to_flow_style_yaml(
  const Battery & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: current_main
  {
    out << "current_main: ";
    rosidl_generator_traits::value_to_yaml(msg.current_main, out);
    out << ", ";
  }

  // member: voltage_main
  {
    out << "voltage_main: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_main, out);
    out << ", ";
  }

  // member: current_laser
  {
    out << "current_laser: ";
    rosidl_generator_traits::value_to_yaml(msg.current_laser, out);
    out << ", ";
  }

  // member: voltage_laser
  {
    out << "voltage_laser: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_laser, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Battery & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: current_main
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_main: ";
    rosidl_generator_traits::value_to_yaml(msg.current_main, out);
    out << "\n";
  }

  // member: voltage_main
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_main: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_main, out);
    out << "\n";
  }

  // member: current_laser
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_laser: ";
    rosidl_generator_traits::value_to_yaml(msg.current_laser, out);
    out << "\n";
  }

  // member: voltage_laser
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_laser: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_laser, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Battery & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sdv_serial

namespace rosidl_generator_traits
{

[[deprecated("use sdv_serial::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sdv_serial::msg::Battery & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_serial::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_serial::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_serial::msg::Battery & msg)
{
  return sdv_serial::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_serial::msg::Battery>()
{
  return "sdv_serial::msg::Battery";
}

template<>
inline const char * name<sdv_serial::msg::Battery>()
{
  return "sdv_serial/msg/Battery";
}

template<>
struct has_fixed_size<sdv_serial::msg::Battery>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sdv_serial::msg::Battery>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sdv_serial::msg::Battery>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_SERIAL__MSG__DETAIL__BATTERY__TRAITS_HPP_
