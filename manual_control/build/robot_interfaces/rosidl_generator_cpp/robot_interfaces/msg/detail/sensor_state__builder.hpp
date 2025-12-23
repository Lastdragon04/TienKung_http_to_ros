// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/sensor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorState_touch
{
public:
  explicit Init_SensorState_touch(::robot_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::SensorState touch(::robot_interfaces::msg::SensorState::_touch_type arg)
  {
    msg_.touch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::SensorState msg_;
};

class Init_SensorState_imu
{
public:
  explicit Init_SensorState_imu(::robot_interfaces::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_touch imu(::robot_interfaces::msg::SensorState::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_SensorState_touch(msg_);
  }

private:
  ::robot_interfaces::msg::SensorState msg_;
};

class Init_SensorState_header
{
public:
  Init_SensorState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorState_imu header(::robot_interfaces::msg::SensorState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorState_imu(msg_);
  }

private:
  ::robot_interfaces::msg::SensorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::SensorState>()
{
  return robot_interfaces::msg::builder::Init_SensorState_header();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_
