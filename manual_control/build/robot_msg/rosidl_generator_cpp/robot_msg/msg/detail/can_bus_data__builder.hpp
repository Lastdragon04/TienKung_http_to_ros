// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msg:msg/CanBusData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__CAN_BUS_DATA__BUILDER_HPP_
#define ROBOT_MSG__MSG__DETAIL__CAN_BUS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msg/msg/detail/can_bus_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msg
{

namespace msg
{

namespace builder
{

class Init_CanBusData_bus
{
public:
  explicit Init_CanBusData_bus(::robot_msg::msg::CanBusData & msg)
  : msg_(msg)
  {}
  ::robot_msg::msg::CanBusData bus(::robot_msg::msg::CanBusData::_bus_type arg)
  {
    msg_.bus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::msg::CanBusData msg_;
};

class Init_CanBusData_can_data
{
public:
  explicit Init_CanBusData_can_data(::robot_msg::msg::CanBusData & msg)
  : msg_(msg)
  {}
  Init_CanBusData_bus can_data(::robot_msg::msg::CanBusData::_can_data_type arg)
  {
    msg_.can_data = std::move(arg);
    return Init_CanBusData_bus(msg_);
  }

private:
  ::robot_msg::msg::CanBusData msg_;
};

class Init_CanBusData_can_id
{
public:
  Init_CanBusData_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanBusData_can_data can_id(::robot_msg::msg::CanBusData::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_CanBusData_can_data(msg_);
  }

private:
  ::robot_msg::msg::CanBusData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::msg::CanBusData>()
{
  return robot_msg::msg::builder::Init_CanBusData_can_id();
}

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__CAN_BUS_DATA__BUILDER_HPP_
