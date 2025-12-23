// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msg:msg/ImuGyro.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__IMU_GYRO__BUILDER_HPP_
#define ROBOT_MSG__MSG__DETAIL__IMU_GYRO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msg/msg/detail/imu_gyro__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msg
{

namespace msg
{

namespace builder
{

class Init_ImuGyro_gyro_z
{
public:
  explicit Init_ImuGyro_gyro_z(::robot_msg::msg::ImuGyro & msg)
  : msg_(msg)
  {}
  ::robot_msg::msg::ImuGyro gyro_z(::robot_msg::msg::ImuGyro::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::msg::ImuGyro msg_;
};

class Init_ImuGyro_gyro_y
{
public:
  explicit Init_ImuGyro_gyro_y(::robot_msg::msg::ImuGyro & msg)
  : msg_(msg)
  {}
  Init_ImuGyro_gyro_z gyro_y(::robot_msg::msg::ImuGyro::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_ImuGyro_gyro_z(msg_);
  }

private:
  ::robot_msg::msg::ImuGyro msg_;
};

class Init_ImuGyro_gyro_x
{
public:
  explicit Init_ImuGyro_gyro_x(::robot_msg::msg::ImuGyro & msg)
  : msg_(msg)
  {}
  Init_ImuGyro_gyro_y gyro_x(::robot_msg::msg::ImuGyro::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_ImuGyro_gyro_y(msg_);
  }

private:
  ::robot_msg::msg::ImuGyro msg_;
};

class Init_ImuGyro_boards_imu
{
public:
  explicit Init_ImuGyro_boards_imu(::robot_msg::msg::ImuGyro & msg)
  : msg_(msg)
  {}
  Init_ImuGyro_gyro_x boards_imu(::robot_msg::msg::ImuGyro::_boards_imu_type arg)
  {
    msg_.boards_imu = std::move(arg);
    return Init_ImuGyro_gyro_x(msg_);
  }

private:
  ::robot_msg::msg::ImuGyro msg_;
};

class Init_ImuGyro_bus
{
public:
  Init_ImuGyro_bus()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuGyro_boards_imu bus(::robot_msg::msg::ImuGyro::_bus_type arg)
  {
    msg_.bus = std::move(arg);
    return Init_ImuGyro_boards_imu(msg_);
  }

private:
  ::robot_msg::msg::ImuGyro msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::msg::ImuGyro>()
{
  return robot_msg::msg::builder::Init_ImuGyro_bus();
}

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__IMU_GYRO__BUILDER_HPP_
