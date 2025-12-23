// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_interfaces:action/ActionGroupBridge.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"
#include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_interfaces/action/detail/action_group_bridge__functions.h"
#include "robot_interfaces/action/detail/action_group_bridge__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `positions`
// Member `velocities`
// Member `efforts`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__ActionGroupBridge_Goal__init(message_memory);
}

void robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_fini_function(void * message_memory)
{
  robot_interfaces__action__ActionGroupBridge_Goal__fini(message_memory);
}

size_t robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Goal__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Goal__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Goal__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Goal__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Goal__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Goal__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Goal__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Goal__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Goal__velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Goal__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__velocities(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Goal__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__velocities(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Goal__velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Goal__efforts(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__efforts(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__efforts(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Goal__efforts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__efforts(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Goal__efforts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__efforts(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Goal__efforts(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_Goal, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_Goal, joint_names),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Goal__joint_names,  // size() function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__joint_names,  // get_const(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__joint_names,  // get(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Goal__joint_names,  // fetch(index, &value) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Goal__joint_names,  // assign(index, value) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Goal__joint_names  // resize(index) function pointer
  },
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_Goal, positions),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Goal__positions,  // size() function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__positions,  // get_const(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__positions,  // get(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Goal__positions,  // fetch(index, &value) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Goal__positions,  // assign(index, value) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Goal__positions  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_Goal, velocities),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Goal__velocities,  // size() function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__velocities,  // get_const(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__velocities,  // get(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Goal__velocities,  // fetch(index, &value) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Goal__velocities,  // assign(index, value) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Goal__velocities  // resize(index) function pointer
  },
  {
    "efforts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_Goal, efforts),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Goal__efforts,  // size() function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Goal__efforts,  // get_const(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Goal__efforts,  // get(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Goal__efforts,  // fetch(index, &value) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Goal__efforts,  // assign(index, value) function pointer
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Goal__efforts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_message_members = {
  "robot_interfaces__action",  // message namespace
  "ActionGroupBridge_Goal",  // message name
  5,  // number of fields
  sizeof(robot_interfaces__action__ActionGroupBridge_Goal),
  robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_message_member_array,  // message members
  robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_message_type_support_handle = {
  0,
  &robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_Goal)() {
  robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__action__ActionGroupBridge_Goal__rosidl_typesupport_introspection_c__ActionGroupBridge_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__functions.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__ActionGroupBridge_Result__init(message_memory);
}

void robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_fini_function(void * message_memory)
{
  robot_interfaces__action__ActionGroupBridge_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_message_member_array[1] = {
  {
    "flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_Result, flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_message_members = {
  "robot_interfaces__action",  // message namespace
  "ActionGroupBridge_Result",  // message name
  1,  // number of fields
  sizeof(robot_interfaces__action__ActionGroupBridge_Result),
  robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_message_member_array,  // message members
  robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_message_type_support_handle = {
  0,
  &robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_Result)() {
  if (!robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__action__ActionGroupBridge_Result__rosidl_typesupport_introspection_c__ActionGroupBridge_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__functions.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__struct.h"


// Include directives for member types
// Member `joint_names`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `positions`
// Member `velocities`
// Member `efforts`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__ActionGroupBridge_Feedback__init(message_memory);
}

void robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_fini_function(void * message_memory)
{
  robot_interfaces__action__ActionGroupBridge_Feedback__fini(message_memory);
}

size_t robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Feedback__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Feedback__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Feedback__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Feedback__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Feedback__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Feedback__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Feedback__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Feedback__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Feedback__velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Feedback__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__velocities(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Feedback__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__velocities(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Feedback__velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Feedback__efforts(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__efforts(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__efforts(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Feedback__efforts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__efforts(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Feedback__efforts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__efforts(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Feedback__efforts(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_message_member_array[4] = {
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_Feedback, joint_names),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Feedback__joint_names,  // size() function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__joint_names,  // get_const(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__joint_names,  // get(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Feedback__joint_names,  // fetch(index, &value) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Feedback__joint_names,  // assign(index, value) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Feedback__joint_names  // resize(index) function pointer
  },
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_Feedback, positions),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Feedback__positions,  // size() function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__positions,  // get_const(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__positions,  // get(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Feedback__positions,  // fetch(index, &value) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Feedback__positions,  // assign(index, value) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Feedback__positions  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_Feedback, velocities),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Feedback__velocities,  // size() function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__velocities,  // get_const(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__velocities,  // get(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Feedback__velocities,  // fetch(index, &value) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Feedback__velocities,  // assign(index, value) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Feedback__velocities  // resize(index) function pointer
  },
  {
    "efforts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_Feedback, efforts),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__size_function__ActionGroupBridge_Feedback__efforts,  // size() function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_const_function__ActionGroupBridge_Feedback__efforts,  // get_const(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__get_function__ActionGroupBridge_Feedback__efforts,  // get(index) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__fetch_function__ActionGroupBridge_Feedback__efforts,  // fetch(index, &value) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__assign_function__ActionGroupBridge_Feedback__efforts,  // assign(index, value) function pointer
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__resize_function__ActionGroupBridge_Feedback__efforts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_message_members = {
  "robot_interfaces__action",  // message namespace
  "ActionGroupBridge_Feedback",  // message name
  4,  // number of fields
  sizeof(robot_interfaces__action__ActionGroupBridge_Feedback),
  robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_message_member_array,  // message members
  robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_message_type_support_handle = {
  0,
  &robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_Feedback)() {
  if (!robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__action__ActionGroupBridge_Feedback__rosidl_typesupport_introspection_c__ActionGroupBridge_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__functions.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "robot_interfaces/action/action_group_bridge.h"
// Member `goal`
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__ActionGroupBridge_SendGoal_Request__init(message_memory);
}

void robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_fini_function(void * message_memory)
{
  robot_interfaces__action__ActionGroupBridge_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_message_members = {
  "robot_interfaces__action",  // message namespace
  "ActionGroupBridge_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(robot_interfaces__action__ActionGroupBridge_SendGoal_Request),
  robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_message_member_array,  // message members
  robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_message_type_support_handle = {
  0,
  &robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_SendGoal_Request)() {
  robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_Goal)();
  if (!robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__action__ActionGroupBridge_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__functions.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__ActionGroupBridge_SendGoal_Response__init(message_memory);
}

void robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_fini_function(void * message_memory)
{
  robot_interfaces__action__ActionGroupBridge_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_message_members = {
  "robot_interfaces__action",  // message namespace
  "ActionGroupBridge_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(robot_interfaces__action__ActionGroupBridge_SendGoal_Response),
  robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_message_member_array,  // message members
  robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_message_type_support_handle = {
  0,
  &robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_SendGoal_Response)() {
  robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__action__ActionGroupBridge_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_service_members = {
  "robot_interfaces__action",  // service namespace
  "ActionGroupBridge_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_service_type_support_handle = {
  0,
  &robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_SendGoal)() {
  if (!robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_service_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_SendGoal_Response)()->data;
  }

  return &robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__functions.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__ActionGroupBridge_GetResult_Request__init(message_memory);
}

void robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_fini_function(void * message_memory)
{
  robot_interfaces__action__ActionGroupBridge_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_message_members = {
  "robot_interfaces__action",  // message namespace
  "ActionGroupBridge_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(robot_interfaces__action__ActionGroupBridge_GetResult_Request),
  robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_message_member_array,  // message members
  robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_message_type_support_handle = {
  0,
  &robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_GetResult_Request)() {
  robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__action__ActionGroupBridge_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__functions.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "robot_interfaces/action/action_group_bridge.h"
// Member `result`
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__ActionGroupBridge_GetResult_Response__init(message_memory);
}

void robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_fini_function(void * message_memory)
{
  robot_interfaces__action__ActionGroupBridge_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_message_members = {
  "robot_interfaces__action",  // message namespace
  "ActionGroupBridge_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(robot_interfaces__action__ActionGroupBridge_GetResult_Response),
  robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_message_member_array,  // message members
  robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_message_type_support_handle = {
  0,
  &robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_GetResult_Response)() {
  robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_Result)();
  if (!robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__action__ActionGroupBridge_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_service_members = {
  "robot_interfaces__action",  // service namespace
  "ActionGroupBridge_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_service_type_support_handle = {
  0,
  &robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_GetResult)() {
  if (!robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_service_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_GetResult_Response)()->data;
  }

  return &robot_interfaces__action__detail__action_group_bridge__rosidl_typesupport_introspection_c__ActionGroupBridge_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__functions.h"
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "robot_interfaces/action/action_group_bridge.h"
// Member `feedback`
// already included above
// #include "robot_interfaces/action/detail/action_group_bridge__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__ActionGroupBridge_FeedbackMessage__init(message_memory);
}

void robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_fini_function(void * message_memory)
{
  robot_interfaces__action__ActionGroupBridge_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__ActionGroupBridge_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_message_members = {
  "robot_interfaces__action",  // message namespace
  "ActionGroupBridge_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(robot_interfaces__action__ActionGroupBridge_FeedbackMessage),
  robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_message_member_array,  // message members
  robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_message_type_support_handle = {
  0,
  &robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_FeedbackMessage)() {
  robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, ActionGroupBridge_Feedback)();
  if (!robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__action__ActionGroupBridge_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupBridge_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
