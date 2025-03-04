// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_serial:msg/Ultrasound.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/ultrasound.hpp"


#ifndef SDV_SERIAL__MSG__DETAIL__ULTRASOUND__TRAITS_HPP_
#define SDV_SERIAL__MSG__DETAIL__ULTRASOUND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_serial/msg/detail/ultrasound__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sdv_serial
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ultrasound & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor_1
  {
    out << "sensor_1: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_1, out);
    out << ", ";
  }

  // member: sensor_2
  {
    out << "sensor_2: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_2, out);
    out << ", ";
  }

  // member: sensor_3
  {
    out << "sensor_3: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_3, out);
    out << ", ";
  }

  // member: sensor_4
  {
    out << "sensor_4: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_4, out);
    out << ", ";
  }

  // member: sensor_5
  {
    out << "sensor_5: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_5, out);
    out << ", ";
  }

  // member: sensor_6
  {
    out << "sensor_6: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ultrasound & msg,
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

  // member: sensor_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_1: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_1, out);
    out << "\n";
  }

  // member: sensor_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_2: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_2, out);
    out << "\n";
  }

  // member: sensor_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_3: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_3, out);
    out << "\n";
  }

  // member: sensor_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_4: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_4, out);
    out << "\n";
  }

  // member: sensor_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_5: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_5, out);
    out << "\n";
  }

  // member: sensor_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_6: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ultrasound & msg, bool use_flow_style = false)
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
  const sdv_serial::msg::Ultrasound & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_serial::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_serial::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_serial::msg::Ultrasound & msg)
{
  return sdv_serial::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_serial::msg::Ultrasound>()
{
  return "sdv_serial::msg::Ultrasound";
}

template<>
inline const char * name<sdv_serial::msg::Ultrasound>()
{
  return "sdv_serial/msg/Ultrasound";
}

template<>
struct has_fixed_size<sdv_serial::msg::Ultrasound>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sdv_serial::msg::Ultrasound>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sdv_serial::msg::Ultrasound>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_SERIAL__MSG__DETAIL__ULTRASOUND__TRAITS_HPP_
