// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:srv/JointSensorNames.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__JOINT_SENSOR_NAMES__BUILDER_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__JOINT_SENSOR_NAMES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/srv/detail/joint_sensor_names__struct.hpp"
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
auto build<::robot_interfaces::srv::JointSensorNames_Request>()
{
  return ::robot_interfaces::srv::JointSensorNames_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_JointSensorNames_Response_sensor_names
{
public:
  explicit Init_JointSensorNames_Response_sensor_names(::robot_interfaces::srv::JointSensorNames_Response & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::srv::JointSensorNames_Response sensor_names(::robot_interfaces::srv::JointSensorNames_Response::_sensor_names_type arg)
  {
    msg_.sensor_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::srv::JointSensorNames_Response msg_;
};

class Init_JointSensorNames_Response_joint_names
{
public:
  Init_JointSensorNames_Response_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointSensorNames_Response_sensor_names joint_names(::robot_interfaces::srv::JointSensorNames_Response::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_JointSensorNames_Response_sensor_names(msg_);
  }

private:
  ::robot_interfaces::srv::JointSensorNames_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::JointSensorNames_Response>()
{
  return robot_interfaces::srv::builder::Init_JointSensorNames_Response_joint_names();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__SRV__DETAIL__JOINT_SENSOR_NAMES__BUILDER_HPP_
