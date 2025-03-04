// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_serial:msg/Battery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/battery.hpp"


#ifndef SDV_SERIAL__MSG__DETAIL__BATTERY__STRUCT_HPP_
#define SDV_SERIAL__MSG__DETAIL__BATTERY__STRUCT_HPP_

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
# define DEPRECATED__sdv_serial__msg__Battery __attribute__((deprecated))
#else
# define DEPRECATED__sdv_serial__msg__Battery __declspec(deprecated)
#endif

namespace sdv_serial
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Battery_
{
  using Type = Battery_<ContainerAllocator>;

  explicit Battery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_main = 0ul;
      this->voltage_main = 0ul;
      this->current_laser = 0ul;
      this->voltage_laser = 0ul;
    }
  }

  explicit Battery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_main = 0ul;
      this->voltage_main = 0ul;
      this->current_laser = 0ul;
      this->voltage_laser = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _current_main_type =
    uint32_t;
  _current_main_type current_main;
  using _voltage_main_type =
    uint32_t;
  _voltage_main_type voltage_main;
  using _current_laser_type =
    uint32_t;
  _current_laser_type current_laser;
  using _voltage_laser_type =
    uint32_t;
  _voltage_laser_type voltage_laser;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current_main(
    const uint32_t & _arg)
  {
    this->current_main = _arg;
    return *this;
  }
  Type & set__voltage_main(
    const uint32_t & _arg)
  {
    this->voltage_main = _arg;
    return *this;
  }
  Type & set__current_laser(
    const uint32_t & _arg)
  {
    this->current_laser = _arg;
    return *this;
  }
  Type & set__voltage_laser(
    const uint32_t & _arg)
  {
    this->voltage_laser = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_serial::msg::Battery_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_serial::msg::Battery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_serial::msg::Battery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_serial::msg::Battery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_serial::msg::Battery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_serial::msg::Battery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_serial::msg::Battery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_serial::msg::Battery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_serial::msg::Battery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_serial::msg::Battery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_serial__msg__Battery
    std::shared_ptr<sdv_serial::msg::Battery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_serial__msg__Battery
    std::shared_ptr<sdv_serial::msg::Battery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Battery_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->current_main != other.current_main) {
      return false;
    }
    if (this->voltage_main != other.voltage_main) {
      return false;
    }
    if (this->current_laser != other.current_laser) {
      return false;
    }
    if (this->voltage_laser != other.voltage_laser) {
      return false;
    }
    return true;
  }
  bool operator!=(const Battery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Battery_

// alias to use template instance with default allocator
using Battery =
  sdv_serial::msg::Battery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_serial

#endif  // SDV_SERIAL__MSG__DETAIL__BATTERY__STRUCT_HPP_
