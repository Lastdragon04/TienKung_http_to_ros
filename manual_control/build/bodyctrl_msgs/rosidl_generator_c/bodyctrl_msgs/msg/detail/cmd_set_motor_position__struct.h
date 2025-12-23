// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/CmdSetMotorPosition.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_POSITION__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_POSITION__STRUCT_H_

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
// Member 'cmds'
#include "bodyctrl_msgs/msg/detail/set_motor_position__struct.h"

/// Struct defined in msg/CmdSetMotorPosition in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__CmdSetMotorPosition
{
  std_msgs__msg__Header header;
  bodyctrl_msgs__msg__SetMotorPosition__Sequence cmds;
} bodyctrl_msgs__msg__CmdSetMotorPosition;

// Struct for a sequence of bodyctrl_msgs__msg__CmdSetMotorPosition.
typedef struct bodyctrl_msgs__msg__CmdSetMotorPosition__Sequence
{
  bodyctrl_msgs__msg__CmdSetMotorPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__CmdSetMotorPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_POSITION__STRUCT_H_
