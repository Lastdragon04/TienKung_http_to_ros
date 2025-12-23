// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bodyctrl_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bodyctrl_msgs/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bodyctrl_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_error
{
public:
  explicit Init_MotorStatus_error(::bodyctrl_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::bodyctrl_msgs::msg::MotorStatus error(::bodyctrl_msgs::msg::MotorStatus::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_temperature
{
public:
  explicit Init_MotorStatus_temperature(::bodyctrl_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_error temperature(::bodyctrl_msgs::msg::MotorStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_MotorStatus_error(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_current
{
public:
  explicit Init_MotorStatus_current(::bodyctrl_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_temperature current(::bodyctrl_msgs::msg::MotorStatus::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_MotorStatus_temperature(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_speed
{
public:
  explicit Init_MotorStatus_speed(::bodyctrl_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_current speed(::bodyctrl_msgs::msg::MotorStatus::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorStatus_current(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_pos
{
public:
  explicit Init_MotorStatus_pos(::bodyctrl_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_speed pos(::bodyctrl_msgs::msg::MotorStatus::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_MotorStatus_speed(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_name
{
public:
  Init_MotorStatus_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_pos name(::bodyctrl_msgs::msg::MotorStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MotorStatus_pos(msg_);
  }

private:
  ::bodyctrl_msgs::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bodyctrl_msgs::msg::MotorStatus>()
{
  return bodyctrl_msgs::msg::builder::Init_MotorStatus_name();
}

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
