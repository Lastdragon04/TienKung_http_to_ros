// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:action/ActionGroupBridge.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__ACTION__DETAIL__ACTION_GROUP_BRIDGE__STRUCT_H_
#define ROBOT_INTERFACES__ACTION__DETAIL__ACTION_GROUP_BRIDGE__STRUCT_H_

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
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'positions'
// Member 'velocities'
// Member 'efforts'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/ActionGroupBridge in the package robot_interfaces.
typedef struct robot_interfaces__action__ActionGroupBridge_Goal
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__double__Sequence positions;
  rosidl_runtime_c__double__Sequence velocities;
  rosidl_runtime_c__double__Sequence efforts;
} robot_interfaces__action__ActionGroupBridge_Goal;

// Struct for a sequence of robot_interfaces__action__ActionGroupBridge_Goal.
typedef struct robot_interfaces__action__ActionGroupBridge_Goal__Sequence
{
  robot_interfaces__action__ActionGroupBridge_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__ActionGroupBridge_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ActionGroupBridge in the package robot_interfaces.
typedef struct robot_interfaces__action__ActionGroupBridge_Result
{
  bool flag;
} robot_interfaces__action__ActionGroupBridge_Result;

// Struct for a sequence of robot_interfaces__action__ActionGroupBridge_Result.
typedef struct robot_interfaces__action__ActionGroupBridge_Result__Sequence
{
  robot_interfaces__action__ActionGroupBridge_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__ActionGroupBridge_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_names'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'positions'
// Member 'velocities'
// Member 'efforts'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/ActionGroupBridge in the package robot_interfaces.
typedef struct robot_interfaces__action__ActionGroupBridge_Feedback
{
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__double__Sequence positions;
  rosidl_runtime_c__double__Sequence velocities;
  rosidl_runtime_c__double__Sequence efforts;
} robot_interfaces__action__ActionGroupBridge_Feedback;

// Struct for a sequence of robot_interfaces__action__ActionGroupBridge_Feedback.
typedef struct robot_interfaces__action__ActionGroupBridge_Feedback__Sequence
{
  robot_interfaces__action__ActionGroupBridge_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__ActionGroupBridge_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_interfaces/action/detail/action_group_bridge__struct.h"

/// Struct defined in action/ActionGroupBridge in the package robot_interfaces.
typedef struct robot_interfaces__action__ActionGroupBridge_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_interfaces__action__ActionGroupBridge_Goal goal;
} robot_interfaces__action__ActionGroupBridge_SendGoal_Request;

// Struct for a sequence of robot_interfaces__action__ActionGroupBridge_SendGoal_Request.
typedef struct robot_interfaces__action__ActionGroupBridge_SendGoal_Request__Sequence
{
  robot_interfaces__action__ActionGroupBridge_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__ActionGroupBridge_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ActionGroupBridge in the package robot_interfaces.
typedef struct robot_interfaces__action__ActionGroupBridge_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_interfaces__action__ActionGroupBridge_SendGoal_Response;

// Struct for a sequence of robot_interfaces__action__ActionGroupBridge_SendGoal_Response.
typedef struct robot_interfaces__action__ActionGroupBridge_SendGoal_Response__Sequence
{
  robot_interfaces__action__ActionGroupBridge_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__ActionGroupBridge_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ActionGroupBridge in the package robot_interfaces.
typedef struct robot_interfaces__action__ActionGroupBridge_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_interfaces__action__ActionGroupBridge_GetResult_Request;

// Struct for a sequence of robot_interfaces__action__ActionGroupBridge_GetResult_Request.
typedef struct robot_interfaces__action__ActionGroupBridge_GetResult_Request__Sequence
{
  robot_interfaces__action__ActionGroupBridge_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__ActionGroupBridge_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__struct.h"

/// Struct defined in action/ActionGroupBridge in the package robot_interfaces.
typedef struct robot_interfaces__action__ActionGroupBridge_GetResult_Response
{
  int8_t status;
  robot_interfaces__action__ActionGroupBridge_Result result;
} robot_interfaces__action__ActionGroupBridge_GetResult_Response;

// Struct for a sequence of robot_interfaces__action__ActionGroupBridge_GetResult_Response.
typedef struct robot_interfaces__action__ActionGroupBridge_GetResult_Response__Sequence
{
  robot_interfaces__action__ActionGroupBridge_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__ActionGroupBridge_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__struct.h"

/// Struct defined in action/ActionGroupBridge in the package robot_interfaces.
typedef struct robot_interfaces__action__ActionGroupBridge_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_interfaces__action__ActionGroupBridge_Feedback feedback;
} robot_interfaces__action__ActionGroupBridge_FeedbackMessage;

// Struct for a sequence of robot_interfaces__action__ActionGroupBridge_FeedbackMessage.
typedef struct robot_interfaces__action__ActionGroupBridge_FeedbackMessage__Sequence
{
  robot_interfaces__action__ActionGroupBridge_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__ActionGroupBridge_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__ACTION__DETAIL__ACTION_GROUP_BRIDGE__STRUCT_H_
