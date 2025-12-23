// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_interfaces/msg/detail/sensor_state__rosidl_typesupport_introspection_c.h"
#include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_interfaces/msg/detail/sensor_state__functions.h"
#include "robot_interfaces/msg/detail/sensor_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `imu`
#include "robot_interfaces/msg/imu_data.h"
// Member `imu`
#include "robot_interfaces/msg/detail/imu_data__rosidl_typesupport_introspection_c.h"
// Member `touch`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__msg__SensorState__init(message_memory);
}

void robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_fini_function(void * message_memory)
{
  robot_interfaces__msg__SensorState__fini(message_memory);
}

size_t robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__size_function__SensorState__imu(
  const void * untyped_member)
{
  const robot_interfaces__msg__ImuData__Sequence * member =
    (const robot_interfaces__msg__ImuData__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__imu(
  const void * untyped_member, size_t index)
{
  const robot_interfaces__msg__ImuData__Sequence * member =
    (const robot_interfaces__msg__ImuData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__imu(
  void * untyped_member, size_t index)
{
  robot_interfaces__msg__ImuData__Sequence * member =
    (robot_interfaces__msg__ImuData__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__fetch_function__SensorState__imu(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robot_interfaces__msg__ImuData * item =
    ((const robot_interfaces__msg__ImuData *)
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__imu(untyped_member, index));
  robot_interfaces__msg__ImuData * value =
    (robot_interfaces__msg__ImuData *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__assign_function__SensorState__imu(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robot_interfaces__msg__ImuData * item =
    ((robot_interfaces__msg__ImuData *)
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__imu(untyped_member, index));
  const robot_interfaces__msg__ImuData * value =
    (const robot_interfaces__msg__ImuData *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__resize_function__SensorState__imu(
  void * untyped_member, size_t size)
{
  robot_interfaces__msg__ImuData__Sequence * member =
    (robot_interfaces__msg__ImuData__Sequence *)(untyped_member);
  robot_interfaces__msg__ImuData__Sequence__fini(member);
  return robot_interfaces__msg__ImuData__Sequence__init(member, size);
}

size_t robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__size_function__SensorState__touch(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__touch(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__touch(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__fetch_function__SensorState__touch(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__touch(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__assign_function__SensorState__touch(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__touch(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__resize_function__SensorState__touch(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__SensorState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__SensorState, imu),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__size_function__SensorState__imu,  // size() function pointer
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__imu,  // get_const(index) function pointer
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__imu,  // get(index) function pointer
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__fetch_function__SensorState__imu,  // fetch(index, &value) function pointer
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__assign_function__SensorState__imu,  // assign(index, value) function pointer
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__resize_function__SensorState__imu  // resize(index) function pointer
  },
  {
    "touch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__SensorState, touch),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__size_function__SensorState__touch,  // size() function pointer
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__touch,  // get_const(index) function pointer
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__touch,  // get(index) function pointer
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__fetch_function__SensorState__touch,  // fetch(index, &value) function pointer
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__assign_function__SensorState__touch,  // assign(index, value) function pointer
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__resize_function__SensorState__touch  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_members = {
  "robot_interfaces__msg",  // message namespace
  "SensorState",  // message name
  3,  // number of fields
  sizeof(robot_interfaces__msg__SensorState),
  robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_member_array,  // message members
  robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle = {
  0,
  &robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, msg, SensorState)() {
  robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, msg, ImuData)();
  if (!robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
