// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_serial:msg/Ultrasound.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_serial/msg/ultrasound.hpp"


#ifndef SDV_SERIAL__MSG__DETAIL__ULTRASOUND__STRUCT_HPP_
#define SDV_SERIAL__MSG__DETAIL__ULTRASOUND__STRUCT_HPP_

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
# define DEPRECATED__sdv_serial__msg__Ultrasound __attribute__((deprecated))
#else
# define DEPRECATED__sdv_serial__msg__Ultrasound __declspec(deprecated)
#endif

namespace sdv_serial
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ultrasound_
{
  using Type = Ultrasound_<ContainerAllocator>;

  explicit Ultrasound_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_1 = 0ul;
      this->sensor_2 = 0ul;
      this->sensor_3 = 0ul;
      this->sensor_4 = 0ul;
      this->sensor_5 = 0ul;
      this->sensor_6 = 0ul;
    }
  }

  explicit Ultrasound_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_1 = 0ul;
      this->sensor_2 = 0ul;
      this->sensor_3 = 0ul;
      this->sensor_4 = 0ul;
      this->sensor_5 = 0ul;
      this->sensor_6 = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_1_type =
    uint32_t;
  _sensor_1_type sensor_1;
  using _sensor_2_type =
    uint32_t;
  _sensor_2_type sensor_2;
  using _sensor_3_type =
    uint32_t;
  _sensor_3_type sensor_3;
  using _sensor_4_type =
    uint32_t;
  _sensor_4_type sensor_4;
  using _sensor_5_type =
    uint32_t;
  _sensor_5_type sensor_5;
  using _sensor_6_type =
    uint32_t;
  _sensor_6_type sensor_6;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_1(
    const uint32_t & _arg)
  {
    this->sensor_1 = _arg;
    return *this;
  }
  Type & set__sensor_2(
    const uint32_t & _arg)
  {
    this->sensor_2 = _arg;
    return *this;
  }
  Type & set__sensor_3(
    const uint32_t & _arg)
  {
    this->sensor_3 = _arg;
    return *this;
  }
  Type & set__sensor_4(
    const uint32_t & _arg)
  {
    this->sensor_4 = _arg;
    return *this;
  }
  Type & set__sensor_5(
    const uint32_t & _arg)
  {
    this->sensor_5 = _arg;
    return *this;
  }
  Type & set__sensor_6(
    const uint32_t & _arg)
  {
    this->sensor_6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_serial::msg::Ultrasound_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_serial::msg::Ultrasound_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_serial::msg::Ultrasound_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_serial::msg::Ultrasound_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_serial::msg::Ultrasound_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_serial::msg::Ultrasound_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_serial::msg::Ultrasound_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_serial::msg::Ultrasound_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_serial::msg::Ultrasound_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_serial::msg::Ultrasound_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_serial__msg__Ultrasound
    std::shared_ptr<sdv_serial::msg::Ultrasound_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_serial__msg__Ultrasound
    std::shared_ptr<sdv_serial::msg::Ultrasound_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ultrasound_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_1 != other.sensor_1) {
      return false;
    }
    if (this->sensor_2 != other.sensor_2) {
      return false;
    }
    if (this->sensor_3 != other.sensor_3) {
      return false;
    }
    if (this->sensor_4 != other.sensor_4) {
      return false;
    }
    if (this->sensor_5 != other.sensor_5) {
      return false;
    }
    if (this->sensor_6 != other.sensor_6) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ultrasound_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ultrasound_

// alias to use template instance with default allocator
using Ultrasound =
  sdv_serial::msg::Ultrasound_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_serial

#endif  // SDV_SERIAL__MSG__DETAIL__ULTRASOUND__STRUCT_HPP_
