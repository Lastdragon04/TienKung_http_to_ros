// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_msg:srv/CacheGet.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__CACHE_GET__STRUCT_H_
#define ROBOT_MSG__SRV__DETAIL__CACHE_GET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CacheGet in the package robot_msg.
typedef struct robot_msg__srv__CacheGet_Request
{
  rosidl_runtime_c__String key;
} robot_msg__srv__CacheGet_Request;

// Struct for a sequence of robot_msg__srv__CacheGet_Request.
typedef struct robot_msg__srv__CacheGet_Request__Sequence
{
  robot_msg__srv__CacheGet_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msg__srv__CacheGet_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'value'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CacheGet in the package robot_msg.
typedef struct robot_msg__srv__CacheGet_Response
{
  rosidl_runtime_c__String value;
} robot_msg__srv__CacheGet_Response;

// Struct for a sequence of robot_msg__srv__CacheGet_Response.
typedef struct robot_msg__srv__CacheGet_Response__Sequence
{
  robot_msg__srv__CacheGet_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msg__srv__CacheGet_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MSG__SRV__DETAIL__CACHE_GET__STRUCT_H_
