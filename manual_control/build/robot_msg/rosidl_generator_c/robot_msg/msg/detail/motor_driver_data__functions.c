// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_msg:msg/MotorDriverData.idl
// generated code does not contain a copyright notice
#include "robot_msg/msg/detail/motor_driver_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `depend`
// Member `bus`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_msg__msg__MotorDriverData__init(robot_msg__msg__MotorDriverData * msg)
{
  if (!msg) {
    return false;
  }
  // canid
  // value
  // speed
  // type
  // protocol_type
  // boards_motor
  // depend
  if (!rosidl_runtime_c__String__init(&msg->depend)) {
    robot_msg__msg__MotorDriverData__fini(msg);
    return false;
  }
  // bus
  if (!rosidl_runtime_c__String__init(&msg->bus)) {
    robot_msg__msg__MotorDriverData__fini(msg);
    return false;
  }
  return true;
}

void
robot_msg__msg__MotorDriverData__fini(robot_msg__msg__MotorDriverData * msg)
{
  if (!msg) {
    return;
  }
  // canid
  // value
  // speed
  // type
  // protocol_type
  // boards_motor
  // depend
  rosidl_runtime_c__String__fini(&msg->depend);
  // bus
  rosidl_runtime_c__String__fini(&msg->bus);
}

bool
robot_msg__msg__MotorDriverData__are_equal(const robot_msg__msg__MotorDriverData * lhs, const robot_msg__msg__MotorDriverData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // canid
  if (lhs->canid != rhs->canid) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // protocol_type
  if (lhs->protocol_type != rhs->protocol_type) {
    return false;
  }
  // boards_motor
  if (lhs->boards_motor != rhs->boards_motor) {
    return false;
  }
  // depend
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->depend), &(rhs->depend)))
  {
    return false;
  }
  // bus
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bus), &(rhs->bus)))
  {
    return false;
  }
  return true;
}

bool
robot_msg__msg__MotorDriverData__copy(
  const robot_msg__msg__MotorDriverData * input,
  robot_msg__msg__MotorDriverData * output)
{
  if (!input || !output) {
    return false;
  }
  // canid
  output->canid = input->canid;
  // value
  output->value = input->value;
  // speed
  output->speed = input->speed;
  // type
  output->type = input->type;
  // protocol_type
  output->protocol_type = input->protocol_type;
  // boards_motor
  output->boards_motor = input->boards_motor;
  // depend
  if (!rosidl_runtime_c__String__copy(
      &(input->depend), &(output->depend)))
  {
    return false;
  }
  // bus
  if (!rosidl_runtime_c__String__copy(
      &(input->bus), &(output->bus)))
  {
    return false;
  }
  return true;
}

robot_msg__msg__MotorDriverData *
robot_msg__msg__MotorDriverData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__MotorDriverData * msg = (robot_msg__msg__MotorDriverData *)allocator.allocate(sizeof(robot_msg__msg__MotorDriverData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_msg__msg__MotorDriverData));
  bool success = robot_msg__msg__MotorDriverData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_msg__msg__MotorDriverData__destroy(robot_msg__msg__MotorDriverData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_msg__msg__MotorDriverData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_msg__msg__MotorDriverData__Sequence__init(robot_msg__msg__MotorDriverData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__MotorDriverData * data = NULL;

  if (size) {
    data = (robot_msg__msg__MotorDriverData *)allocator.zero_allocate(size, sizeof(robot_msg__msg__MotorDriverData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_msg__msg__MotorDriverData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_msg__msg__MotorDriverData__fini(&data[i - 1]);
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
robot_msg__msg__MotorDriverData__Sequence__fini(robot_msg__msg__MotorDriverData__Sequence * array)
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
      robot_msg__msg__MotorDriverData__fini(&array->data[i]);
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

robot_msg__msg__MotorDriverData__Sequence *
robot_msg__msg__MotorDriverData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__MotorDriverData__Sequence * array = (robot_msg__msg__MotorDriverData__Sequence *)allocator.allocate(sizeof(robot_msg__msg__MotorDriverData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_msg__msg__MotorDriverData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_msg__msg__MotorDriverData__Sequence__destroy(robot_msg__msg__MotorDriverData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_msg__msg__MotorDriverData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_msg__msg__MotorDriverData__Sequence__are_equal(const robot_msg__msg__MotorDriverData__Sequence * lhs, const robot_msg__msg__MotorDriverData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_msg__msg__MotorDriverData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_msg__msg__MotorDriverData__Sequence__copy(
  const robot_msg__msg__MotorDriverData__Sequence * input,
  robot_msg__msg__MotorDriverData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_msg__msg__MotorDriverData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_msg__msg__MotorDriverData * data =
      (robot_msg__msg__MotorDriverData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_msg__msg__MotorDriverData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_msg__msg__MotorDriverData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_msg__msg__MotorDriverData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
