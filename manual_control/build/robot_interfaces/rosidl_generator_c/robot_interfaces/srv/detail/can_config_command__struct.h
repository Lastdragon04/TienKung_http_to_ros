// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:srv/CanConfigCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__CAN_CONFIG_COMMAND__STRUCT_H_
#define ROBOT_INTERFACES__SRV__DETAIL__CAN_CONFIG_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data1'
// Member 'data2'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'device_names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CanConfigCommand in the package robot_interfaces.
typedef struct robot_interfaces__srv__CanConfigCommand_Request
{
  uint8_t opcode;
  uint8_t device;
  rosidl_runtime_c__uint8__Sequence data1;
  rosidl_runtime_c__float__Sequence data2;
  rosidl_runtime_c__String__Sequence device_names;
} robot_interfaces__srv__CanConfigCommand_Request;

// Struct for a sequence of robot_interfaces__srv__CanConfigCommand_Request.
typedef struct robot_interfaces__srv__CanConfigCommand_Request__Sequence
{
  robot_interfaces__srv__CanConfigCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__srv__CanConfigCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CanConfigCommand in the package robot_interfaces.
typedef struct robot_interfaces__srv__CanConfigCommand_Response
{
  uint8_t result;
} robot_interfaces__srv__CanConfigCommand_Response;

// Struct for a sequence of robot_interfaces__srv__CanConfigCommand_Response.
typedef struct robot_interfaces__srv__CanConfigCommand_Response__Sequence
{
  robot_interfaces__srv__CanConfigCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__srv__CanConfigCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__SRV__DETAIL__CAN_CONFIG_COMMAND__STRUCT_H_
