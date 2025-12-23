// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/MotorStatusMsg.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG__STRUCT_H_

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
// Member 'status'
#include "bodyctrl_msgs/msg/detail/motor_status__struct.h"

/// Struct defined in msg/MotorStatusMsg in the package bodyctrl_msgs.
/**
  * bodyctrl_msgs/msg/MotorStatusMsg.msg
 */
typedef struct bodyctrl_msgs__msg__MotorStatusMsg
{
  std_msgs__msg__Header header;
  bodyctrl_msgs__msg__MotorStatus__Sequence status;
} bodyctrl_msgs__msg__MotorStatusMsg;

// Struct for a sequence of bodyctrl_msgs__msg__MotorStatusMsg.
typedef struct bodyctrl_msgs__msg__MotorStatusMsg__Sequence
{
  bodyctrl_msgs__msg__MotorStatusMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__MotorStatusMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS_MSG__STRUCT_H_
