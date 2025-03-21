// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_msgs:msg/FourMotors.idl
// generated code does not contain a copyright notice
#include "sdv_msgs/msg/detail/four_motors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sdv_msgs__msg__FourMotors__init(sdv_msgs__msg__FourMotors * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sdv_msgs__msg__FourMotors__fini(msg);
    return false;
  }
  // back_left_rps
  // back_right_rps
  // front_left_rps
  // front_right_rps
  return true;
}

void
sdv_msgs__msg__FourMotors__fini(sdv_msgs__msg__FourMotors * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // back_left_rps
  // back_right_rps
  // front_left_rps
  // front_right_rps
}

bool
sdv_msgs__msg__FourMotors__are_equal(const sdv_msgs__msg__FourMotors * lhs, const sdv_msgs__msg__FourMotors * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // back_left_rps
  if (lhs->back_left_rps != rhs->back_left_rps) {
    return false;
  }
  // back_right_rps
  if (lhs->back_right_rps != rhs->back_right_rps) {
    return false;
  }
  // front_left_rps
  if (lhs->front_left_rps != rhs->front_left_rps) {
    return false;
  }
  // front_right_rps
  if (lhs->front_right_rps != rhs->front_right_rps) {
    return false;
  }
  return true;
}

bool
sdv_msgs__msg__FourMotors__copy(
  const sdv_msgs__msg__FourMotors * input,
  sdv_msgs__msg__FourMotors * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // back_left_rps
  output->back_left_rps = input->back_left_rps;
  // back_right_rps
  output->back_right_rps = input->back_right_rps;
  // front_left_rps
  output->front_left_rps = input->front_left_rps;
  // front_right_rps
  output->front_right_rps = input->front_right_rps;
  return true;
}

sdv_msgs__msg__FourMotors *
sdv_msgs__msg__FourMotors__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__FourMotors * msg = (sdv_msgs__msg__FourMotors *)allocator.allocate(sizeof(sdv_msgs__msg__FourMotors), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_msgs__msg__FourMotors));
  bool success = sdv_msgs__msg__FourMotors__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_msgs__msg__FourMotors__destroy(sdv_msgs__msg__FourMotors * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_msgs__msg__FourMotors__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_msgs__msg__FourMotors__Sequence__init(sdv_msgs__msg__FourMotors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__FourMotors * data = NULL;

  if (size) {
    data = (sdv_msgs__msg__FourMotors *)allocator.zero_allocate(size, sizeof(sdv_msgs__msg__FourMotors), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_msgs__msg__FourMotors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_msgs__msg__FourMotors__fini(&data[i - 1]);
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
sdv_msgs__msg__FourMotors__Sequence__fini(sdv_msgs__msg__FourMotors__Sequence * array)
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
      sdv_msgs__msg__FourMotors__fini(&array->data[i]);
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

sdv_msgs__msg__FourMotors__Sequence *
sdv_msgs__msg__FourMotors__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__FourMotors__Sequence * array = (sdv_msgs__msg__FourMotors__Sequence *)allocator.allocate(sizeof(sdv_msgs__msg__FourMotors__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_msgs__msg__FourMotors__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_msgs__msg__FourMotors__Sequence__destroy(sdv_msgs__msg__FourMotors__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_msgs__msg__FourMotors__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_msgs__msg__FourMotors__Sequence__are_equal(const sdv_msgs__msg__FourMotors__Sequence * lhs, const sdv_msgs__msg__FourMotors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_msgs__msg__FourMotors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_msgs__msg__FourMotors__Sequence__copy(
  const sdv_msgs__msg__FourMotors__Sequence * input,
  sdv_msgs__msg__FourMotors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_msgs__msg__FourMotors);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_msgs__msg__FourMotors * data =
      (sdv_msgs__msg__FourMotors *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_msgs__msg__FourMotors__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_msgs__msg__FourMotors__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_msgs__msg__FourMotors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
