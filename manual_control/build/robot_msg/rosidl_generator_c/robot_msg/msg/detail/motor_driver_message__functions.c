// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_msg:msg/MotorDriverMessage.idl
// generated code does not contain a copyright notice
#include "robot_msg/msg/detail/motor_driver_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "robot_msg/msg/detail/motor_driver_data__functions.h"

bool
robot_msg__msg__MotorDriverMessage__init(robot_msg__msg__MotorDriverMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robot_msg__msg__MotorDriverMessage__fini(msg);
    return false;
  }
  // data
  if (!robot_msg__msg__MotorDriverData__Sequence__init(&msg->data, 0)) {
    robot_msg__msg__MotorDriverMessage__fini(msg);
    return false;
  }
  return true;
}

void
robot_msg__msg__MotorDriverMessage__fini(robot_msg__msg__MotorDriverMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  robot_msg__msg__MotorDriverData__Sequence__fini(&msg->data);
}

bool
robot_msg__msg__MotorDriverMessage__are_equal(const robot_msg__msg__MotorDriverMessage * lhs, const robot_msg__msg__MotorDriverMessage * rhs)
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
  // data
  if (!robot_msg__msg__MotorDriverData__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
robot_msg__msg__MotorDriverMessage__copy(
  const robot_msg__msg__MotorDriverMessage * input,
  robot_msg__msg__MotorDriverMessage * output)
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
  // data
  if (!robot_msg__msg__MotorDriverData__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

robot_msg__msg__MotorDriverMessage *
robot_msg__msg__MotorDriverMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__MotorDriverMessage * msg = (robot_msg__msg__MotorDriverMessage *)allocator.allocate(sizeof(robot_msg__msg__MotorDriverMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_msg__msg__MotorDriverMessage));
  bool success = robot_msg__msg__MotorDriverMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_msg__msg__MotorDriverMessage__destroy(robot_msg__msg__MotorDriverMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_msg__msg__MotorDriverMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_msg__msg__MotorDriverMessage__Sequence__init(robot_msg__msg__MotorDriverMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__MotorDriverMessage * data = NULL;

  if (size) {
    data = (robot_msg__msg__MotorDriverMessage *)allocator.zero_allocate(size, sizeof(robot_msg__msg__MotorDriverMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_msg__msg__MotorDriverMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_msg__msg__MotorDriverMessage__fini(&data[i - 1]);
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
robot_msg__msg__MotorDriverMessage__Sequence__fini(robot_msg__msg__MotorDriverMessage__Sequence * array)
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
      robot_msg__msg__MotorDriverMessage__fini(&array->data[i]);
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

robot_msg__msg__MotorDriverMessage__Sequence *
robot_msg__msg__MotorDriverMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__MotorDriverMessage__Sequence * array = (robot_msg__msg__MotorDriverMessage__Sequence *)allocator.allocate(sizeof(robot_msg__msg__MotorDriverMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_msg__msg__MotorDriverMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_msg__msg__MotorDriverMessage__Sequence__destroy(robot_msg__msg__MotorDriverMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_msg__msg__MotorDriverMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_msg__msg__MotorDriverMessage__Sequence__are_equal(const robot_msg__msg__MotorDriverMessage__Sequence * lhs, const robot_msg__msg__MotorDriverMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_msg__msg__MotorDriverMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_msg__msg__MotorDriverMessage__Sequence__copy(
  const robot_msg__msg__MotorDriverMessage__Sequence * input,
  robot_msg__msg__MotorDriverMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_msg__msg__MotorDriverMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_msg__msg__MotorDriverMessage * data =
      (robot_msg__msg__MotorDriverMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_msg__msg__MotorDriverMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_msg__msg__MotorDriverMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_msg__msg__MotorDriverMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
