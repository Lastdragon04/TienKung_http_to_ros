// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_msg:srv/CacheSet.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__CACHE_SET__TRAITS_HPP_
#define ROBOT_MSG__SRV__DETAIL__CACHE_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_msg/srv/detail/cache_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const CacheSet_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CacheSet_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CacheSet_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_msg

namespace rosidl_generator_traits
{

[[deprecated("use robot_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_msg::srv::CacheSet_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_msg::srv::CacheSet_Request & msg)
{
  return robot_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_msg::srv::CacheSet_Request>()
{
  return "robot_msg::srv::CacheSet_Request";
}

template<>
inline const char * name<robot_msg::srv::CacheSet_Request>()
{
  return "robot_msg/srv/CacheSet_Request";
}

template<>
struct has_fixed_size<robot_msg::srv::CacheSet_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_msg::srv::CacheSet_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_msg::srv::CacheSet_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const CacheSet_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CacheSet_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CacheSet_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_msg

namespace rosidl_generator_traits
{

[[deprecated("use robot_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_msg::srv::CacheSet_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_msg::srv::CacheSet_Response & msg)
{
  return robot_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_msg::srv::CacheSet_Response>()
{
  return "robot_msg::srv::CacheSet_Response";
}

template<>
inline const char * name<robot_msg::srv::CacheSet_Response>()
{
  return "robot_msg/srv/CacheSet_Response";
}

template<>
struct has_fixed_size<robot_msg::srv::CacheSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_msg::srv::CacheSet_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_msg::srv::CacheSet_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_msg::srv::CacheSet>()
{
  return "robot_msg::srv::CacheSet";
}

template<>
inline const char * name<robot_msg::srv::CacheSet>()
{
  return "robot_msg/srv/CacheSet";
}

template<>
struct has_fixed_size<robot_msg::srv::CacheSet>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_msg::srv::CacheSet_Request>::value &&
    has_fixed_size<robot_msg::srv::CacheSet_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_msg::srv::CacheSet>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_msg::srv::CacheSet_Request>::value &&
    has_bounded_size<robot_msg::srv::CacheSet_Response>::value
  >
{
};

template<>
struct is_service<robot_msg::srv::CacheSet>
  : std::true_type
{
};

template<>
struct is_service_request<robot_msg::srv::CacheSet_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_msg::srv::CacheSet_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MSG__SRV__DETAIL__CACHE_SET__TRAITS_HPP_
