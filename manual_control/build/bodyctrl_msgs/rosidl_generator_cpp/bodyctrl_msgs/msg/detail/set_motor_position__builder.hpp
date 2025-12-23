// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/SetMotorPosition.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_POSITION__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/set_motor_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_SetMotorPosition_cur
{
public:
  explicit Init_SetMotorPosition_cur(::bodyctrl_msgs::msg::SetMotorPosition & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::SetMotorPosition cur(::bodyctrl_msgs::msg::SetMotorPosition::_cur_type arg)
  {
    msg_.cur = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorPosition msg_;
};

class Init_SetMotorPosition_spd
{
public:
  explicit Init_SetMotorPosition_spd(::bodyctrl_msgs::msg::SetMotorPosition & msg)
  : msg_(msg)
  {}
  Init_SetMotorPosition_cur spd(::bodyctrl_msgs::msg::SetMotorPosition::_spd_type arg)
  {
    msg_.spd = std::move(arg);
    return Init_SetMotorPosition_cur(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorPosition msg_;
};

class Init_SetMotorPosition_pos
{
public:
  explicit Init_SetMotorPosition_pos(::bodyctrl_msgs::msg::SetMotorPosition & msg)
  : msg_(msg)
  {}
  Init_SetMotorPosition_spd pos(::bodyctrl_msgs::msg::SetMotorPosition::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_SetMotorPosition_spd(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorPosition msg_;
};

class Init_SetMotorPosition_name
{
public:
  Init_SetMotorPosition_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotorPosition_pos name(::bodyctrl_msgs::msg::SetMotorPosition::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SetMotorPosition_pos(msg_);
  }

private:
  ::bodyctrl_msgs::msg::SetMotorPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::SetMotorPosition>()
{
  return bodyctrl_msgs::msg::builder::Init_SetMotorPosition_name();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_POSITION__BUILDER_HPP_
