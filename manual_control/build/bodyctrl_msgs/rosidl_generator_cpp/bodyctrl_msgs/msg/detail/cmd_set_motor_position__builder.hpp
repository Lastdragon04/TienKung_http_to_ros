// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/CmdSetMotorPosition.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_POSITION__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/cmd_set_motor_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_CmdSetMotorPosition_cmds
{
public:
  explicit Init_CmdSetMotorPosition_cmds(::bodyctrl_msgs::msg::CmdSetMotorPosition & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::CmdSetMotorPosition cmds(::bodyctrl_msgs::msg::CmdSetMotorPosition::_cmds_type arg)
  {
    msg_.cmds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetMotorPosition msg_;
};

class Init_CmdSetMotorPosition_header
{
public:
  Init_CmdSetMotorPosition_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdSetMotorPosition_cmds header(::bodyctrl_msgs::msg::CmdSetMotorPosition::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CmdSetMotorPosition_cmds(msg_);
  }

private:
  ::bodyctrl_msgs::msg::CmdSetMotorPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::CmdSetMotorPosition>()
{
  return bodyctrl_msgs::msg::builder::Init_CmdSetMotorPosition_header();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__CMD_SET_MOTOR_POSITION__BUILDER_HPP_
