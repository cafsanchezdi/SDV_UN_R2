// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sdv_process:msg/FirebaseProcess.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sdv_process/msg/firebase_process.hpp"


#ifndef SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__STRUCT_HPP_
#define SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sdv_process__msg__FirebaseProcess __attribute__((deprecated))
#else
# define DEPRECATED__sdv_process__msg__FirebaseProcess __declspec(deprecated)
#endif

namespace sdv_process
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FirebaseProcess_
{
  using Type = FirebaseProcess_<ContainerAllocator>;

  explicit FirebaseProcess_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->value = "";
    }
  }

  explicit FirebaseProcess_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc),
    value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->value = "";
    }
  }

  // field types and members
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sdv_process::msg::FirebaseProcess_<ContainerAllocator> *;
  using ConstRawPtr =
    const sdv_process::msg::FirebaseProcess_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sdv_process::msg::FirebaseProcess_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sdv_process::msg::FirebaseProcess_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sdv_process::msg::FirebaseProcess_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sdv_process::msg::FirebaseProcess_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sdv_process::msg::FirebaseProcess_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sdv_process::msg::FirebaseProcess_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sdv_process::msg::FirebaseProcess_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sdv_process::msg::FirebaseProcess_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sdv_process__msg__FirebaseProcess
    std::shared_ptr<sdv_process::msg::FirebaseProcess_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sdv_process__msg__FirebaseProcess
    std::shared_ptr<sdv_process::msg::FirebaseProcess_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FirebaseProcess_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const FirebaseProcess_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FirebaseProcess_

// alias to use template instance with default allocator
using FirebaseProcess =
  sdv_process::msg::FirebaseProcess_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sdv_process

#endif  // SDV_PROCESS__MSG__DETAIL__FIREBASE_PROCESS__STRUCT_HPP_
