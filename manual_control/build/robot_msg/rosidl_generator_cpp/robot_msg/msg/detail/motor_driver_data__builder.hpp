// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msg:msg/MotorDriverData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__BUILDER_HPP_
#define ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msg/msg/detail/motor_driver_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msg
{

namespace msg
{

namespace builder
{

class Init_MotorDriverData_bus
{
public:
  explicit Init_MotorDriverData_bus(::robot_msg::msg::MotorDriverData & msg)
  : msg_(msg)
  {}
  ::robot_msg::msg::MotorDriverData bus(::robot_msg::msg::MotorDriverData::_bus_type arg)
  {
    msg_.bus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::msg::MotorDriverData msg_;
};

class Init_MotorDriverData_depend
{
public:
  explicit Init_MotorDriverData_depend(::robot_msg::msg::MotorDriverData & msg)
  : msg_(msg)
  {}
  Init_MotorDriverData_bus depend(::robot_msg::msg::MotorDriverData::_depend_type arg)
  {
    msg_.depend = std::move(arg);
    return Init_MotorDriverData_bus(msg_);
  }

private:
  ::robot_msg::msg::MotorDriverData msg_;
};

class Init_MotorDriverData_boards_motor
{
public:
  explicit Init_MotorDriverData_boards_motor(::robot_msg::msg::MotorDriverData & msg)
  : msg_(msg)
  {}
  Init_MotorDriverData_depend boards_motor(::robot_msg::msg::MotorDriverData::_boards_motor_type arg)
  {
    msg_.boards_motor = std::move(arg);
    return Init_MotorDriverData_depend(msg_);
  }

private:
  ::robot_msg::msg::MotorDriverData msg_;
};

class Init_MotorDriverData_protocol_type
{
public:
  explicit Init_MotorDriverData_protocol_type(::robot_msg::msg::MotorDriverData & msg)
  : msg_(msg)
  {}
  Init_MotorDriverData_boards_motor protocol_type(::robot_msg::msg::MotorDriverData::_protocol_type_type arg)
  {
    msg_.protocol_type = std::move(arg);
    return Init_MotorDriverData_boards_motor(msg_);
  }

private:
  ::robot_msg::msg::MotorDriverData msg_;
};

class Init_MotorDriverData_type
{
public:
  explicit Init_MotorDriverData_type(::robot_msg::msg::MotorDriverData & msg)
  : msg_(msg)
  {}
  Init_MotorDriverData_protocol_type type(::robot_msg::msg::MotorDriverData::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_MotorDriverData_protocol_type(msg_);
  }

private:
  ::robot_msg::msg::MotorDriverData msg_;
};

class Init_MotorDriverData_speed
{
public:
  explicit Init_MotorDriverData_speed(::robot_msg::msg::MotorDriverData & msg)
  : msg_(msg)
  {}
  Init_MotorDriverData_type speed(::robot_msg::msg::MotorDriverData::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorDriverData_type(msg_);
  }

private:
  ::robot_msg::msg::MotorDriverData msg_;
};

class Init_MotorDriverData_value
{
public:
  explicit Init_MotorDriverData_value(::robot_msg::msg::MotorDriverData & msg)
  : msg_(msg)
  {}
  Init_MotorDriverData_speed value(::robot_msg::msg::MotorDriverData::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_MotorDriverData_speed(msg_);
  }

private:
  ::robot_msg::msg::MotorDriverData msg_;
};

class Init_MotorDriverData_canid
{
public:
  Init_MotorDriverData_canid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorDriverData_value canid(::robot_msg::msg::MotorDriverData::_canid_type arg)
  {
    msg_.canid = std::move(arg);
    return Init_MotorDriverData_value(msg_);
  }

private:
  ::robot_msg::msg::MotorDriverData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::msg::MotorDriverData>()
{
  return robot_msg::msg::builder::Init_MotorDriverData_canid();
}

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__BUILDER_HPP_
