// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bodyctrl_msgs:msg/CmdSetMotorPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bodyctrl_msgs/msg/detail/cmd_set_motor_position__rosidl_typesupport_introspection_c.h"
#include "bodyctrl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bodyctrl_msgs/msg/detail/cmd_set_motor_position__functions.h"
#include "bodyctrl_msgs/msg/detail/cmd_set_motor_position__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `cmds`
#include "bodyctrl_msgs/msg/set_motor_position.h"
// Member `cmds`
#include "bodyctrl_msgs/msg/detail/set_motor_position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bodyctrl_msgs__msg__CmdSetMotorPosition__init(message_memory);
}

void bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_fini_function(void * message_memory)
{
  bodyctrl_msgs__msg__CmdSetMotorPosition__fini(message_memory);
}

size_t bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__size_function__CmdSetMotorPosition__cmds(
  const void * untyped_member)
{
  const bodyctrl_msgs__msg__SetMotorPosition__Sequence * member =
    (const bodyctrl_msgs__msg__SetMotorPosition__Sequence *)(untyped_member);
  return member->size;
}

const void * bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__get_const_function__CmdSetMotorPosition__cmds(
  const void * untyped_member, size_t index)
{
  const bodyctrl_msgs__msg__SetMotorPosition__Sequence * member =
    (const bodyctrl_msgs__msg__SetMotorPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__get_function__CmdSetMotorPosition__cmds(
  void * untyped_member, size_t index)
{
  bodyctrl_msgs__msg__SetMotorPosition__Sequence * member =
    (bodyctrl_msgs__msg__SetMotorPosition__Sequence *)(untyped_member);
  return &member->data[index];
}

void bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__fetch_function__CmdSetMotorPosition__cmds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bodyctrl_msgs__msg__SetMotorPosition * item =
    ((const bodyctrl_msgs__msg__SetMotorPosition *)
    bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__get_const_function__CmdSetMotorPosition__cmds(untyped_member, index));
  bodyctrl_msgs__msg__SetMotorPosition * value =
    (bodyctrl_msgs__msg__SetMotorPosition *)(untyped_value);
  *value = *item;
}

void bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__assign_function__CmdSetMotorPosition__cmds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bodyctrl_msgs__msg__SetMotorPosition * item =
    ((bodyctrl_msgs__msg__SetMotorPosition *)
    bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__get_function__CmdSetMotorPosition__cmds(untyped_member, index));
  const bodyctrl_msgs__msg__SetMotorPosition * value =
    (const bodyctrl_msgs__msg__SetMotorPosition *)(untyped_value);
  *item = *value;
}

bool bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__resize_function__CmdSetMotorPosition__cmds(
  void * untyped_member, size_t size)
{
  bodyctrl_msgs__msg__SetMotorPosition__Sequence * member =
    (bodyctrl_msgs__msg__SetMotorPosition__Sequence *)(untyped_member);
  bodyctrl_msgs__msg__SetMotorPosition__Sequence__fini(member);
  return bodyctrl_msgs__msg__SetMotorPosition__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__CmdSetMotorPosition, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs__msg__CmdSetMotorPosition, cmds),  // bytes offset in struct
    NULL,  // default value
    bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__size_function__CmdSetMotorPosition__cmds,  // size() function pointer
    bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__get_const_function__CmdSetMotorPosition__cmds,  // get_const(index) function pointer
    bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__get_function__CmdSetMotorPosition__cmds,  // get(index) function pointer
    bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__fetch_function__CmdSetMotorPosition__cmds,  // fetch(index, &value) function pointer
    bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__assign_function__CmdSetMotorPosition__cmds,  // assign(index, value) function pointer
    bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__resize_function__CmdSetMotorPosition__cmds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_message_members = {
  "bodyctrl_msgs__msg",  // message namespace
  "CmdSetMotorPosition",  // message name
  2,  // number of fields
  sizeof(bodyctrl_msgs__msg__CmdSetMotorPosition),
  bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_message_member_array,  // message members
  bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_message_type_support_handle = {
  0,
  &bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bodyctrl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, msg, CmdSetMotorPosition)() {
  bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bodyctrl_msgs, msg, SetMotorPosition)();
  if (!bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_message_type_support_handle.typesupport_identifier) {
    bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bodyctrl_msgs__msg__CmdSetMotorPosition__rosidl_typesupport_introspection_c__CmdSetMotorPosition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
