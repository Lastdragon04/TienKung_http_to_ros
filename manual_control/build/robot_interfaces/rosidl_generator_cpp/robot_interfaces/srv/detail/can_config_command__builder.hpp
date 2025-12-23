// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:srv/CanConfigCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__CAN_CONFIG_COMMAND__BUILDER_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__CAN_CONFIG_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/srv/detail/can_config_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_CanConfigCommand_Request_device_names
{
public:
  explicit Init_CanConfigCommand_Request_device_names(::robot_interfaces::srv::CanConfigCommand_Request & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::srv::CanConfigCommand_Request device_names(::robot_interfaces::srv::CanConfigCommand_Request::_device_names_type arg)
  {
    msg_.device_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::srv::CanConfigCommand_Request msg_;
};

class Init_CanConfigCommand_Request_data2
{
public:
  explicit Init_CanConfigCommand_Request_data2(::robot_interfaces::srv::CanConfigCommand_Request & msg)
  : msg_(msg)
  {}
  Init_CanConfigCommand_Request_device_names data2(::robot_interfaces::srv::CanConfigCommand_Request::_data2_type arg)
  {
    msg_.data2 = std::move(arg);
    return Init_CanConfigCommand_Request_device_names(msg_);
  }

private:
  ::robot_interfaces::srv::CanConfigCommand_Request msg_;
};

class Init_CanConfigCommand_Request_data1
{
public:
  explicit Init_CanConfigCommand_Request_data1(::robot_interfaces::srv::CanConfigCommand_Request & msg)
  : msg_(msg)
  {}
  Init_CanConfigCommand_Request_data2 data1(::robot_interfaces::srv::CanConfigCommand_Request::_data1_type arg)
  {
    msg_.data1 = std::move(arg);
    return Init_CanConfigCommand_Request_data2(msg_);
  }

private:
  ::robot_interfaces::srv::CanConfigCommand_Request msg_;
};

class Init_CanConfigCommand_Request_device
{
public:
  explicit Init_CanConfigCommand_Request_device(::robot_interfaces::srv::CanConfigCommand_Request & msg)
  : msg_(msg)
  {}
  Init_CanConfigCommand_Request_data1 device(::robot_interfaces::srv::CanConfigCommand_Request::_device_type arg)
  {
    msg_.device = std::move(arg);
    return Init_CanConfigCommand_Request_data1(msg_);
  }

private:
  ::robot_interfaces::srv::CanConfigCommand_Request msg_;
};

class Init_CanConfigCommand_Request_opcode
{
public:
  Init_CanConfigCommand_Request_opcode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanConfigCommand_Request_device opcode(::robot_interfaces::srv::CanConfigCommand_Request::_opcode_type arg)
  {
    msg_.opcode = std::move(arg);
    return Init_CanConfigCommand_Request_device(msg_);
  }

private:
  ::robot_interfaces::srv::CanConfigCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::CanConfigCommand_Request>()
{
  return robot_interfaces::srv::builder::Init_CanConfigCommand_Request_opcode();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_CanConfigCommand_Response_result
{
public:
  Init_CanConfigCommand_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::srv::CanConfigCommand_Response result(::robot_interfaces::srv::CanConfigCommand_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::srv::CanConfigCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::CanConfigCommand_Response>()
{
  return robot_interfaces::srv::builder::Init_CanConfigCommand_Response_result();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__SRV__DETAIL__CAN_CONFIG_COMMAND__BUILDER_HPP_
