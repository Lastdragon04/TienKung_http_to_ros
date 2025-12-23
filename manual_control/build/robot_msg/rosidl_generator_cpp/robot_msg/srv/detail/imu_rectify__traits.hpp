// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_msg:srv/ImuRectify.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__IMU_RECTIFY__TRAITS_HPP_
#define ROBOT_MSG__SRV__DETAIL__IMU_RECTIFY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_msg/srv/detail/imu_rectify__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImuRectify_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: bus
  {
    out << "bus: ";
    rosidl_generator_traits::value_to_yaml(msg.bus, out);
    out << ", ";
  }

  // member: boards_imu
  {
    out << "boards_imu: ";
    rosidl_generator_traits::value_to_yaml(msg.boards_imu, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuRectify_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus: ";
    rosidl_generator_traits::value_to_yaml(msg.bus, out);
    out << "\n";
  }

  // member: boards_imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boards_imu: ";
    rosidl_generator_traits::value_to_yaml(msg.boards_imu, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuRectify_Request & msg, bool use_flow_style = false)
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
  const robot_msg::srv::ImuRectify_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_msg::srv::ImuRectify_Request & msg)
{
  return robot_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_msg::srv::ImuRectify_Request>()
{
  return "robot_msg::srv::ImuRectify_Request";
}

template<>
inline const char * name<robot_msg::srv::ImuRectify_Request>()
{
  return "robot_msg/srv/ImuRectify_Request";
}

template<>
struct has_fixed_size<robot_msg::srv::ImuRectify_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_msg::srv::ImuRectify_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_msg::srv::ImuRectify_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImuRectify_Response & msg,
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
  const ImuRectify_Response & msg,
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

inline std::string to_yaml(const ImuRectify_Response & msg, bool use_flow_style = false)
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
  const robot_msg::srv::ImuRectify_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_msg::srv::ImuRectify_Response & msg)
{
  return robot_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_msg::srv::ImuRectify_Response>()
{
  return "robot_msg::srv::ImuRectify_Response";
}

template<>
inline const char * name<robot_msg::srv::ImuRectify_Response>()
{
  return "robot_msg/srv/ImuRectify_Response";
}

template<>
struct has_fixed_size<robot_msg::srv::ImuRectify_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_msg::srv::ImuRectify_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_msg::srv::ImuRectify_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_msg::srv::ImuRectify>()
{
  return "robot_msg::srv::ImuRectify";
}

template<>
inline const char * name<robot_msg::srv::ImuRectify>()
{
  return "robot_msg/srv/ImuRectify";
}

template<>
struct has_fixed_size<robot_msg::srv::ImuRectify>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_msg::srv::ImuRectify_Request>::value &&
    has_fixed_size<robot_msg::srv::ImuRectify_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_msg::srv::ImuRectify>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_msg::srv::ImuRectify_Request>::value &&
    has_bounded_size<robot_msg::srv::ImuRectify_Response>::value
  >
{
};

template<>
struct is_service<robot_msg::srv::ImuRectify>
  : std::true_type
{
};

template<>
struct is_service_request<robot_msg::srv::ImuRectify_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_msg::srv::ImuRectify_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MSG__SRV__DETAIL__IMU_RECTIFY__TRAITS_HPP_
