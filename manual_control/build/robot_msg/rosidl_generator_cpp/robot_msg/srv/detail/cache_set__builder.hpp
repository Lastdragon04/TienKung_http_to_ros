// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msg:srv/CacheSet.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__CACHE_SET__BUILDER_HPP_
#define ROBOT_MSG__SRV__DETAIL__CACHE_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msg/srv/detail/cache_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msg
{

namespace srv
{

namespace builder
{

class Init_CacheSet_Request_value
{
public:
  explicit Init_CacheSet_Request_value(::robot_msg::srv::CacheSet_Request & msg)
  : msg_(msg)
  {}
  ::robot_msg::srv::CacheSet_Request value(::robot_msg::srv::CacheSet_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::srv::CacheSet_Request msg_;
};

class Init_CacheSet_Request_key
{
public:
  Init_CacheSet_Request_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CacheSet_Request_value key(::robot_msg::srv::CacheSet_Request::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_CacheSet_Request_value(msg_);
  }

private:
  ::robot_msg::srv::CacheSet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::srv::CacheSet_Request>()
{
  return robot_msg::srv::builder::Init_CacheSet_Request_key();
}

}  // namespace robot_msg


namespace robot_msg
{

namespace srv
{

namespace builder
{

class Init_CacheSet_Response_result
{
public:
  Init_CacheSet_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_msg::srv::CacheSet_Response result(::robot_msg::srv::CacheSet_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::srv::CacheSet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::srv::CacheSet_Response>()
{
  return robot_msg::srv::builder::Init_CacheSet_Response_result();
}

}  // namespace robot_msg

#endif  // ROBOT_MSG__SRV__DETAIL__CACHE_SET__BUILDER_HPP_
