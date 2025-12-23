// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_msg:srv/ImuRectify.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__IMU_RECTIFY__STRUCT_H_
#define ROBOT_MSG__SRV__DETAIL__IMU_RECTIFY__STRUCT_H_

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

/// Struct defined in srv/ImuRectify in the package robot_msg.
typedef struct robot_msg__srv__ImuRectify_Request
{
  rosidl_runtime_c__String bus;
  int16_t boards_imu;
} robot_msg__srv__ImuRectify_Request;

// Struct for a sequence of robot_msg__srv__ImuRectify_Request.
typedef struct robot_msg__srv__ImuRectify_Request__Sequence
{
  robot_msg__srv__ImuRectify_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msg__srv__ImuRectify_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ImuRectify in the package robot_msg.
typedef struct robot_msg__srv__ImuRectify_Response
{
  rosidl_runtime_c__String result;
} robot_msg__srv__ImuRectify_Response;

// Struct for a sequence of robot_msg__srv__ImuRectify_Response.
typedef struct robot_msg__srv__ImuRectify_Response__Sequence
{
  robot_msg__srv__ImuRectify_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msg__srv__ImuRectify_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MSG__SRV__DETAIL__IMU_RECTIFY__STRUCT_H_
