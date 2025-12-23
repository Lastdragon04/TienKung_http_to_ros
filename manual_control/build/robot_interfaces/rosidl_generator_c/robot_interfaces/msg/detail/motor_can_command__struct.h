// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/MotorCanCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTOR_CAN_COMMAND__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTOR_CAN_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'positions'
// Member 'velocities'
// Member 'efforts'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MotorCanCommand in the package robot_interfaces.
typedef struct robot_interfaces__msg__MotorCanCommand
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__double__Sequence positions;
  rosidl_runtime_c__double__Sequence velocities;
  rosidl_runtime_c__double__Sequence efforts;
} robot_interfaces__msg__MotorCanCommand;

// Struct for a sequence of robot_interfaces__msg__MotorCanCommand.
typedef struct robot_interfaces__msg__MotorCanCommand__Sequence
{
  robot_interfaces__msg__MotorCanCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__MotorCanCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTOR_CAN_COMMAND__STRUCT_H_
