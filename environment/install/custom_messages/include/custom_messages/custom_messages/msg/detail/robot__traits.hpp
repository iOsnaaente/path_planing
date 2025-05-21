// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_messages:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__TRAITS_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_messages/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Robot & msg,
  std::ostream & out)
{
  out << "{";
  // member: actual_x
  {
    out << "actual_x: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_x, out);
    out << ", ";
  }

  // member: actual_y
  {
    out << "actual_y: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_y, out);
    out << ", ";
  }

  // member: new_x
  {
    out << "new_x: ";
    rosidl_generator_traits::value_to_yaml(msg.new_x, out);
    out << ", ";
  }

  // member: new_y
  {
    out << "new_y: ";
    rosidl_generator_traits::value_to_yaml(msg.new_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: actual_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_x: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_x, out);
    out << "\n";
  }

  // member: actual_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_y: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_y, out);
    out << "\n";
  }

  // member: new_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_x: ";
    rosidl_generator_traits::value_to_yaml(msg.new_x, out);
    out << "\n";
  }

  // member: new_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_y: ";
    rosidl_generator_traits::value_to_yaml(msg.new_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robot & msg, bool use_flow_style = false)
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

}  // namespace custom_messages

namespace rosidl_generator_traits
{

[[deprecated("use custom_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_messages::msg::Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_messages::msg::Robot & msg)
{
  return custom_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_messages::msg::Robot>()
{
  return "custom_messages::msg::Robot";
}

template<>
inline const char * name<custom_messages::msg::Robot>()
{
  return "custom_messages/msg/Robot";
}

template<>
struct has_fixed_size<custom_messages::msg::Robot>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_messages::msg::Robot>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_messages::msg::Robot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__TRAITS_HPP_
