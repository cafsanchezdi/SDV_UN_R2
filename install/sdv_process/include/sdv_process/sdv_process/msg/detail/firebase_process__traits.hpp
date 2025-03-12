// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sdv_process:msg/FirebaseProcess.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_process/msg/firebase_process.hpp"


#ifndef SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__TRAITS_HPP_
#define SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sdv_process/msg/detail/firebase_process__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sdv_process
{

namespace msg
{

inline void to_flow_style_yaml(
  const FirebaseProcess & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FirebaseProcess & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FirebaseProcess & msg, bool use_flow_style = false)
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

}  // namespace sdv_process

namespace rosidl_generator_traits
{

[[deprecated("use sdv_process::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sdv_process::msg::FirebaseProcess & msg,
  std::ostream & out, size_t indentation = 0)
{
  sdv_process::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sdv_process::msg::to_yaml() instead")]]
inline std::string to_yaml(const sdv_process::msg::FirebaseProcess & msg)
{
  return sdv_process::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sdv_process::msg::FirebaseProcess>()
{
  return "sdv_process::msg::FirebaseProcess";
}

template<>
inline const char * name<sdv_process::msg::FirebaseProcess>()
{
  return "sdv_process/msg/FirebaseProcess";
}

template<>
struct has_fixed_size<sdv_process::msg::FirebaseProcess>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sdv_process::msg::FirebaseProcess>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sdv_process::msg::FirebaseProcess>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__TRAITS_HPP_
