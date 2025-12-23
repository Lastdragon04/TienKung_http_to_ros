// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_msg:msg/ImuAcc.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__IMU_ACC__TRAITS_HPP_
#define ROBOT_MSG__MSG__DETAIL__IMU_ACC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_msg/msg/detail/imu_acc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuAcc & msg,
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
    out << ", ";
  }

  // member: acc_x
  {
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << ", ";
  }

  // member: acc_y
  {
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << ", ";
  }

  // member: acc_z
  {
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuAcc & msg,
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

  // member: acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << "\n";
  }

  // member: acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << "\n";
  }

  // member: acc_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuAcc & msg, bool use_flow_style = false)
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
  const robot_msg::msg::ImuAcc & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_msg::msg::ImuAcc & msg)
{
  return robot_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_msg::msg::ImuAcc>()
{
  return "robot_msg::msg::ImuAcc";
}

template<>
inline const char * name<robot_msg::msg::ImuAcc>()
{
  return "robot_msg/msg/ImuAcc";
}

template<>
struct has_fixed_size<robot_msg::msg::ImuAcc>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_msg::msg::ImuAcc>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_msg::msg::ImuAcc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MSG__MSG__DETAIL__IMU_ACC__TRAITS_HPP_
