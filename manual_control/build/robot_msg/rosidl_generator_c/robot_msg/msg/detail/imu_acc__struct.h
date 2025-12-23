// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_msg:msg/ImuAcc.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__IMU_ACC__STRUCT_H_
#define ROBOT_MSG__MSG__DETAIL__IMU_ACC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bus'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ImuAcc in the package robot_msg.
typedef struct robot_msg__msg__ImuAcc
{
  rosidl_runtime_c__String bus;
  int16_t boards_imu;
  float acc_x;
  float acc_y;
  float acc_z;
} robot_msg__msg__ImuAcc;

// Struct for a sequence of robot_msg__msg__ImuAcc.
typedef struct robot_msg__msg__ImuAcc__Sequence
{
  robot_msg__msg__ImuAcc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msg__msg__ImuAcc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MSG__MSG__DETAIL__IMU_ACC__STRUCT_H_
