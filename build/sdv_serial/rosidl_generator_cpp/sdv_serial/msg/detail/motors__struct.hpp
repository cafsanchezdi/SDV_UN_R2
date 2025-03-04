// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_serial:msg/Motors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/motors.hpp"


#ifndef SDV_SERIAL__MSG__DETAIL__MOTORS__STRUCT_HPP_
#define SDV_SERIAL__MSG__DETAIL__MOTORS__STRUCT_HPP_

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
# define DEPRECATED__sdv_serial__msg__Motors __attribute__((deprecated))
#else
# define DEPRECATED__sdv_serial__msg__Motors __declspec(deprecated)
#endif

namespace sdv_serial
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motors_
{
  using Type = Motors_<ContainerAllocator>;

  explicit Motors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_percent = 0.0;
      this->right_percent = 0.0;
    }
  }

  explicit Motors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_percent = 0.0;
      this->right_percent = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _left_percent_type =
    double;
  _left_percent_type left_percent;
  using _right_percent_type =
    double;
  _right_percent_type right_percent;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__left_percent(
    const double & _arg)
  {
    this->left_percent = _arg;
    return *this;
  }
  Type & set__right_percent(
    const double & _arg)
  {
    this->right_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_serial::msg::Motors_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_serial::msg::Motors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_serial::msg::Motors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_serial::msg::Motors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_serial::msg::Motors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_serial::msg::Motors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_serial::msg::Motors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_serial::msg::Motors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_serial::msg::Motors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_serial::msg::Motors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_serial__msg__Motors
    std::shared_ptr<sdv_serial::msg::Motors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_serial__msg__Motors
    std::shared_ptr<sdv_serial::msg::Motors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motors_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->left_percent != other.left_percent) {
      return false;
    }
    if (this->right_percent != other.right_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motors_

// alias to use template instance with default allocator
using Motors =
  sdv_serial::msg::Motors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_serial

#endif  // SDV_SERIAL__MSG__DETAIL__MOTORS__STRUCT_HPP_
