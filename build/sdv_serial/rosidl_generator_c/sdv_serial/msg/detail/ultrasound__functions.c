// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sdv_serial:msg/Ultrasound.idl
// generated code does not contain a copyright notice
#include "sdv_serial/msg/detail/ultrasound__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sdv_serial__msg__Ultrasound__init(sdv_serial__msg__Ultrasound * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sdv_serial__msg__Ultrasound__fini(msg);
    return false;
  }
  // sensor_1
  // sensor_2
  // sensor_3
  // sensor_4
  // sensor_5
  // sensor_6
  return true;
}

void
sdv_serial__msg__Ultrasound__fini(sdv_serial__msg__Ultrasound * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor_1
  // sensor_2
  // sensor_3
  // sensor_4
  // sensor_5
  // sensor_6
}

bool
sdv_serial__msg__Ultrasound__are_equal(const sdv_serial__msg__Ultrasound * lhs, const sdv_serial__msg__Ultrasound * rhs)
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
  // sensor_1
  if (lhs->sensor_1 != rhs->sensor_1) {
    return false;
  }
  // sensor_2
  if (lhs->sensor_2 != rhs->sensor_2) {
    return false;
  }
  // sensor_3
  if (lhs->sensor_3 != rhs->sensor_3) {
    return false;
  }
  // sensor_4
  if (lhs->sensor_4 != rhs->sensor_4) {
    return false;
  }
  // sensor_5
  if (lhs->sensor_5 != rhs->sensor_5) {
    return false;
  }
  // sensor_6
  if (lhs->sensor_6 != rhs->sensor_6) {
    return false;
  }
  return true;
}

bool
sdv_serial__msg__Ultrasound__copy(
  const sdv_serial__msg__Ultrasound * input,
  sdv_serial__msg__Ultrasound * output)
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
  // sensor_1
  output->sensor_1 = input->sensor_1;
  // sensor_2
  output->sensor_2 = input->sensor_2;
  // sensor_3
  output->sensor_3 = input->sensor_3;
  // sensor_4
  output->sensor_4 = input->sensor_4;
  // sensor_5
  output->sensor_5 = input->sensor_5;
  // sensor_6
  output->sensor_6 = input->sensor_6;
  return true;
}

sdv_serial__msg__Ultrasound *
sdv_serial__msg__Ultrasound__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_serial__msg__Ultrasound * msg = (sdv_serial__msg__Ultrasound *)allocator.allocate(sizeof(sdv_serial__msg__Ultrasound), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sdv_serial__msg__Ultrasound));
  bool success = sdv_serial__msg__Ultrasound__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sdv_serial__msg__Ultrasound__destroy(sdv_serial__msg__Ultrasound * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sdv_serial__msg__Ultrasound__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sdv_serial__msg__Ultrasound__Sequence__init(sdv_serial__msg__Ultrasound__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_serial__msg__Ultrasound * data = NULL;

  if (size) {
    data = (sdv_serial__msg__Ultrasound *)allocator.zero_allocate(size, sizeof(sdv_serial__msg__Ultrasound), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sdv_serial__msg__Ultrasound__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sdv_serial__msg__Ultrasound__fini(&data[i - 1]);
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
sdv_serial__msg__Ultrasound__Sequence__fini(sdv_serial__msg__Ultrasound__Sequence * array)
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
      sdv_serial__msg__Ultrasound__fini(&array->data[i]);
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

sdv_serial__msg__Ultrasound__Sequence *
sdv_serial__msg__Ultrasound__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sdv_serial__msg__Ultrasound__Sequence * array = (sdv_serial__msg__Ultrasound__Sequence *)allocator.allocate(sizeof(sdv_serial__msg__Ultrasound__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sdv_serial__msg__Ultrasound__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sdv_serial__msg__Ultrasound__Sequence__destroy(sdv_serial__msg__Ultrasound__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sdv_serial__msg__Ultrasound__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sdv_serial__msg__Ultrasound__Sequence__are_equal(const sdv_serial__msg__Ultrasound__Sequence * lhs, const sdv_serial__msg__Ultrasound__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sdv_serial__msg__Ultrasound__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sdv_serial__msg__Ultrasound__Sequence__copy(
  const sdv_serial__msg__Ultrasound__Sequence * input,
  sdv_serial__msg__Ultrasound__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sdv_serial__msg__Ultrasound);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sdv_serial__msg__Ultrasound * data =
      (sdv_serial__msg__Ultrasound *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sdv_serial__msg__Ultrasound__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sdv_serial__msg__Ultrasound__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sdv_serial__msg__Ultrasound__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
