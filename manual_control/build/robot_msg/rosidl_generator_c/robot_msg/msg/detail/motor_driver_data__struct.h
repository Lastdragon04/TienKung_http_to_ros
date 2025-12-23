// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_msg:msg/MotorDriverData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__STRUCT_H_
#define ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'depend'
// Member 'bus'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotorDriverData in the package robot_msg.
typedef struct robot_msg__msg__MotorDriverData
{
  int16_t canid;
  float value;
  float speed;
  int16_t type;
  int16_t protocol_type;
  int16_t boards_motor;
  rosidl_runtime_c__String depend;
  rosidl_runtime_c__String bus;
} robot_msg__msg__MotorDriverData;

// Struct for a sequence of robot_msg__msg__MotorDriverData.
typedef struct robot_msg__msg__MotorDriverData__Sequence
{
  robot_msg__msg__MotorDriverData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msg__msg__MotorDriverData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__STRUCT_H_
