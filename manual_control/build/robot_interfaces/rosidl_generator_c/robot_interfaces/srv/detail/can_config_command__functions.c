// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:srv/CanConfigCommand.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/srv/detail/can_config_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `data1`
// Member `data2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `device_names`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_interfaces__srv__CanConfigCommand_Request__init(robot_interfaces__srv__CanConfigCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // opcode
  // device
  // data1
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data1, 0)) {
    robot_interfaces__srv__CanConfigCommand_Request__fini(msg);
    return false;
  }
  // data2
  if (!rosidl_runtime_c__float__Sequence__init(&msg->data2, 0)) {
    robot_interfaces__srv__CanConfigCommand_Request__fini(msg);
    return false;
  }
  // device_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->device_names, 0)) {
    robot_interfaces__srv__CanConfigCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__srv__CanConfigCommand_Request__fini(robot_interfaces__srv__CanConfigCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // opcode
  // device
  // data1
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data1);
  // data2
  rosidl_runtime_c__float__Sequence__fini(&msg->data2);
  // device_names
  rosidl_runtime_c__String__Sequence__fini(&msg->device_names);
}

bool
robot_interfaces__srv__CanConfigCommand_Request__are_equal(const robot_interfaces__srv__CanConfigCommand_Request * lhs, const robot_interfaces__srv__CanConfigCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // opcode
  if (lhs->opcode != rhs->opcode) {
    return false;
  }
  // device
  if (lhs->device != rhs->device) {
    return false;
  }
  // data1
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data1), &(rhs->data1)))
  {
    return false;
  }
  // data2
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->data2), &(rhs->data2)))
  {
    return false;
  }
  // device_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->device_names), &(rhs->device_names)))
  {
    return false;
  }
  return true;
}

bool
robot_interfaces__srv__CanConfigCommand_Request__copy(
  const robot_interfaces__srv__CanConfigCommand_Request * input,
  robot_interfaces__srv__CanConfigCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // opcode
  output->opcode = input->opcode;
  // device
  output->device = input->device;
  // data1
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data1), &(output->data1)))
  {
    return false;
  }
  // data2
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->data2), &(output->data2)))
  {
    return false;
  }
  // device_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->device_names), &(output->device_names)))
  {
    return false;
  }
  return true;
}

robot_interfaces__srv__CanConfigCommand_Request *
robot_interfaces__srv__CanConfigCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__CanConfigCommand_Request * msg = (robot_interfaces__srv__CanConfigCommand_Request *)allocator.allocate(sizeof(robot_interfaces__srv__CanConfigCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__srv__CanConfigCommand_Request));
  bool success = robot_interfaces__srv__CanConfigCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__srv__CanConfigCommand_Request__destroy(robot_interfaces__srv__CanConfigCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__srv__CanConfigCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__srv__CanConfigCommand_Request__Sequence__init(robot_interfaces__srv__CanConfigCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__CanConfigCommand_Request * data = NULL;

  if (size) {
    data = (robot_interfaces__srv__CanConfigCommand_Request *)allocator.zero_allocate(size, sizeof(robot_interfaces__srv__CanConfigCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__srv__CanConfigCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__srv__CanConfigCommand_Request__fini(&data[i - 1]);
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
robot_interfaces__srv__CanConfigCommand_Request__Sequence__fini(robot_interfaces__srv__CanConfigCommand_Request__Sequence * array)
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
      robot_interfaces__srv__CanConfigCommand_Request__fini(&array->data[i]);
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

robot_interfaces__srv__CanConfigCommand_Request__Sequence *
robot_interfaces__srv__CanConfigCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__CanConfigCommand_Request__Sequence * array = (robot_interfaces__srv__CanConfigCommand_Request__Sequence *)allocator.allocate(sizeof(robot_interfaces__srv__CanConfigCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__srv__CanConfigCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__srv__CanConfigCommand_Request__Sequence__destroy(robot_interfaces__srv__CanConfigCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__srv__CanConfigCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__srv__CanConfigCommand_Request__Sequence__are_equal(const robot_interfaces__srv__CanConfigCommand_Request__Sequence * lhs, const robot_interfaces__srv__CanConfigCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__srv__CanConfigCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__srv__CanConfigCommand_Request__Sequence__copy(
  const robot_interfaces__srv__CanConfigCommand_Request__Sequence * input,
  robot_interfaces__srv__CanConfigCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__srv__CanConfigCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__srv__CanConfigCommand_Request * data =
      (robot_interfaces__srv__CanConfigCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__srv__CanConfigCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__srv__CanConfigCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__srv__CanConfigCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robot_interfaces__srv__CanConfigCommand_Response__init(robot_interfaces__srv__CanConfigCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
robot_interfaces__srv__CanConfigCommand_Response__fini(robot_interfaces__srv__CanConfigCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
robot_interfaces__srv__CanConfigCommand_Response__are_equal(const robot_interfaces__srv__CanConfigCommand_Response * lhs, const robot_interfaces__srv__CanConfigCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
robot_interfaces__srv__CanConfigCommand_Response__copy(
  const robot_interfaces__srv__CanConfigCommand_Response * input,
  robot_interfaces__srv__CanConfigCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

robot_interfaces__srv__CanConfigCommand_Response *
robot_interfaces__srv__CanConfigCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__CanConfigCommand_Response * msg = (robot_interfaces__srv__CanConfigCommand_Response *)allocator.allocate(sizeof(robot_interfaces__srv__CanConfigCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__srv__CanConfigCommand_Response));
  bool success = robot_interfaces__srv__CanConfigCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__srv__CanConfigCommand_Response__destroy(robot_interfaces__srv__CanConfigCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__srv__CanConfigCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__srv__CanConfigCommand_Response__Sequence__init(robot_interfaces__srv__CanConfigCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__CanConfigCommand_Response * data = NULL;

  if (size) {
    data = (robot_interfaces__srv__CanConfigCommand_Response *)allocator.zero_allocate(size, sizeof(robot_interfaces__srv__CanConfigCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__srv__CanConfigCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__srv__CanConfigCommand_Response__fini(&data[i - 1]);
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
robot_interfaces__srv__CanConfigCommand_Response__Sequence__fini(robot_interfaces__srv__CanConfigCommand_Response__Sequence * array)
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
      robot_interfaces__srv__CanConfigCommand_Response__fini(&array->data[i]);
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

robot_interfaces__srv__CanConfigCommand_Response__Sequence *
robot_interfaces__srv__CanConfigCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__srv__CanConfigCommand_Response__Sequence * array = (robot_interfaces__srv__CanConfigCommand_Response__Sequence *)allocator.allocate(sizeof(robot_interfaces__srv__CanConfigCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__srv__CanConfigCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__srv__CanConfigCommand_Response__Sequence__destroy(robot_interfaces__srv__CanConfigCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__srv__CanConfigCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__srv__CanConfigCommand_Response__Sequence__are_equal(const robot_interfaces__srv__CanConfigCommand_Response__Sequence * lhs, const robot_interfaces__srv__CanConfigCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__srv__CanConfigCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__srv__CanConfigCommand_Response__Sequence__copy(
  const robot_interfaces__srv__CanConfigCommand_Response__Sequence * input,
  robot_interfaces__srv__CanConfigCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__srv__CanConfigCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__srv__CanConfigCommand_Response * data =
      (robot_interfaces__srv__CanConfigCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__srv__CanConfigCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__srv__CanConfigCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__srv__CanConfigCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
