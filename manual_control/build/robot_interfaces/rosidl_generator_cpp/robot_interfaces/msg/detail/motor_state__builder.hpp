// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorState_efforts
{
public:
  explicit Init_MotorState_efforts(::robot_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::MotorState efforts(::robot_interfaces::msg::MotorState::_efforts_type arg)
  {
    msg_.efforts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::MotorState msg_;
};

class Init_MotorState_velocities
{
public:
  explicit Init_MotorState_velocities(::robot_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_efforts velocities(::robot_interfaces::msg::MotorState::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_MotorState_efforts(msg_);
  }

private:
  ::robot_interfaces::msg::MotorState msg_;
};

class Init_MotorState_positions
{
public:
  explicit Init_MotorState_positions(::robot_interfaces::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_velocities positions(::robot_interfaces::msg::MotorState::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_MotorState_velocities(msg_);
  }

private:
  ::robot_interfaces::msg::MotorState msg_;
};

class Init_MotorState_header
{
public:
  Init_MotorState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_positions header(::robot_interfaces::msg::MotorState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorState_positions(msg_);
  }

private:
  ::robot_interfaces::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::MotorState>()
{
  return robot_interfaces::msg::builder::Init_MotorState_header();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
