// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_msg:msg/ImuAngle.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__IMU_ANGLE__STRUCT_HPP_
#define ROBOT_MSG__MSG__DETAIL__IMU_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_msg__msg__ImuAngle __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__msg__ImuAngle __declspec(deprecated)
#endif

namespace robot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuAngle_
{
  using Type = ImuAngle_<ContainerAllocator>;

  explicit ImuAngle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus = "";
      this->boards_imu = 0;
      this->angle_x = 0.0f;
      this->angle_y = 0.0f;
      this->angle_z = 0.0f;
    }
  }

  explicit ImuAngle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bus(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus = "";
      this->boards_imu = 0;
      this->angle_x = 0.0f;
      this->angle_y = 0.0f;
      this->angle_z = 0.0f;
    }
  }

  // field types and members
  using _bus_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bus_type bus;
  using _boards_imu_type =
    int16_t;
  _boards_imu_type boards_imu;
  using _angle_x_type =
    float;
  _angle_x_type angle_x;
  using _angle_y_type =
    float;
  _angle_y_type angle_y;
  using _angle_z_type =
    float;
  _angle_z_type angle_z;

  // setters for named parameter idiom
  Type & set__bus(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bus = _arg;
    return *this;
  }
  Type & set__boards_imu(
    const int16_t & _arg)
  {
    this->boards_imu = _arg;
    return *this;
  }
  Type & set__angle_x(
    const float & _arg)
  {
    this->angle_x = _arg;
    return *this;
  }
  Type & set__angle_y(
    const float & _arg)
  {
    this->angle_y = _arg;
    return *this;
  }
  Type & set__angle_z(
    const float & _arg)
  {
    this->angle_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msg::msg::ImuAngle_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::msg::ImuAngle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::msg::ImuAngle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::msg::ImuAngle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::ImuAngle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::ImuAngle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::ImuAngle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::ImuAngle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::msg::ImuAngle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::msg::ImuAngle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__msg__ImuAngle
    std::shared_ptr<robot_msg::msg::ImuAngle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__msg__ImuAngle
    std::shared_ptr<robot_msg::msg::ImuAngle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuAngle_ & other) const
  {
    if (this->bus != other.bus) {
      return false;
    }
    if (this->boards_imu != other.boards_imu) {
      return false;
    }
    if (this->angle_x != other.angle_x) {
      return false;
    }
    if (this->angle_y != other.angle_y) {
      return false;
    }
    if (this->angle_z != other.angle_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuAngle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuAngle_

// alias to use template instance with default allocator
using ImuAngle =
  robot_msg::msg::ImuAngle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__IMU_ANGLE__STRUCT_HPP_
