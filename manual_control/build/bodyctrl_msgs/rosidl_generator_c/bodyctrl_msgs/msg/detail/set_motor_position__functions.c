// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bodyctrl_msgs:msg/SetMotorPosition.idl
// generated code does not contain a copyright notice
#include "bodyctrl_msgs/msg/detail/set_motor_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bodyctrl_msgs__msg__SetMotorPosition__init(bodyctrl_msgs__msg__SetMotorPosition * msg)
{
  if (!msg) {
    return false;
  }
  // name
  // pos
  // spd
  // cur
  return true;
}

void
bodyctrl_msgs__msg__SetMotorPosition__fini(bodyctrl_msgs__msg__SetMotorPosition * msg)
{
  if (!msg) {
    return;
  }
  // name
  // pos
  // spd
  // cur
}

bool
bodyctrl_msgs__msg__SetMotorPosition__are_equal(const bodyctrl_msgs__msg__SetMotorPosition * lhs, const bodyctrl_msgs__msg__SetMotorPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (lhs->name != rhs->name) {
    return false;
  }
  // pos
  if (lhs->pos != rhs->pos) {
    return false;
  }
  // spd
  if (lhs->spd != rhs->spd) {
    return false;
  }
  // cur
  if (lhs->cur != rhs->cur) {
    return false;
  }
  return true;
}

bool
bodyctrl_msgs__msg__SetMotorPosition__copy(
  const bodyctrl_msgs__msg__SetMotorPosition * input,
  bodyctrl_msgs__msg__SetMotorPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  output->name = input->name;
  // pos
  output->pos = input->pos;
  // spd
  output->spd = input->spd;
  // cur
  output->cur = input->cur;
  return true;
}

bodyctrl_msgs__msg__SetMotorPosition *
bodyctrl_msgs__msg__SetMotorPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SetMotorPosition * msg = (bodyctrl_msgs__msg__SetMotorPosition *)allocator.allocate(sizeof(bodyctrl_msgs__msg__SetMotorPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bodyctrl_msgs__msg__SetMotorPosition));
  bool success = bodyctrl_msgs__msg__SetMotorPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bodyctrl_msgs__msg__SetMotorPosition__destroy(bodyctrl_msgs__msg__SetMotorPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bodyctrl_msgs__msg__SetMotorPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bodyctrl_msgs__msg__SetMotorPosition__Sequence__init(bodyctrl_msgs__msg__SetMotorPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SetMotorPosition * data = NULL;

  if (size) {
    data = (bodyctrl_msgs__msg__SetMotorPosition *)allocator.zero_allocate(size, sizeof(bodyctrl_msgs__msg__SetMotorPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bodyctrl_msgs__msg__SetMotorPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bodyctrl_msgs__msg__SetMotorPosition__fini(&data[i - 1]);
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
bodyctrl_msgs__msg__SetMotorPosition__Sequence__fini(bodyctrl_msgs__msg__SetMotorPosition__Sequence * array)
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
      bodyctrl_msgs__msg__SetMotorPosition__fini(&array->data[i]);
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

bodyctrl_msgs__msg__SetMotorPosition__Sequence *
bodyctrl_msgs__msg__SetMotorPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bodyctrl_msgs__msg__SetMotorPosition__Sequence * array = (bodyctrl_msgs__msg__SetMotorPosition__Sequence *)allocator.allocate(sizeof(bodyctrl_msgs__msg__SetMotorPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bodyctrl_msgs__msg__SetMotorPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bodyctrl_msgs__msg__SetMotorPosition__Sequence__destroy(bodyctrl_msgs__msg__SetMotorPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bodyctrl_msgs__msg__SetMotorPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bodyctrl_msgs__msg__SetMotorPosition__Sequence__are_equal(const bodyctrl_msgs__msg__SetMotorPosition__Sequence * lhs, const bodyctrl_msgs__msg__SetMotorPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bodyctrl_msgs__msg__SetMotorPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bodyctrl_msgs__msg__SetMotorPosition__Sequence__copy(
  const bodyctrl_msgs__msg__SetMotorPosition__Sequence * input,
  bodyctrl_msgs__msg__SetMotorPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bodyctrl_msgs__msg__SetMotorPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bodyctrl_msgs__msg__SetMotorPosition * data =
      (bodyctrl_msgs__msg__SetMotorPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bodyctrl_msgs__msg__SetMotorPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bodyctrl_msgs__msg__SetMotorPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bodyctrl_msgs__msg__SetMotorPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
