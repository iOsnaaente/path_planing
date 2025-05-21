// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_Robot_new_y
{
public:
  explicit Init_Robot_new_y(::custom_messages::msg::Robot & msg)
  : msg_(msg)
  {}
  ::custom_messages::msg::Robot new_y(::custom_messages::msg::Robot::_new_y_type arg)
  {
    msg_.new_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::Robot msg_;
};

class Init_Robot_new_x
{
public:
  explicit Init_Robot_new_x(::custom_messages::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_new_y new_x(::custom_messages::msg::Robot::_new_x_type arg)
  {
    msg_.new_x = std::move(arg);
    return Init_Robot_new_y(msg_);
  }

private:
  ::custom_messages::msg::Robot msg_;
};

class Init_Robot_actual_y
{
public:
  explicit Init_Robot_actual_y(::custom_messages::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_new_x actual_y(::custom_messages::msg::Robot::_actual_y_type arg)
  {
    msg_.actual_y = std::move(arg);
    return Init_Robot_new_x(msg_);
  }

private:
  ::custom_messages::msg::Robot msg_;
};

class Init_Robot_actual_x
{
public:
  Init_Robot_actual_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robot_actual_y actual_x(::custom_messages::msg::Robot::_actual_x_type arg)
  {
    msg_.actual_x = std::move(arg);
    return Init_Robot_actual_y(msg_);
  }

private:
  ::custom_messages::msg::Robot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::Robot>()
{
  return custom_messages::msg::builder::Init_Robot_actual_x();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__BUILDER_HPP_
