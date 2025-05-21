// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/Obstacles.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__OBSTACLES__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__OBSTACLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/obstacles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_Obstacles_p2
{
public:
  explicit Init_Obstacles_p2(::custom_messages::msg::Obstacles & msg)
  : msg_(msg)
  {}
  ::custom_messages::msg::Obstacles p2(::custom_messages::msg::Obstacles::_p2_type arg)
  {
    msg_.p2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::Obstacles msg_;
};

class Init_Obstacles_p1
{
public:
  explicit Init_Obstacles_p1(::custom_messages::msg::Obstacles & msg)
  : msg_(msg)
  {}
  Init_Obstacles_p2 p1(::custom_messages::msg::Obstacles::_p1_type arg)
  {
    msg_.p1 = std::move(arg);
    return Init_Obstacles_p2(msg_);
  }

private:
  ::custom_messages::msg::Obstacles msg_;
};

class Init_Obstacles_y
{
public:
  explicit Init_Obstacles_y(::custom_messages::msg::Obstacles & msg)
  : msg_(msg)
  {}
  Init_Obstacles_p1 y(::custom_messages::msg::Obstacles::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Obstacles_p1(msg_);
  }

private:
  ::custom_messages::msg::Obstacles msg_;
};

class Init_Obstacles_x
{
public:
  explicit Init_Obstacles_x(::custom_messages::msg::Obstacles & msg)
  : msg_(msg)
  {}
  Init_Obstacles_y x(::custom_messages::msg::Obstacles::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Obstacles_y(msg_);
  }

private:
  ::custom_messages::msg::Obstacles msg_;
};

class Init_Obstacles_kind
{
public:
  Init_Obstacles_kind()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacles_x kind(::custom_messages::msg::Obstacles::_kind_type arg)
  {
    msg_.kind = std::move(arg);
    return Init_Obstacles_x(msg_);
  }

private:
  ::custom_messages::msg::Obstacles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::Obstacles>()
{
  return custom_messages::msg::builder::Init_Obstacles_kind();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__OBSTACLES__BUILDER_HPP_
