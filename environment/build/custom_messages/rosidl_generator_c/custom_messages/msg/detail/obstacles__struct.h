// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messages:msg/Obstacles.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__OBSTACLES__STRUCT_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__OBSTACLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'kind'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Obstacles in the package custom_messages.
typedef struct custom_messages__msg__Obstacles
{
  rosidl_runtime_c__String kind;
  float x;
  float y;
  float p1;
  float p2;
} custom_messages__msg__Obstacles;

// Struct for a sequence of custom_messages__msg__Obstacles.
typedef struct custom_messages__msg__Obstacles__Sequence
{
  custom_messages__msg__Obstacles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messages__msg__Obstacles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__OBSTACLES__STRUCT_H_
