// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msg:srv/ImuRectify.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__IMU_RECTIFY__BUILDER_HPP_
#define ROBOT_MSG__SRV__DETAIL__IMU_RECTIFY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msg/srv/detail/imu_rectify__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msg
{

namespace srv
{

namespace builder
{

class Init_ImuRectify_Request_boards_imu
{
public:
  explicit Init_ImuRectify_Request_boards_imu(::robot_msg::srv::ImuRectify_Request & msg)
  : msg_(msg)
  {}
  ::robot_msg::srv::ImuRectify_Request boards_imu(::robot_msg::srv::ImuRectify_Request::_boards_imu_type arg)
  {
    msg_.boards_imu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::srv::ImuRectify_Request msg_;
};

class Init_ImuRectify_Request_bus
{
public:
  Init_ImuRectify_Request_bus()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuRectify_Request_boards_imu bus(::robot_msg::srv::ImuRectify_Request::_bus_type arg)
  {
    msg_.bus = std::move(arg);
    return Init_ImuRectify_Request_boards_imu(msg_);
  }

private:
  ::robot_msg::srv::ImuRectify_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::srv::ImuRectify_Request>()
{
  return robot_msg::srv::builder::Init_ImuRectify_Request_bus();
}

}  // namespace robot_msg


namespace robot_msg
{

namespace srv
{

namespace builder
{

class Init_ImuRectify_Response_result
{
public:
  Init_ImuRectify_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_msg::srv::ImuRectify_Response result(::robot_msg::srv::ImuRectify_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::srv::ImuRectify_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::srv::ImuRectify_Response>()
{
  return robot_msg::srv::builder::Init_ImuRectify_Response_result();
}

}  // namespace robot_msg

#endif  // ROBOT_MSG__SRV__DETAIL__IMU_RECTIFY__BUILDER_HPP_
