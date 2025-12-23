// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_msg:msg/CanBusData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_msg/msg/detail/can_bus_data__rosidl_typesupport_introspection_c.h"
#include "robot_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_msg/msg/detail/can_bus_data__functions.h"
#include "robot_msg/msg/detail/can_bus_data__struct.h"


// Include directives for member types
// Member `can_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `bus`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_msg__msg__CanBusData__init(message_memory);
}

void robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_fini_function(void * message_memory)
{
  robot_msg__msg__CanBusData__fini(message_memory);
}

size_t robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__size_function__CanBusData__can_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__get_const_function__CanBusData__can_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__get_function__CanBusData__can_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__fetch_function__CanBusData__can_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__get_const_function__CanBusData__can_data(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__assign_function__CanBusData__can_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__get_function__CanBusData__can_data(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__resize_function__CanBusData__can_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_message_member_array[3] = {
  {
    "can_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_msg__msg__CanBusData, can_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_msg__msg__CanBusData, can_data),  // bytes offset in struct
    NULL,  // default value
    robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__size_function__CanBusData__can_data,  // size() function pointer
    robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__get_const_function__CanBusData__can_data,  // get_const(index) function pointer
    robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__get_function__CanBusData__can_data,  // get(index) function pointer
    robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__fetch_function__CanBusData__can_data,  // fetch(index, &value) function pointer
    robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__assign_function__CanBusData__can_data,  // assign(index, value) function pointer
    robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__resize_function__CanBusData__can_data  // resize(index) function pointer
  },
  {
    "bus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_msg__msg__CanBusData, bus),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_message_members = {
  "robot_msg__msg",  // message namespace
  "CanBusData",  // message name
  3,  // number of fields
  sizeof(robot_msg__msg__CanBusData),
  robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_message_member_array,  // message members
  robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_message_type_support_handle = {
  0,
  &robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_msg, msg, CanBusData)() {
  if (!robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_message_type_support_handle.typesupport_identifier) {
    robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_msg__msg__CanBusData__rosidl_typesupport_introspection_c__CanBusData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
