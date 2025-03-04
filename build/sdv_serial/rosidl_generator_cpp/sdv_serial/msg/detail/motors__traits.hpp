// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_serial:msg/Motors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/motors.hpp"


#ifndef SDV_SERIAL__MSG__DETAIL__MOTORS__TRAITS_HPP_
#define SDV_SERIAL__MSG__DETAIL__MOTORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_serial/msg/detail/motors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sdv_serial
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motors & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: left_percent
  {
    out << "left_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.left_percent, out);
    out << ", ";
  }

  // member: right_percent
  {
    out << "right_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.right_percent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motors & msg,
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

  // member: left_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.left_percent, out);
    out << "\n";
  }

  // member: right_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.right_percent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motors & msg, bool use_flow_style = false)
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
  const sdv_serial::msg::Motors & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_serial::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_serial::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_serial::msg::Motors & msg)
{
  return sdv_serial::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_serial::msg::Motors>()
{
  return "sdv_serial::msg::Motors";
}

template<>
inline const char * name<sdv_serial::msg::Motors>()
{
  return "sdv_serial/msg/Motors";
}

template<>
struct has_fixed_size<sdv_serial::msg::Motors>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sdv_serial::msg::Motors>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sdv_serial::msg::Motors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_SERIAL__MSG__DETAIL__MOTORS__TRAITS_HPP_
