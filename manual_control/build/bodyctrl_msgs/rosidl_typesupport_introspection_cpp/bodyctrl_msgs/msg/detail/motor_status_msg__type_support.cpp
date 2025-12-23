// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bodyctrl_msgs:msg/MotorStatusMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bodyctrl_msgs/msg/detail/motor_status_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bodyctrl_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorStatusMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bodyctrl_msgs::msg::MotorStatusMsg(_init);
}

void MotorStatusMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bodyctrl_msgs::msg::MotorStatusMsg *>(message_memory);
  typed_message->~MotorStatusMsg();
}

size_t size_function__MotorStatusMsg__status(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bodyctrl_msgs::msg::MotorStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorStatusMsg__status(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bodyctrl_msgs::msg::MotorStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStatusMsg__status(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bodyctrl_msgs::msg::MotorStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorStatusMsg__status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bodyctrl_msgs::msg::MotorStatus *>(
    get_const_function__MotorStatusMsg__status(untyped_member, index));
  auto & value = *reinterpret_cast<bodyctrl_msgs::msg::MotorStatus *>(untyped_value);
  value = item;
}

void assign_function__MotorStatusMsg__status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bodyctrl_msgs::msg::MotorStatus *>(
    get_function__MotorStatusMsg__status(untyped_member, index));
  const auto & value = *reinterpret_cast<const bodyctrl_msgs::msg::MotorStatus *>(untyped_value);
  item = value;
}

void resize_function__MotorStatusMsg__status(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bodyctrl_msgs::msg::MotorStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorStatusMsg_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs::msg::MotorStatusMsg, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bodyctrl_msgs::msg::MotorStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bodyctrl_msgs::msg::MotorStatusMsg, status),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStatusMsg__status,  // size() function pointer
    get_const_function__MotorStatusMsg__status,  // get_const(index) function pointer
    get_function__MotorStatusMsg__status,  // get(index) function pointer
    fetch_function__MotorStatusMsg__status,  // fetch(index, &value) function pointer
    assign_function__MotorStatusMsg__status,  // assign(index, value) function pointer
    resize_function__MotorStatusMsg__status  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorStatusMsg_message_members = {
  "bodyctrl_msgs::msg",  // message namespace
  "MotorStatusMsg",  // message name
  2,  // number of fields
  sizeof(bodyctrl_msgs::msg::MotorStatusMsg),
  MotorStatusMsg_message_member_array,  // message members
  MotorStatusMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorStatusMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorStatusMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorStatusMsg_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace bodyctrl_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bodyctrl_msgs::msg::MotorStatusMsg>()
{
  return &::bodyctrl_msgs::msg::rosidl_typesupport_introspection_cpp::MotorStatusMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bodyctrl_msgs, msg, MotorStatusMsg)() {
  return &::bodyctrl_msgs::msg::rosidl_typesupport_introspection_cpp::MotorStatusMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
