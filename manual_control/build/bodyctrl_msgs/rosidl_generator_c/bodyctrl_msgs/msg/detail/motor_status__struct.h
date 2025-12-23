// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bodyctrl_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorStatus in the package bodyctrl_msgs.
typedef struct bodyctrl_msgs__msg__MotorStatus
{
  /// MotorName
  uint16_t name;
  /// rad
  float pos;
  /// rad
  float speed;
  /// A
  float current;
  /// Mos温度
  float temperature;
  uint32_t error;
} bodyctrl_msgs__msg__MotorStatus;

// Struct for a sequence of bodyctrl_msgs__msg__MotorStatus.
typedef struct bodyctrl_msgs__msg__MotorStatus__Sequence
{
  bodyctrl_msgs__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bodyctrl_msgs__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
