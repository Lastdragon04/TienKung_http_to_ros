// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_msg:msg/CanBusData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__CAN_BUS_DATA__STRUCT_H_
#define ROBOT_MSG__MSG__DETAIL__CAN_BUS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'can_data'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'bus'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CanBusData in the package robot_msg.
typedef struct robot_msg__msg__CanBusData
{
  int16_t can_id;
  rosidl_runtime_c__int16__Sequence can_data;
  rosidl_runtime_c__String bus;
} robot_msg__msg__CanBusData;

// Struct for a sequence of robot_msg__msg__CanBusData.
typedef struct robot_msg__msg__CanBusData__Sequence
{
  robot_msg__msg__CanBusData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msg__msg__CanBusData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MSG__MSG__DETAIL__CAN_BUS_DATA__STRUCT_H_
