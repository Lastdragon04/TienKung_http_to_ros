// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:srv/CanConfigCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__CAN_CONFIG_COMMAND__TRAITS_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__CAN_CONFIG_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/srv/detail/can_config_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CanConfigCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: opcode
  {
    out << "opcode: ";
    rosidl_generator_traits::value_to_yaml(msg.opcode, out);
    out << ", ";
  }

  // member: device
  {
    out << "device: ";
    rosidl_generator_traits::value_to_yaml(msg.device, out);
    out << ", ";
  }

  // member: data1
  {
    if (msg.data1.size() == 0) {
      out << "data1: []";
    } else {
      out << "data1: [";
      size_t pending_items = msg.data1.size();
      for (auto item : msg.data1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: data2
  {
    if (msg.data2.size() == 0) {
      out << "data2: []";
    } else {
      out << "data2: [";
      size_t pending_items = msg.data2.size();
      for (auto item : msg.data2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: device_names
  {
    if (msg.device_names.size() == 0) {
      out << "device_names: []";
    } else {
      out << "device_names: [";
      size_t pending_items = msg.device_names.size();
      for (auto item : msg.device_names) {
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
  const CanConfigCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: opcode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opcode: ";
    rosidl_generator_traits::value_to_yaml(msg.opcode, out);
    out << "\n";
  }

  // member: device
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device: ";
    rosidl_generator_traits::value_to_yaml(msg.device, out);
    out << "\n";
  }

  // member: data1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data1.size() == 0) {
      out << "data1: []\n";
    } else {
      out << "data1:\n";
      for (auto item : msg.data1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: data2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data2.size() == 0) {
      out << "data2: []\n";
    } else {
      out << "data2:\n";
      for (auto item : msg.data2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: device_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.device_names.size() == 0) {
      out << "device_names: []\n";
    } else {
      out << "device_names:\n";
      for (auto item : msg.device_names) {
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

inline std::string to_yaml(const CanConfigCommand_Request & msg, bool use_flow_style = false)
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
  const robot_interfaces::srv::CanConfigCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::srv::CanConfigCommand_Request & msg)
{
  return robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::srv::CanConfigCommand_Request>()
{
  return "robot_interfaces::srv::CanConfigCommand_Request";
}

template<>
inline const char * name<robot_interfaces::srv::CanConfigCommand_Request>()
{
  return "robot_interfaces/srv/CanConfigCommand_Request";
}

template<>
struct has_fixed_size<robot_interfaces::srv::CanConfigCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_interfaces::srv::CanConfigCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_interfaces::srv::CanConfigCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CanConfigCommand_Response & msg,
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
  const CanConfigCommand_Response & msg,
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

inline std::string to_yaml(const CanConfigCommand_Response & msg, bool use_flow_style = false)
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
  const robot_interfaces::srv::CanConfigCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::srv::CanConfigCommand_Response & msg)
{
  return robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::srv::CanConfigCommand_Response>()
{
  return "robot_interfaces::srv::CanConfigCommand_Response";
}

template<>
inline const char * name<robot_interfaces::srv::CanConfigCommand_Response>()
{
  return "robot_interfaces/srv/CanConfigCommand_Response";
}

template<>
struct has_fixed_size<robot_interfaces::srv::CanConfigCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::srv::CanConfigCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::srv::CanConfigCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_interfaces::srv::CanConfigCommand>()
{
  return "robot_interfaces::srv::CanConfigCommand";
}

template<>
inline const char * name<robot_interfaces::srv::CanConfigCommand>()
{
  return "robot_interfaces/srv/CanConfigCommand";
}

template<>
struct has_fixed_size<robot_interfaces::srv::CanConfigCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_interfaces::srv::CanConfigCommand_Request>::value &&
    has_fixed_size<robot_interfaces::srv::CanConfigCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_interfaces::srv::CanConfigCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_interfaces::srv::CanConfigCommand_Request>::value &&
    has_bounded_size<robot_interfaces::srv::CanConfigCommand_Response>::value
  >
{
};

template<>
struct is_service<robot_interfaces::srv::CanConfigCommand>
  : std::true_type
{
};

template<>
struct is_service_request<robot_interfaces::srv::CanConfigCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_interfaces::srv::CanConfigCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__SRV__DETAIL__CAN_CONFIG_COMMAND__TRAITS_HPP_
