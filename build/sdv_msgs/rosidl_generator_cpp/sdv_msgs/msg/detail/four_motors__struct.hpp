// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_msgs:msg/FourMotors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_msgs/msg/four_motors.hpp"


#ifndef SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__STRUCT_HPP_
#define SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sdv_msgs__msg__FourMotors __attribute__((deprecated))
#else
# define DEPRECATED__sdv_msgs__msg__FourMotors __declspec(deprecated)
#endif

namespace sdv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FourMotors_
{
  using Type = FourMotors_<ContainerAllocator>;

  explicit FourMotors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->back_left_rps = 0.0;
      this->back_right_rps = 0.0;
      this->front_left_rps = 0.0;
      this->front_right_rps = 0.0;
    }
  }

  explicit FourMotors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->back_left_rps = 0.0;
      this->back_right_rps = 0.0;
      this->front_left_rps = 0.0;
      this->front_right_rps = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _back_left_rps_type =
    double;
  _back_left_rps_type back_left_rps;
  using _back_right_rps_type =
    double;
  _back_right_rps_type back_right_rps;
  using _front_left_rps_type =
    double;
  _front_left_rps_type front_left_rps;
  using _front_right_rps_type =
    double;
  _front_right_rps_type front_right_rps;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__back_left_rps(
    const double & _arg)
  {
    this->back_left_rps = _arg;
    return *this;
  }
  Type & set__back_right_rps(
    const double & _arg)
  {
    this->back_right_rps = _arg;
    return *this;
  }
  Type & set__front_left_rps(
    const double & _arg)
  {
    this->front_left_rps = _arg;
    return *this;
  }
  Type & set__front_right_rps(
    const double & _arg)
  {
    this->front_right_rps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_msgs::msg::FourMotors_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_msgs::msg::FourMotors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_msgs::msg::FourMotors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_msgs::msg::FourMotors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::FourMotors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::FourMotors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_msgs::msg::FourMotors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_msgs::msg::FourMotors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_msgs::msg::FourMotors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_msgs::msg::FourMotors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_msgs__msg__FourMotors
    std::shared_ptr<sdv_msgs::msg::FourMotors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_msgs__msg__FourMotors
    std::shared_ptr<sdv_msgs::msg::FourMotors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FourMotors_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->back_left_rps != other.back_left_rps) {
      return false;
    }
    if (this->back_right_rps != other.back_right_rps) {
      return false;
    }
    if (this->front_left_rps != other.front_left_rps) {
      return false;
    }
    if (this->front_right_rps != other.front_right_rps) {
      return false;
    }
    return true;
  }
  bool operator!=(const FourMotors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FourMotors_

// alias to use template instance with default allocator
using FourMotors =
  sdv_msgs::msg::FourMotors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_msgs

#endif  // SDV_MSGS__MSG__DETAIL__FOUR_MOTORS__STRUCT_HPP_
