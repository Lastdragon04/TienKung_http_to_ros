// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_msg:msg/ImuAcc.idl
// generated code does not contain a copyright notice
#include "robot_msg/msg/detail/imu_acc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bus`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_msg__msg__ImuAcc__init(robot_msg__msg__ImuAcc * msg)
{
  if (!msg) {
    return false;
  }
  // bus
  if (!rosidl_runtime_c__String__init(&msg->bus)) {
    robot_msg__msg__ImuAcc__fini(msg);
    return false;
  }
  // boards_imu
  // acc_x
  // acc_y
  // acc_z
  return true;
}

void
robot_msg__msg__ImuAcc__fini(robot_msg__msg__ImuAcc * msg)
{
  if (!msg) {
    return;
  }
  // bus
  rosidl_runtime_c__String__fini(&msg->bus);
  // boards_imu
  // acc_x
  // acc_y
  // acc_z
}

bool
robot_msg__msg__ImuAcc__are_equal(const robot_msg__msg__ImuAcc * lhs, const robot_msg__msg__ImuAcc * rhs)
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
  // acc_x
  if (lhs->acc_x != rhs->acc_x) {
    return false;
  }
  // acc_y
  if (lhs->acc_y != rhs->acc_y) {
    return false;
  }
  // acc_z
  if (lhs->acc_z != rhs->acc_z) {
    return false;
  }
  return true;
}

bool
robot_msg__msg__ImuAcc__copy(
  const robot_msg__msg__ImuAcc * input,
  robot_msg__msg__ImuAcc * output)
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
  // acc_x
  output->acc_x = input->acc_x;
  // acc_y
  output->acc_y = input->acc_y;
  // acc_z
  output->acc_z = input->acc_z;
  return true;
}

robot_msg__msg__ImuAcc *
robot_msg__msg__ImuAcc__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__ImuAcc * msg = (robot_msg__msg__ImuAcc *)allocator.allocate(sizeof(robot_msg__msg__ImuAcc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_msg__msg__ImuAcc));
  bool success = robot_msg__msg__ImuAcc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_msg__msg__ImuAcc__destroy(robot_msg__msg__ImuAcc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_msg__msg__ImuAcc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_msg__msg__ImuAcc__Sequence__init(robot_msg__msg__ImuAcc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__ImuAcc * data = NULL;

  if (size) {
    data = (robot_msg__msg__ImuAcc *)allocator.zero_allocate(size, sizeof(robot_msg__msg__ImuAcc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_msg__msg__ImuAcc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_msg__msg__ImuAcc__fini(&data[i - 1]);
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
robot_msg__msg__ImuAcc__Sequence__fini(robot_msg__msg__ImuAcc__Sequence * array)
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
      robot_msg__msg__ImuAcc__fini(&array->data[i]);
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

robot_msg__msg__ImuAcc__Sequence *
robot_msg__msg__ImuAcc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_msg__msg__ImuAcc__Sequence * array = (robot_msg__msg__ImuAcc__Sequence *)allocator.allocate(sizeof(robot_msg__msg__ImuAcc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_msg__msg__ImuAcc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_msg__msg__ImuAcc__Sequence__destroy(robot_msg__msg__ImuAcc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_msg__msg__ImuAcc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_msg__msg__ImuAcc__Sequence__are_equal(const robot_msg__msg__ImuAcc__Sequence * lhs, const robot_msg__msg__ImuAcc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_msg__msg__ImuAcc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_msg__msg__ImuAcc__Sequence__copy(
  const robot_msg__msg__ImuAcc__Sequence * input,
  robot_msg__msg__ImuAcc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_msg__msg__ImuAcc);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_msg__msg__ImuAcc * data =
      (robot_msg__msg__ImuAcc *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_msg__msg__ImuAcc__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_msg__msg__ImuAcc__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_msg__msg__ImuAcc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
