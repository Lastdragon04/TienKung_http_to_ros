// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/MotorCanCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTOR_CAN_COMMAND__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTOR_CAN_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/motor_can_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorCanCommand_efforts
{
public:
  explicit Init_MotorCanCommand_efforts(::robot_interfaces::msg::MotorCanCommand & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::MotorCanCommand efforts(::robot_interfaces::msg::MotorCanCommand::_efforts_type arg)
  {
    msg_.efforts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::MotorCanCommand msg_;
};

class Init_MotorCanCommand_velocities
{
public:
  explicit Init_MotorCanCommand_velocities(::robot_interfaces::msg::MotorCanCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCanCommand_efforts velocities(::robot_interfaces::msg::MotorCanCommand::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_MotorCanCommand_efforts(msg_);
  }

private:
  ::robot_interfaces::msg::MotorCanCommand msg_;
};

class Init_MotorCanCommand_positions
{
public:
  explicit Init_MotorCanCommand_positions(::robot_interfaces::msg::MotorCanCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCanCommand_velocities positions(::robot_interfaces::msg::MotorCanCommand::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_MotorCanCommand_velocities(msg_);
  }

private:
  ::robot_interfaces::msg::MotorCanCommand msg_;
};

class Init_MotorCanCommand_header
{
public:
  Init_MotorCanCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCanCommand_positions header(::robot_interfaces::msg::MotorCanCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorCanCommand_positions(msg_);
  }

private:
  ::robot_interfaces::msg::MotorCanCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::MotorCanCommand>()
{
  return robot_interfaces::msg::builder::Init_MotorCanCommand_header();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTOR_CAN_COMMAND__BUILDER_HPP_
