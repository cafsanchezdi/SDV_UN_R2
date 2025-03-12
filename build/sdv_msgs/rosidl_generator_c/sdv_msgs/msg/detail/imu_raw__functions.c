// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_msgs:msg/ImuRaw.idl
// generated code does not contain a copyright notice
#include "sdv_msgs/msg/detail/imu_raw__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `angular_velocity`
// Member `linear_acceleration`
// Member `magnetic_field`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
sdv_msgs__msg__ImuRaw__init(sdv_msgs__msg__ImuRaw * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sdv_msgs__msg__ImuRaw__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    sdv_msgs__msg__ImuRaw__fini(msg);
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_acceleration)) {
    sdv_msgs__msg__ImuRaw__fini(msg);
    return false;
  }
  // magnetic_field
  if (!geometry_msgs__msg__Vector3__init(&msg->magnetic_field)) {
    sdv_msgs__msg__ImuRaw__fini(msg);
    return false;
  }
  return true;
}

void
sdv_msgs__msg__ImuRaw__fini(sdv_msgs__msg__ImuRaw * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
  // linear_acceleration
  geometry_msgs__msg__Vector3__fini(&msg->linear_acceleration);
  // magnetic_field
  geometry_msgs__msg__Vector3__fini(&msg->magnetic_field);
}

bool
sdv_msgs__msg__ImuRaw__are_equal(const sdv_msgs__msg__ImuRaw * lhs, const sdv_msgs__msg__ImuRaw * rhs)
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
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // magnetic_field
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->magnetic_field), &(rhs->magnetic_field)))
  {
    return false;
  }
  return true;
}

bool
sdv_msgs__msg__ImuRaw__copy(
  const sdv_msgs__msg__ImuRaw * input,
  sdv_msgs__msg__ImuRaw * output)
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
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // magnetic_field
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->magnetic_field), &(output->magnetic_field)))
  {
    return false;
  }
  return true;
}

sdv_msgs__msg__ImuRaw *
sdv_msgs__msg__ImuRaw__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__ImuRaw * msg = (sdv_msgs__msg__ImuRaw *)allocator.allocate(sizeof(sdv_msgs__msg__ImuRaw), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_msgs__msg__ImuRaw));
  bool success = sdv_msgs__msg__ImuRaw__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_msgs__msg__ImuRaw__destroy(sdv_msgs__msg__ImuRaw * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_msgs__msg__ImuRaw__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_msgs__msg__ImuRaw__Sequence__init(sdv_msgs__msg__ImuRaw__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__ImuRaw * data = NULL;

  if (size) {
    data = (sdv_msgs__msg__ImuRaw *)allocator.zero_allocate(size, sizeof(sdv_msgs__msg__ImuRaw), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_msgs__msg__ImuRaw__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_msgs__msg__ImuRaw__fini(&data[i - 1]);
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
sdv_msgs__msg__ImuRaw__Sequence__fini(sdv_msgs__msg__ImuRaw__Sequence * array)
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
      sdv_msgs__msg__ImuRaw__fini(&array->data[i]);
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

sdv_msgs__msg__ImuRaw__Sequence *
sdv_msgs__msg__ImuRaw__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_msgs__msg__ImuRaw__Sequence * array = (sdv_msgs__msg__ImuRaw__Sequence *)allocator.allocate(sizeof(sdv_msgs__msg__ImuRaw__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_msgs__msg__ImuRaw__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_msgs__msg__ImuRaw__Sequence__destroy(sdv_msgs__msg__ImuRaw__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_msgs__msg__ImuRaw__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_msgs__msg__ImuRaw__Sequence__are_equal(const sdv_msgs__msg__ImuRaw__Sequence * lhs, const sdv_msgs__msg__ImuRaw__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_msgs__msg__ImuRaw__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_msgs__msg__ImuRaw__Sequence__copy(
  const sdv_msgs__msg__ImuRaw__Sequence * input,
  sdv_msgs__msg__ImuRaw__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_msgs__msg__ImuRaw);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_msgs__msg__ImuRaw * data =
      (sdv_msgs__msg__ImuRaw *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_msgs__msg__ImuRaw__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_msgs__msg__ImuRaw__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_msgs__msg__ImuRaw__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
