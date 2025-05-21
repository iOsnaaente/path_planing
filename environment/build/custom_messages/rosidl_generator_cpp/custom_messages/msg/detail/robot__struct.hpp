// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_messages:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__STRUCT_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_messages__msg__Robot __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__msg__Robot __declspec(deprecated)
#endif

namespace custom_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Robot_
{
  using Type = Robot_<ContainerAllocator>;

  explicit Robot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actual_x = 0.0f;
      this->actual_y = 0.0f;
      this->new_x = 0.0f;
      this->new_y = 0.0f;
    }
  }

  explicit Robot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actual_x = 0.0f;
      this->actual_y = 0.0f;
      this->new_x = 0.0f;
      this->new_y = 0.0f;
    }
  }

  // field types and members
  using _actual_x_type =
    float;
  _actual_x_type actual_x;
  using _actual_y_type =
    float;
  _actual_y_type actual_y;
  using _new_x_type =
    float;
  _new_x_type new_x;
  using _new_y_type =
    float;
  _new_y_type new_y;

  // setters for named parameter idiom
  Type & set__actual_x(
    const float & _arg)
  {
    this->actual_x = _arg;
    return *this;
  }
  Type & set__actual_y(
    const float & _arg)
  {
    this->actual_y = _arg;
    return *this;
  }
  Type & set__new_x(
    const float & _arg)
  {
    this->new_x = _arg;
    return *this;
  }
  Type & set__new_y(
    const float & _arg)
  {
    this->new_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::msg::Robot_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::msg::Robot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::msg::Robot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::msg::Robot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::Robot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::Robot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::Robot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::Robot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::msg::Robot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::msg::Robot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__msg__Robot
    std::shared_ptr<custom_messages::msg::Robot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__msg__Robot
    std::shared_ptr<custom_messages::msg::Robot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robot_ & other) const
  {
    if (this->actual_x != other.actual_x) {
      return false;
    }
    if (this->actual_y != other.actual_y) {
      return false;
    }
    if (this->new_x != other.new_x) {
      return false;
    }
    if (this->new_y != other.new_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robot_

// alias to use template instance with default allocator
using Robot =
  custom_messages::msg::Robot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__STRUCT_HPP_
