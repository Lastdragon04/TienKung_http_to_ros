// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:srv/JointSensorNames.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__JOINT_SENSOR_NAMES__STRUCT_H_
#define ROBOT_INTERFACES__SRV__DETAIL__JOINT_SENSOR_NAMES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/JointSensorNames in the package robot_interfaces.
typedef struct robot_interfaces__srv__JointSensorNames_Request
{
  uint8_t structure_needs_at_least_one_member;
} robot_interfaces__srv__JointSensorNames_Request;

// Struct for a sequence of robot_interfaces__srv__JointSensorNames_Request.
typedef struct robot_interfaces__srv__JointSensorNames_Request__Sequence
{
  robot_interfaces__srv__JointSensorNames_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__srv__JointSensorNames_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_names'
// Member 'sensor_names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/JointSensorNames in the package robot_interfaces.
typedef struct robot_interfaces__srv__JointSensorNames_Response
{
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__String__Sequence sensor_names;
} robot_interfaces__srv__JointSensorNames_Response;

// Struct for a sequence of robot_interfaces__srv__JointSensorNames_Response.
typedef struct robot_interfaces__srv__JointSensorNames_Response__Sequence
{
  robot_interfaces__srv__JointSensorNames_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__srv__JointSensorNames_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__SRV__DETAIL__JOINT_SENSOR_NAMES__STRUCT_H_
