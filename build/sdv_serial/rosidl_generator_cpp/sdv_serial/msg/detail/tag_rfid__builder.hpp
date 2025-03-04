// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sdv_serial:msg/TagRfid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/tag_rfid.hpp"


#ifndef SDV_SERIAL__MSG__DETAIL__TAG_RFID__BUILDER_HPP_
#define SDV_SERIAL__MSG__DETAIL__TAG_RFID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sdv_serial/msg/detail/tag_rfid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sdv_serial
{

namespace msg
{

namespace builder
{

class Init_TagRfid_end_point
{
public:
  explicit Init_TagRfid_end_point(::sdv_serial::msg::TagRfid & msg)
  : msg_(msg)
  {}
  ::sdv_serial::msg::TagRfid end_point(::sdv_serial::msg::TagRfid::_end_point_type arg)
  {
    msg_.end_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sdv_serial::msg::TagRfid msg_;
};

class Init_TagRfid_start_point
{
public:
  explicit Init_TagRfid_start_point(::sdv_serial::msg::TagRfid & msg)
  : msg_(msg)
  {}
  Init_TagRfid_end_point start_point(::sdv_serial::msg::TagRfid::_start_point_type arg)
  {
    msg_.start_point = std::move(arg);
    return Init_TagRfid_end_point(msg_);
  }

private:
  ::sdv_serial::msg::TagRfid msg_;
};

class Init_TagRfid_product
{
public:
  explicit Init_TagRfid_product(::sdv_serial::msg::TagRfid & msg)
  : msg_(msg)
  {}
  Init_TagRfid_start_point product(::sdv_serial::msg::TagRfid::_product_type arg)
  {
    msg_.product = std::move(arg);
    return Init_TagRfid_start_point(msg_);
  }

private:
  ::sdv_serial::msg::TagRfid msg_;
};

class Init_TagRfid_process
{
public:
  explicit Init_TagRfid_process(::sdv_serial::msg::TagRfid & msg)
  : msg_(msg)
  {}
  Init_TagRfid_product process(::sdv_serial::msg::TagRfid::_process_type arg)
  {
    msg_.process = std::move(arg);
    return Init_TagRfid_product(msg_);
  }

private:
  ::sdv_serial::msg::TagRfid msg_;
};

class Init_TagRfid_header
{
public:
  Init_TagRfid_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TagRfid_process header(::sdv_serial::msg::TagRfid::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TagRfid_process(msg_);
  }

private:
  ::sdv_serial::msg::TagRfid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sdv_serial::msg::TagRfid>()
{
  return sdv_serial::msg::builder::Init_TagRfid_header();
}

}  // namespace sdv_serial

#endif  // SDV_SERIAL__MSG__DETAIL__TAG_RFID__BUILDER_HPP_
