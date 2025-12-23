// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_msg:msg/ImuAngle.idl
// generated code does not contain a copyright notice
#include "robot_msg/msg/detail/imu_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bus`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_msg__msg__ImuAngle__init(robot_msg__msg__ImuAngle * msg)
{
  if (!msg) {
    return false;
  }
  // bus
  if (!rosidl_runtime_c__String__init(&msg->bus)) {
    robot_msg__msg__ImuAngle__fini(msg);
    return false;
  }
  // boards_imu
  // angle_x
  // angle_y
  // angle_z
  return true;
}

void
robot_msg__msg__ImuAngle__fini(robot_msg__msg__ImuAngle * msg)
{
  if (!msg) {
    return;
  }
  // bus
  rosidl_runtime_c__String__fini(&msg->bus);
  // boards_imu
  // angle_x
  // angle_y
  // angle_z
}

bool
robot_msg__msg__ImuAngle__are_equal(const robot_msg__msg__ImuAngle * lhs, const robot_msg__msg__ImuAngle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bus
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bus), &(rhs->bus)))
  {
    return false;
  }
  // boards_imu
  if (lhs->boards_imu != rhs->boards_imu) {
    return false;
  }
  // angle_x
  if (lhs->angle_x != rhs->angle_x) {
    return false;
  }
  // angle_y
  if (lhs->angle_y != rhs->angle_y) {
    return false;
  }
  // angle_z
  if (lhs->angle_z != rhs->angle_z) {
    return false;
  }
  return true;
}

bool
robot_msg__msg__ImuAngle__copy(
  const robot_msg__msg__ImuAngle * input,
  robot_msg__msg__ImuAngle * output)
{
  if (!input || !output) {
    return false;
  }
  // bus
  if (!rosidl_runtime_c__String__copy(
      &(input->bus), &(output->bus)))
  {
    return false;
  }
  // boards_imu
  output->boards_imu = input->boards_imu;
  // angle_x
  output->angle_x = input->angle_x;
  // angle_y
  output->angle_y = input->angle_y;
  // angle_z
  output->angle_z = input->angle_z;
  return true;
}

robot_msg__msg__ImuAngle *
robot_msg__msg__ImuAngle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__ImuAngle * msg = (robot_msg__msg__ImuAngle *)allocator.allocate(sizeof(robot_msg__msg__ImuAngle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_msg__msg__ImuAngle));
  bool success = robot_msg__msg__ImuAngle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_msg__msg__ImuAngle__destroy(robot_msg__msg__ImuAngle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_msg__msg__ImuAngle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_msg__msg__ImuAngle__Sequence__init(robot_msg__msg__ImuAngle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__ImuAngle * data = NULL;

  if (size) {
    data = (robot_msg__msg__ImuAngle *)allocator.zero_allocate(size, sizeof(robot_msg__msg__ImuAngle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_msg__msg__ImuAngle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_msg__msg__ImuAngle__fini(&data[i - 1]);
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
robot_msg__msg__ImuAngle__Sequence__fini(robot_msg__msg__ImuAngle__Sequence * array)
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
      robot_msg__msg__ImuAngle__fini(&array->data[i]);
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

robot_msg__msg__ImuAngle__Sequence *
robot_msg__msg__ImuAngle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__ImuAngle__Sequence * array = (robot_msg__msg__ImuAngle__Sequence *)allocator.allocate(sizeof(robot_msg__msg__ImuAngle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_msg__msg__ImuAngle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_msg__msg__ImuAngle__Sequence__destroy(robot_msg__msg__ImuAngle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_msg__msg__ImuAngle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_msg__msg__ImuAngle__Sequence__are_equal(const robot_msg__msg__ImuAngle__Sequence * lhs, const robot_msg__msg__ImuAngle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_msg__msg__ImuAngle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_msg__msg__ImuAngle__Sequence__copy(
  const robot_msg__msg__ImuAngle__Sequence * input,
  robot_msg__msg__ImuAngle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_msg__msg__ImuAngle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_msg__msg__ImuAngle * data =
      (robot_msg__msg__ImuAngle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_msg__msg__ImuAngle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_msg__msg__ImuAngle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_msg__msg__ImuAngle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
