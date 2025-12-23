// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msg:msg/SerialData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__SERIAL_DATA__BUILDER_HPP_
#define ROBOT_MSG__MSG__DETAIL__SERIAL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msg/msg/detail/serial_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msg
{

namespace msg
{

namespace builder
{

class Init_SerialData_data
{
public:
  Init_SerialData_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_msg::msg::SerialData data(::robot_msg::msg::SerialData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::msg::SerialData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::msg::SerialData>()
{
  return robot_msg::msg::builder::Init_SerialData_data();
}

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__SERIAL_DATA__BUILDER_HPP_
