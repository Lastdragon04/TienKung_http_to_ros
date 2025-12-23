// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_msg:msg/MotorDriverMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_msg/msg/detail/motor_driver_message__rosidl_typesupport_introspection_c.h"
#include "robot_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_msg/msg/detail/motor_driver_message__functions.h"
#include "robot_msg/msg/detail/motor_driver_message__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "robot_msg/msg/motor_driver_data.h"
// Member `data`
#include "robot_msg/msg/detail/motor_driver_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_msg__msg__MotorDriverMessage__init(message_memory);
}

void robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_fini_function(void * message_memory)
{
  robot_msg__msg__MotorDriverMessage__fini(message_memory);
}

size_t robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__size_function__MotorDriverMessage__data(
  const void * untyped_member)
{
  const robot_msg__msg__MotorDriverData__Sequence * member =
    (const robot_msg__msg__MotorDriverData__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__get_const_function__MotorDriverMessage__data(
  const void * untyped_member, size_t index)
{
  const robot_msg__msg__MotorDriverData__Sequence * member =
    (const robot_msg__msg__MotorDriverData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__get_function__MotorDriverMessage__data(
  void * untyped_member, size_t index)
{
  robot_msg__msg__MotorDriverData__Sequence * member =
    (robot_msg__msg__MotorDriverData__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__fetch_function__MotorDriverMessage__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robot_msg__msg__MotorDriverData * item =
    ((const robot_msg__msg__MotorDriverData *)
    robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__get_const_function__MotorDriverMessage__data(untyped_member, index));
  robot_msg__msg__MotorDriverData * value =
    (robot_msg__msg__MotorDriverData *)(untyped_value);
  *value = *item;
}

void robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__assign_function__MotorDriverMessage__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robot_msg__msg__MotorDriverData * item =
    ((robot_msg__msg__MotorDriverData *)
    robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__get_function__MotorDriverMessage__data(untyped_member, index));
  const robot_msg__msg__MotorDriverData * value =
    (const robot_msg__msg__MotorDriverData *)(untyped_value);
  *item = *value;
}

bool robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__resize_function__MotorDriverMessage__data(
  void * untyped_member, size_t size)
{
  robot_msg__msg__MotorDriverData__Sequence * member =
    (robot_msg__msg__MotorDriverData__Sequence *)(untyped_member);
  robot_msg__msg__MotorDriverData__Sequence__fini(member);
  return robot_msg__msg__MotorDriverData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_msg__msg__MotorDriverMessage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_msg__msg__MotorDriverMessage, data),  // bytes offset in struct
    NULL,  // default value
    robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__size_function__MotorDriverMessage__data,  // size() function pointer
    robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__get_const_function__MotorDriverMessage__data,  // get_const(index) function pointer
    robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__get_function__MotorDriverMessage__data,  // get(index) function pointer
    robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__fetch_function__MotorDriverMessage__data,  // fetch(index, &value) function pointer
    robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__assign_function__MotorDriverMessage__data,  // assign(index, value) function pointer
    robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__resize_function__MotorDriverMessage__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_message_members = {
  "robot_msg__msg",  // message namespace
  "MotorDriverMessage",  // message name
  2,  // number of fields
  sizeof(robot_msg__msg__MotorDriverMessage),
  robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_message_member_array,  // message members
  robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_message_type_support_handle = {
  0,
  &robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_msg, msg, MotorDriverMessage)() {
  robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_msg, msg, MotorDriverData)();
  if (!robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_message_type_support_handle.typesupport_identifier) {
    robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_msg__msg__MotorDriverMessage__rosidl_typesupport_introspection_c__MotorDriverMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
