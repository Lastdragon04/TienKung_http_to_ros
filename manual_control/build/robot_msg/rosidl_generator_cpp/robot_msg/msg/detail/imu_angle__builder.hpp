// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msg:msg/ImuAngle.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__IMU_ANGLE__BUILDER_HPP_
#define ROBOT_MSG__MSG__DETAIL__IMU_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msg/msg/detail/imu_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msg
{

namespace msg
{

namespace builder
{

class Init_ImuAngle_angle_z
{
public:
  explicit Init_ImuAngle_angle_z(::robot_msg::msg::ImuAngle & msg)
  : msg_(msg)
  {}
  ::robot_msg::msg::ImuAngle angle_z(::robot_msg::msg::ImuAngle::_angle_z_type arg)
  {
    msg_.angle_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::msg::ImuAngle msg_;
};

class Init_ImuAngle_angle_y
{
public:
  explicit Init_ImuAngle_angle_y(::robot_msg::msg::ImuAngle & msg)
  : msg_(msg)
  {}
  Init_ImuAngle_angle_z angle_y(::robot_msg::msg::ImuAngle::_angle_y_type arg)
  {
    msg_.angle_y = std::move(arg);
    return Init_ImuAngle_angle_z(msg_);
  }

private:
  ::robot_msg::msg::ImuAngle msg_;
};

class Init_ImuAngle_angle_x
{
public:
  explicit Init_ImuAngle_angle_x(::robot_msg::msg::ImuAngle & msg)
  : msg_(msg)
  {}
  Init_ImuAngle_angle_y angle_x(::robot_msg::msg::ImuAngle::_angle_x_type arg)
  {
    msg_.angle_x = std::move(arg);
    return Init_ImuAngle_angle_y(msg_);
  }

private:
  ::robot_msg::msg::ImuAngle msg_;
};

class Init_ImuAngle_boards_imu
{
public:
  explicit Init_ImuAngle_boards_imu(::robot_msg::msg::ImuAngle & msg)
  : msg_(msg)
  {}
  Init_ImuAngle_angle_x boards_imu(::robot_msg::msg::ImuAngle::_boards_imu_type arg)
  {
    msg_.boards_imu = std::move(arg);
    return Init_ImuAngle_angle_x(msg_);
  }

private:
  ::robot_msg::msg::ImuAngle msg_;
};

class Init_ImuAngle_bus
{
public:
  Init_ImuAngle_bus()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuAngle_boards_imu bus(::robot_msg::msg::ImuAngle::_bus_type arg)
  {
    msg_.bus = std::move(arg);
    return Init_ImuAngle_boards_imu(msg_);
  }

private:
  ::robot_msg::msg::ImuAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::msg::ImuAngle>()
{
  return robot_msg::msg::builder::Init_ImuAngle_bus();
}

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__IMU_ANGLE__BUILDER_HPP_
