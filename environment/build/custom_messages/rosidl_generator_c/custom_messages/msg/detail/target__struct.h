// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__TARGET__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Target in the package custom_messages.
typedef struct custom_messages__msg__Target
{
  float x;
  float y;
} custom_messages__msg__Target;

// Struct for a sequence of custom_messages__msg__Target.
typedef struct custom_messages__msg__Target__Sequence
{
  custom_messages__msg__Target * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__Target__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__TARGET__STRUCT_H_
