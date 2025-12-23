// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msg:msg/ImuAcc.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__IMU_ACC__BUILDER_HPP_
#define ROBOT_MSG__MSG__DETAIL__IMU_ACC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msg/msg/detail/imu_acc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msg
{

namespace msg
{

namespace builder
{

class Init_ImuAcc_acc_z
{
public:
  explicit Init_ImuAcc_acc_z(::robot_msg::msg::ImuAcc & msg)
  : msg_(msg)
  {}
  ::robot_msg::msg::ImuAcc acc_z(::robot_msg::msg::ImuAcc::_acc_z_type arg)
  {
    msg_.acc_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::msg::ImuAcc msg_;
};

class Init_ImuAcc_acc_y
{
public:
  explicit Init_ImuAcc_acc_y(::robot_msg::msg::ImuAcc & msg)
  : msg_(msg)
  {}
  Init_ImuAcc_acc_z acc_y(::robot_msg::msg::ImuAcc::_acc_y_type arg)
  {
    msg_.acc_y = std::move(arg);
    return Init_ImuAcc_acc_z(msg_);
  }

private:
  ::robot_msg::msg::ImuAcc msg_;
};

class Init_ImuAcc_acc_x
{
public:
  explicit Init_ImuAcc_acc_x(::robot_msg::msg::ImuAcc & msg)
  : msg_(msg)
  {}
  Init_ImuAcc_acc_y acc_x(::robot_msg::msg::ImuAcc::_acc_x_type arg)
  {
    msg_.acc_x = std::move(arg);
    return Init_ImuAcc_acc_y(msg_);
  }

private:
  ::robot_msg::msg::ImuAcc msg_;
};

class Init_ImuAcc_boards_imu
{
public:
  explicit Init_ImuAcc_boards_imu(::robot_msg::msg::ImuAcc & msg)
  : msg_(msg)
  {}
  Init_ImuAcc_acc_x boards_imu(::robot_msg::msg::ImuAcc::_boards_imu_type arg)
  {
    msg_.boards_imu = std::move(arg);
    return Init_ImuAcc_acc_x(msg_);
  }

private:
  ::robot_msg::msg::ImuAcc msg_;
};

class Init_ImuAcc_bus
{
public:
  Init_ImuAcc_bus()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuAcc_boards_imu bus(::robot_msg::msg::ImuAcc::_bus_type arg)
  {
    msg_.bus = std::move(arg);
    return Init_ImuAcc_boards_imu(msg_);
  }

private:
  ::robot_msg::msg::ImuAcc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::msg::ImuAcc>()
{
  return robot_msg::msg::builder::Init_ImuAcc_bus();
}

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__IMU_ACC__BUILDER_HPP_
