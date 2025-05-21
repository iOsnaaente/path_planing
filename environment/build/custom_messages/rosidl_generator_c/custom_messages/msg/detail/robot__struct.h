// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Robot in the package custom_messages.
typedef struct custom_messages__msg__Robot
{
  float actual_x;
  float actual_y;
  float new_x;
  float new_y;
} custom_messages__msg__Robot;

// Struct for a sequence of custom_messages__msg__Robot.
typedef struct custom_messages__msg__Robot__Sequence
{
  custom_messages__msg__Robot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__Robot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__ROBOT__STRUCT_H_
