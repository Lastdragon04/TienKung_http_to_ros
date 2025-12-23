// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msg:msg/MotorDriverMessage.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_MESSAGE__BUILDER_HPP_
#define ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msg/msg/detail/motor_driver_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msg
{

namespace msg
{

namespace builder
{

class Init_MotorDriverMessage_data
{
public:
  explicit Init_MotorDriverMessage_data(::robot_msg::msg::MotorDriverMessage & msg)
  : msg_(msg)
  {}
  ::robot_msg::msg::MotorDriverMessage data(::robot_msg::msg::MotorDriverMessage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::msg::MotorDriverMessage msg_;
};

class Init_MotorDriverMessage_header
{
public:
  Init_MotorDriverMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorDriverMessage_data header(::robot_msg::msg::MotorDriverMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorDriverMessage_data(msg_);
  }

private:
  ::robot_msg::msg::MotorDriverMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::msg::MotorDriverMessage>()
{
  return robot_msg::msg::builder::Init_MotorDriverMessage_header();
}

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_MESSAGE__BUILDER_HPP_
