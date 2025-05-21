// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_messages:msg/Obstacles.idl
// generated code does not contain a copyright notice
#include "custom_messages/msg/detail/obstacles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `kind`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_messages__msg__Obstacles__init(custom_messages__msg__Obstacles * msg)
{
  if (!msg) {
    return false;
  }
  // kind
  if (!rosidl_runtime_c__String__init(&msg->kind)) {
    custom_messages__msg__Obstacles__fini(msg);
    return false;
  }
  // x
  // y
  // p1
  // p2
  return true;
}

void
custom_messages__msg__Obstacles__fini(custom_messages__msg__Obstacles * msg)
{
  if (!msg) {
    return;
  }
  // kind
  rosidl_runtime_c__String__fini(&msg->kind);
  // x
  // y
  // p1
  // p2
}

bool
custom_messages__msg__Obstacles__are_equal(const custom_messages__msg__Obstacles * lhs, const custom_messages__msg__Obstacles * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kind
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->kind), &(rhs->kind)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // p1
  if (lhs->p1 != rhs->p1) {
    return false;
  }
  // p2
  if (lhs->p2 != rhs->p2) {
    return false;
  }
  return true;
}

bool
custom_messages__msg__Obstacles__copy(
  const custom_messages__msg__Obstacles * input,
  custom_messages__msg__Obstacles * output)
{
  if (!input || !output) {
    return false;
  }
  // kind
  if (!rosidl_runtime_c__String__copy(
      &(input->kind), &(output->kind)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // p1
  output->p1 = input->p1;
  // p2
  output->p2 = input->p2;
  return true;
}

custom_messages__msg__Obstacles *
custom_messages__msg__Obstacles__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__msg__Obstacles * msg = (custom_messages__msg__Obstacles *)allocator.allocate(sizeof(custom_messages__msg__Obstacles), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_messages__msg__Obstacles));
  bool success = custom_messages__msg__Obstacles__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_messages__msg__Obstacles__destroy(custom_messages__msg__Obstacles * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_messages__msg__Obstacles__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_messages__msg__Obstacles__Sequence__init(custom_messages__msg__Obstacles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__msg__Obstacles * data = NULL;

  if (size) {
    data = (custom_messages__msg__Obstacles *)allocator.zero_allocate(size, sizeof(custom_messages__msg__Obstacles), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_messages__msg__Obstacles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_messages__msg__Obstacles__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_messages__msg__Obstacles__Sequence__fini(custom_messages__msg__Obstacles__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_messages__msg__Obstacles__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_messages__msg__Obstacles__Sequence *
custom_messages__msg__Obstacles__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_messages__msg__Obstacles__Sequence * array = (custom_messages__msg__Obstacles__Sequence *)allocator.allocate(sizeof(custom_messages__msg__Obstacles__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_messages__msg__Obstacles__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_messages__msg__Obstacles__Sequence__destroy(custom_messages__msg__Obstacles__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_messages__msg__Obstacles__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_messages__msg__Obstacles__Sequence__are_equal(const custom_messages__msg__Obstacles__Sequence * lhs, const custom_messages__msg__Obstacles__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_messages__msg__Obstacles__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_messages__msg__Obstacles__Sequence__copy(
  const custom_messages__msg__Obstacles__Sequence * input,
  custom_messages__msg__Obstacles__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_messages__msg__Obstacles);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_messages__msg__Obstacles * data =
      (custom_messages__msg__Obstacles *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_messages__msg__Obstacles__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_messages__msg__Obstacles__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_messages__msg__Obstacles__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
