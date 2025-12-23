// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/ImuData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__IMU_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/imu_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_ImuData_angle_z
{
public:
  explicit Init_ImuData_angle_z(::robot_interfaces::msg::ImuData & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::ImuData angle_z(::robot_interfaces::msg::ImuData::_angle_z_type arg)
  {
    msg_.angle_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::ImuData msg_;
};

class Init_ImuData_angle_y
{
public:
  explicit Init_ImuData_angle_y(::robot_interfaces::msg::ImuData & msg)
  : msg_(msg)
  {}
  Init_ImuData_angle_z angle_y(::robot_interfaces::msg::ImuData::_angle_y_type arg)
  {
    msg_.angle_y = std::move(arg);
    return Init_ImuData_angle_z(msg_);
  }

private:
  ::robot_interfaces::msg::ImuData msg_;
};

class Init_ImuData_angle_x
{
public:
  Init_ImuData_angle_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuData_angle_y angle_x(::robot_interfaces::msg::ImuData::_angle_x_type arg)
  {
    msg_.angle_x = std::move(arg);
    return Init_ImuData_angle_y(msg_);
  }

private:
  ::robot_interfaces::msg::ImuData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::ImuData>()
{
  return robot_interfaces::msg::builder::Init_ImuData_angle_x();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
