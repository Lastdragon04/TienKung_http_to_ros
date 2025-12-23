// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msg:srv/CacheGet.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__CACHE_GET__BUILDER_HPP_
#define ROBOT_MSG__SRV__DETAIL__CACHE_GET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msg/srv/detail/cache_get__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msg
{

namespace srv
{

namespace builder
{

class Init_CacheGet_Request_key
{
public:
  Init_CacheGet_Request_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_msg::srv::CacheGet_Request key(::robot_msg::srv::CacheGet_Request::_key_type arg)
  {
    msg_.key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::srv::CacheGet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::srv::CacheGet_Request>()
{
  return robot_msg::srv::builder::Init_CacheGet_Request_key();
}

}  // namespace robot_msg


namespace robot_msg
{

namespace srv
{

namespace builder
{

class Init_CacheGet_Response_value
{
public:
  Init_CacheGet_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_msg::srv::CacheGet_Response value(::robot_msg::srv::CacheGet_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::srv::CacheGet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::srv::CacheGet_Response>()
{
  return robot_msg::srv::builder::Init_CacheGet_Response_value();
}

}  // namespace robot_msg

#endif  // ROBOT_MSG__SRV__DETAIL__CACHE_GET__BUILDER_HPP_
