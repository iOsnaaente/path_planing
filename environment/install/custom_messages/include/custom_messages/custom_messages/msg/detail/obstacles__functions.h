// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_messages:msg/Obstacles.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__OBSTACLES__FUNCTIONS_H_
#define CUSTOM_MESSAGES__MSG__DETAIL__OBSTACLES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_messages/msg/rosidl_generator_c__visibility_control.h"

#include "custom_messages/msg/detail/obstacles__struct.h"

/// Initialize msg/Obstacles message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_messages__msg__Obstacles
 * )) before or use
 * custom_messages__msg__Obstacles__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
bool
custom_messages__msg__Obstacles__init(custom_messages__msg__Obstacles * msg);

/// Finalize msg/Obstacles message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
void
custom_messages__msg__Obstacles__fini(custom_messages__msg__Obstacles * msg);

/// Create msg/Obstacles message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_messages__msg__Obstacles__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
custom_messages__msg__Obstacles *
custom_messages__msg__Obstacles__create();

/// Destroy msg/Obstacles message.
/**
 * It calls
 * custom_messages__msg__Obstacles__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
void
custom_messages__msg__Obstacles__destroy(custom_messages__msg__Obstacles * msg);

/// Check for msg/Obstacles message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
bool
custom_messages__msg__Obstacles__are_equal(const custom_messages__msg__Obstacles * lhs, const custom_messages__msg__Obstacles * rhs);

/// Copy a msg/Obstacles message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
bool
custom_messages__msg__Obstacles__copy(
  const custom_messages__msg__Obstacles * input,
  custom_messages__msg__Obstacles * output);

/// Initialize array of msg/Obstacles messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_messages__msg__Obstacles__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
bool
custom_messages__msg__Obstacles__Sequence__init(custom_messages__msg__Obstacles__Sequence * array, size_t size);

/// Finalize array of msg/Obstacles messages.
/**
 * It calls
 * custom_messages__msg__Obstacles__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
void
custom_messages__msg__Obstacles__Sequence__fini(custom_messages__msg__Obstacles__Sequence * array);

/// Create array of msg/Obstacles messages.
/**
 * It allocates the memory for the array and calls
 * custom_messages__msg__Obstacles__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
custom_messages__msg__Obstacles__Sequence *
custom_messages__msg__Obstacles__Sequence__create(size_t size);

/// Destroy array of msg/Obstacles messages.
/**
 * It calls
 * custom_messages__msg__Obstacles__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
void
custom_messages__msg__Obstacles__Sequence__destroy(custom_messages__msg__Obstacles__Sequence * array);

/// Check for msg/Obstacles message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
bool
custom_messages__msg__Obstacles__Sequence__are_equal(const custom_messages__msg__Obstacles__Sequence * lhs, const custom_messages__msg__Obstacles__Sequence * rhs);

/// Copy an array of msg/Obstacles messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_messages
bool
custom_messages__msg__Obstacles__Sequence__copy(
  const custom_messages__msg__Obstacles__Sequence * input,
  custom_messages__msg__Obstacles__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__OBSTACLES__FUNCTIONS_H_
