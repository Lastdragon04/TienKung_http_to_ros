// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:srv/MotorOffset.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__MOTOR_OFFSET__BUILDER_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__MOTOR_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/srv/detail/motor_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::MotorOffset_Request>()
{
  return ::robot_interfaces::srv::MotorOffset_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::MotorOffset_Response>()
{
  return ::robot_interfaces::srv::MotorOffset_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__SRV__DETAIL__MOTOR_OFFSET__BUILDER_HPP_
