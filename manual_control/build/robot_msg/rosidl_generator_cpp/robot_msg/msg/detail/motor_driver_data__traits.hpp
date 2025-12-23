// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_msg:msg/MotorDriverData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__TRAITS_HPP_
#define ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_msg/msg/detail/motor_driver_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorDriverData & msg,
  std::ostream & out)
{
  out << "{";
  // member: canid
  {
    out << "canid: ";
    rosidl_generator_traits::value_to_yaml(msg.canid, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: protocol_type
  {
    out << "protocol_type: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_type, out);
    out << ", ";
  }

  // member: boards_motor
  {
    out << "boards_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.boards_motor, out);
    out << ", ";
  }

  // member: depend
  {
    out << "depend: ";
    rosidl_generator_traits::value_to_yaml(msg.depend, out);
    out << ", ";
  }

  // member: bus
  {
    out << "bus: ";
    rosidl_generator_traits::value_to_yaml(msg.bus, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorDriverData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: canid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "canid: ";
    rosidl_generator_traits::value_to_yaml(msg.canid, out);
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

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: protocol_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol_type: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_type, out);
    out << "\n";
  }

  // member: boards_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boards_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.boards_motor, out);
    out << "\n";
  }

  // member: depend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depend: ";
    rosidl_generator_traits::value_to_yaml(msg.depend, out);
    out << "\n";
  }

  // member: bus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus: ";
    rosidl_generator_traits::value_to_yaml(msg.bus, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorDriverData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_msg

namespace rosidl_generator_traits
{

[[deprecated("use robot_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_msg::msg::MotorDriverData & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_msg::msg::MotorDriverData & msg)
{
  return robot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_msg::msg::MotorDriverData>()
{
  return "robot_msg::msg::MotorDriverData";
}

template<>
inline const char * name<robot_msg::msg::MotorDriverData>()
{
  return "robot_msg/msg/MotorDriverData";
}

template<>
struct has_fixed_size<robot_msg::msg::MotorDriverData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_msg::msg::MotorDriverData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_msg::msg::MotorDriverData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__TRAITS_HPP_
