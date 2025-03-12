// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_process:msg/FirebaseProcess.idl
// generated code does not contain a copyright notice
#include "sdv_process/msg/detail/firebase_process__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `key`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
sdv_process__msg__FirebaseProcess__init(sdv_process__msg__FirebaseProcess * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    sdv_process__msg__FirebaseProcess__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    sdv_process__msg__FirebaseProcess__fini(msg);
    return false;
  }
  return true;
}

void
sdv_process__msg__FirebaseProcess__fini(sdv_process__msg__FirebaseProcess * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_runtime_c__String__fini(&msg->key);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
sdv_process__msg__FirebaseProcess__are_equal(const sdv_process__msg__FirebaseProcess * lhs, const sdv_process__msg__FirebaseProcess * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
sdv_process__msg__FirebaseProcess__copy(
  const sdv_process__msg__FirebaseProcess * input,
  sdv_process__msg__FirebaseProcess * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

sdv_process__msg__FirebaseProcess *
sdv_process__msg__FirebaseProcess__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_process__msg__FirebaseProcess * msg = (sdv_process__msg__FirebaseProcess *)allocator.allocate(sizeof(sdv_process__msg__FirebaseProcess), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_process__msg__FirebaseProcess));
  bool success = sdv_process__msg__FirebaseProcess__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_process__msg__FirebaseProcess__destroy(sdv_process__msg__FirebaseProcess * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_process__msg__FirebaseProcess__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_process__msg__FirebaseProcess__Sequence__init(sdv_process__msg__FirebaseProcess__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_process__msg__FirebaseProcess * data = NULL;

  if (size) {
    data = (sdv_process__msg__FirebaseProcess *)allocator.zero_allocate(size, sizeof(sdv_process__msg__FirebaseProcess), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_process__msg__FirebaseProcess__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_process__msg__FirebaseProcess__fini(&data[i - 1]);
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
sdv_process__msg__FirebaseProcess__Sequence__fini(sdv_process__msg__FirebaseProcess__Sequence * array)
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
      sdv_process__msg__FirebaseProcess__fini(&array->data[i]);
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

sdv_process__msg__FirebaseProcess__Sequence *
sdv_process__msg__FirebaseProcess__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_process__msg__FirebaseProcess__Sequence * array = (sdv_process__msg__FirebaseProcess__Sequence *)allocator.allocate(sizeof(sdv_process__msg__FirebaseProcess__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_process__msg__FirebaseProcess__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_process__msg__FirebaseProcess__Sequence__destroy(sdv_process__msg__FirebaseProcess__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_process__msg__FirebaseProcess__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_process__msg__FirebaseProcess__Sequence__are_equal(const sdv_process__msg__FirebaseProcess__Sequence * lhs, const sdv_process__msg__FirebaseProcess__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_process__msg__FirebaseProcess__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_process__msg__FirebaseProcess__Sequence__copy(
  const sdv_process__msg__FirebaseProcess__Sequence * input,
  sdv_process__msg__FirebaseProcess__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_process__msg__FirebaseProcess);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_process__msg__FirebaseProcess * data =
      (sdv_process__msg__FirebaseProcess *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_process__msg__FirebaseProcess__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_process__msg__FirebaseProcess__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_process__msg__FirebaseProcess__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
