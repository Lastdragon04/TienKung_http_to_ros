// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:srv/JointSensorNames.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/srv/detail/joint_sensor_names__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
robot_interfaces__srv__JointSensorNames_Request__init(robot_interfaces__srv__JointSensorNames_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
robot_interfaces__srv__JointSensorNames_Request__fini(robot_interfaces__srv__JointSensorNames_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
robot_interfaces__srv__JointSensorNames_Request__are_equal(const robot_interfaces__srv__JointSensorNames_Request * lhs, const robot_interfaces__srv__JointSensorNames_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
robot_interfaces__srv__JointSensorNames_Request__copy(
  const robot_interfaces__srv__JointSensorNames_Request * input,
  robot_interfaces__srv__JointSensorNames_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

robot_interfaces__srv__JointSensorNames_Request *
robot_interfaces__srv__JointSensorNames_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__JointSensorNames_Request * msg = (robot_interfaces__srv__JointSensorNames_Request *)allocator.allocate(sizeof(robot_interfaces__srv__JointSensorNames_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__srv__JointSensorNames_Request));
  bool success = robot_interfaces__srv__JointSensorNames_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__srv__JointSensorNames_Request__destroy(robot_interfaces__srv__JointSensorNames_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__srv__JointSensorNames_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__srv__JointSensorNames_Request__Sequence__init(robot_interfaces__srv__JointSensorNames_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__JointSensorNames_Request * data = NULL;

  if (size) {
    data = (robot_interfaces__srv__JointSensorNames_Request *)allocator.zero_allocate(size, sizeof(robot_interfaces__srv__JointSensorNames_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__srv__JointSensorNames_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__srv__JointSensorNames_Request__fini(&data[i - 1]);
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
robot_interfaces__srv__JointSensorNames_Request__Sequence__fini(robot_interfaces__srv__JointSensorNames_Request__Sequence * array)
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
      robot_interfaces__srv__JointSensorNames_Request__fini(&array->data[i]);
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

robot_interfaces__srv__JointSensorNames_Request__Sequence *
robot_interfaces__srv__JointSensorNames_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__JointSensorNames_Request__Sequence * array = (robot_interfaces__srv__JointSensorNames_Request__Sequence *)allocator.allocate(sizeof(robot_interfaces__srv__JointSensorNames_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__srv__JointSensorNames_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__srv__JointSensorNames_Request__Sequence__destroy(robot_interfaces__srv__JointSensorNames_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__srv__JointSensorNames_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__srv__JointSensorNames_Request__Sequence__are_equal(const robot_interfaces__srv__JointSensorNames_Request__Sequence * lhs, const robot_interfaces__srv__JointSensorNames_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__srv__JointSensorNames_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__srv__JointSensorNames_Request__Sequence__copy(
  const robot_interfaces__srv__JointSensorNames_Request__Sequence * input,
  robot_interfaces__srv__JointSensorNames_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__srv__JointSensorNames_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__srv__JointSensorNames_Request * data =
      (robot_interfaces__srv__JointSensorNames_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__srv__JointSensorNames_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__srv__JointSensorNames_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__srv__JointSensorNames_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `joint_names`
// Member `sensor_names`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_interfaces__srv__JointSensorNames_Response__init(robot_interfaces__srv__JointSensorNames_Response * msg)
{
  if (!msg) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    robot_interfaces__srv__JointSensorNames_Response__fini(msg);
    return false;
  }
  // sensor_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->sensor_names, 0)) {
    robot_interfaces__srv__JointSensorNames_Response__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__srv__JointSensorNames_Response__fini(robot_interfaces__srv__JointSensorNames_Response * msg)
{
  if (!msg) {
    return;
  }
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // sensor_names
  rosidl_runtime_c__String__Sequence__fini(&msg->sensor_names);
}

bool
robot_interfaces__srv__JointSensorNames_Response__are_equal(const robot_interfaces__srv__JointSensorNames_Response * lhs, const robot_interfaces__srv__JointSensorNames_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_names), &(rhs->joint_names)))
  {
    return false;
  }
  // sensor_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->sensor_names), &(rhs->sensor_names)))
  {
    return false;
  }
  return true;
}

bool
robot_interfaces__srv__JointSensorNames_Response__copy(
  const robot_interfaces__srv__JointSensorNames_Response * input,
  robot_interfaces__srv__JointSensorNames_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_names), &(output->joint_names)))
  {
    return false;
  }
  // sensor_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->sensor_names), &(output->sensor_names)))
  {
    return false;
  }
  return true;
}

robot_interfaces__srv__JointSensorNames_Response *
robot_interfaces__srv__JointSensorNames_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__JointSensorNames_Response * msg = (robot_interfaces__srv__JointSensorNames_Response *)allocator.allocate(sizeof(robot_interfaces__srv__JointSensorNames_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__srv__JointSensorNames_Response));
  bool success = robot_interfaces__srv__JointSensorNames_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__srv__JointSensorNames_Response__destroy(robot_interfaces__srv__JointSensorNames_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__srv__JointSensorNames_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__srv__JointSensorNames_Response__Sequence__init(robot_interfaces__srv__JointSensorNames_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__JointSensorNames_Response * data = NULL;

  if (size) {
    data = (robot_interfaces__srv__JointSensorNames_Response *)allocator.zero_allocate(size, sizeof(robot_interfaces__srv__JointSensorNames_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__srv__JointSensorNames_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__srv__JointSensorNames_Response__fini(&data[i - 1]);
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
robot_interfaces__srv__JointSensorNames_Response__Sequence__fini(robot_interfaces__srv__JointSensorNames_Response__Sequence * array)
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
      robot_interfaces__srv__JointSensorNames_Response__fini(&array->data[i]);
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

robot_interfaces__srv__JointSensorNames_Response__Sequence *
robot_interfaces__srv__JointSensorNames_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__JointSensorNames_Response__Sequence * array = (robot_interfaces__srv__JointSensorNames_Response__Sequence *)allocator.allocate(sizeof(robot_interfaces__srv__JointSensorNames_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__srv__JointSensorNames_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__srv__JointSensorNames_Response__Sequence__destroy(robot_interfaces__srv__JointSensorNames_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__srv__JointSensorNames_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__srv__JointSensorNames_Response__Sequence__are_equal(const robot_interfaces__srv__JointSensorNames_Response__Sequence * lhs, const robot_interfaces__srv__JointSensorNames_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__srv__JointSensorNames_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__srv__JointSensorNames_Response__Sequence__copy(
  const robot_interfaces__srv__JointSensorNames_Response__Sequence * input,
  robot_interfaces__srv__JointSensorNames_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__srv__JointSensorNames_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__srv__JointSensorNames_Response * data =
      (robot_interfaces__srv__JointSensorNames_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__srv__JointSensorNames_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__srv__JointSensorNames_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__srv__JointSensorNames_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
