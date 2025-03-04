// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_serial:msg/Motors.idl
// generated code does not contain a copyright notice
#include "sdv_serial/msg/detail/motors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sdv_serial__msg__Motors__init(sdv_serial__msg__Motors * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sdv_serial__msg__Motors__fini(msg);
    return false;
  }
  // left_percent
  // right_percent
  return true;
}

void
sdv_serial__msg__Motors__fini(sdv_serial__msg__Motors * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // left_percent
  // right_percent
}

bool
sdv_serial__msg__Motors__are_equal(const sdv_serial__msg__Motors * lhs, const sdv_serial__msg__Motors * rhs)
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
  // left_percent
  if (lhs->left_percent != rhs->left_percent) {
    return false;
  }
  // right_percent
  if (lhs->right_percent != rhs->right_percent) {
    return false;
  }
  return true;
}

bool
sdv_serial__msg__Motors__copy(
  const sdv_serial__msg__Motors * input,
  sdv_serial__msg__Motors * output)
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
  // left_percent
  output->left_percent = input->left_percent;
  // right_percent
  output->right_percent = input->right_percent;
  return true;
}

sdv_serial__msg__Motors *
sdv_serial__msg__Motors__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_serial__msg__Motors * msg = (sdv_serial__msg__Motors *)allocator.allocate(sizeof(sdv_serial__msg__Motors), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_serial__msg__Motors));
  bool success = sdv_serial__msg__Motors__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_serial__msg__Motors__destroy(sdv_serial__msg__Motors * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_serial__msg__Motors__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_serial__msg__Motors__Sequence__init(sdv_serial__msg__Motors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_serial__msg__Motors * data = NULL;

  if (size) {
    data = (sdv_serial__msg__Motors *)allocator.zero_allocate(size, sizeof(sdv_serial__msg__Motors), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_serial__msg__Motors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_serial__msg__Motors__fini(&data[i - 1]);
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
sdv_serial__msg__Motors__Sequence__fini(sdv_serial__msg__Motors__Sequence * array)
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
      sdv_serial__msg__Motors__fini(&array->data[i]);
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

sdv_serial__msg__Motors__Sequence *
sdv_serial__msg__Motors__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_serial__msg__Motors__Sequence * array = (sdv_serial__msg__Motors__Sequence *)allocator.allocate(sizeof(sdv_serial__msg__Motors__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_serial__msg__Motors__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_serial__msg__Motors__Sequence__destroy(sdv_serial__msg__Motors__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_serial__msg__Motors__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_serial__msg__Motors__Sequence__are_equal(const sdv_serial__msg__Motors__Sequence * lhs, const sdv_serial__msg__Motors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_serial__msg__Motors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_serial__msg__Motors__Sequence__copy(
  const sdv_serial__msg__Motors__Sequence * input,
  sdv_serial__msg__Motors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_serial__msg__Motors);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_serial__msg__Motors * data =
      (sdv_serial__msg__Motors *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_serial__msg__Motors__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_serial__msg__Motors__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_serial__msg__Motors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
