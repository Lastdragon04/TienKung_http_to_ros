// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:srv/JointSensorNames.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__JOINT_SENSOR_NAMES__TRAITS_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__JOINT_SENSOR_NAMES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/srv/detail/joint_sensor_names__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointSensorNames_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointSensorNames_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointSensorNames_Request & msg, bool use_flow_style = false)
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

}  // namespace robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces::srv::JointSensorNames_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::srv::JointSensorNames_Request & msg)
{
  return robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::srv::JointSensorNames_Request>()
{
  return "robot_interfaces::srv::JointSensorNames_Request";
}

template<>
inline const char * name<robot_interfaces::srv::JointSensorNames_Request>()
{
  return "robot_interfaces/srv/JointSensorNames_Request";
}

template<>
struct has_fixed_size<robot_interfaces::srv::JointSensorNames_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::srv::JointSensorNames_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::srv::JointSensorNames_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const JointSensorNames_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_names
  {
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []";
    } else {
      out << "joint_names: [";
      size_t pending_items = msg.joint_names.size();
      for (auto item : msg.joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sensor_names
  {
    if (msg.sensor_names.size() == 0) {
      out << "sensor_names: []";
    } else {
      out << "sensor_names: [";
      size_t pending_items = msg.sensor_names.size();
      for (auto item : msg.sensor_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointSensorNames_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sensor_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_names.size() == 0) {
      out << "sensor_names: []\n";
    } else {
      out << "sensor_names:\n";
      for (auto item : msg.sensor_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointSensorNames_Response & msg, bool use_flow_style = false)
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

}  // namespace robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces::srv::JointSensorNames_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::srv::JointSensorNames_Response & msg)
{
  return robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::srv::JointSensorNames_Response>()
{
  return "robot_interfaces::srv::JointSensorNames_Response";
}

template<>
inline const char * name<robot_interfaces::srv::JointSensorNames_Response>()
{
  return "robot_interfaces/srv/JointSensorNames_Response";
}

template<>
struct has_fixed_size<robot_interfaces::srv::JointSensorNames_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_interfaces::srv::JointSensorNames_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_interfaces::srv::JointSensorNames_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_interfaces::srv::JointSensorNames>()
{
  return "robot_interfaces::srv::JointSensorNames";
}

template<>
inline const char * name<robot_interfaces::srv::JointSensorNames>()
{
  return "robot_interfaces/srv/JointSensorNames";
}

template<>
struct has_fixed_size<robot_interfaces::srv::JointSensorNames>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_interfaces::srv::JointSensorNames_Request>::value &&
    has_fixed_size<robot_interfaces::srv::JointSensorNames_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_interfaces::srv::JointSensorNames>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_interfaces::srv::JointSensorNames_Request>::value &&
    has_bounded_size<robot_interfaces::srv::JointSensorNames_Response>::value
  >
{
};

template<>
struct is_service<robot_interfaces::srv::JointSensorNames>
  : std::true_type
{
};

template<>
struct is_service_request<robot_interfaces::srv::JointSensorNames_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_interfaces::srv::JointSensorNames_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__SRV__DETAIL__JOINT_SENSOR_NAMES__TRAITS_HPP_
