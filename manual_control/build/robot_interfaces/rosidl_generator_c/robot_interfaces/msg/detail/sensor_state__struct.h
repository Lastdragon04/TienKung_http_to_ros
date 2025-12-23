// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_

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
// Member 'imu'
#include "robot_interfaces/msg/detail/imu_data__struct.h"
// Member 'touch'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SensorState in the package robot_interfaces.
typedef struct robot_interfaces__msg__SensorState
{
  std_msgs__msg__Header header;
  robot_interfaces__msg__ImuData__Sequence imu;
  rosidl_runtime_c__uint8__Sequence touch;
} robot_interfaces__msg__SensorState;

// Struct for a sequence of robot_interfaces__msg__SensorState.
typedef struct robot_interfaces__msg__SensorState__Sequence
{
  robot_interfaces__msg__SensorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__SensorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_H_
