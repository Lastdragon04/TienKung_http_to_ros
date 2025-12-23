// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_msg:msg/ImuGyro.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__IMU_GYRO__STRUCT_HPP_
#define ROBOT_MSG__MSG__DETAIL__IMU_GYRO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_msg__msg__ImuGyro __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__msg__ImuGyro __declspec(deprecated)
#endif

namespace robot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuGyro_
{
  using Type = ImuGyro_<ContainerAllocator>;

  explicit ImuGyro_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus = "";
      this->boards_imu = 0;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
    }
  }

  explicit ImuGyro_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bus(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus = "";
      this->boards_imu = 0;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
    }
  }

  // field types and members
  using _bus_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bus_type bus;
  using _boards_imu_type =
    int16_t;
  _boards_imu_type boards_imu;
  using _gyro_x_type =
    float;
  _gyro_x_type gyro_x;
  using _gyro_y_type =
    float;
  _gyro_y_type gyro_y;
  using _gyro_z_type =
    float;
  _gyro_z_type gyro_z;

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
  Type & set__gyro_x(
    const float & _arg)
  {
    this->gyro_x = _arg;
    return *this;
  }
  Type & set__gyro_y(
    const float & _arg)
  {
    this->gyro_y = _arg;
    return *this;
  }
  Type & set__gyro_z(
    const float & _arg)
  {
    this->gyro_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msg::msg::ImuGyro_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::msg::ImuGyro_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::msg::ImuGyro_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::msg::ImuGyro_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::ImuGyro_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::ImuGyro_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::ImuGyro_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::ImuGyro_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::msg::ImuGyro_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::msg::ImuGyro_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__msg__ImuGyro
    std::shared_ptr<robot_msg::msg::ImuGyro_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__msg__ImuGyro
    std::shared_ptr<robot_msg::msg::ImuGyro_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuGyro_ & other) const
  {
    if (this->bus != other.bus) {
      return false;
    }
    if (this->boards_imu != other.boards_imu) {
      return false;
    }
    if (this->gyro_x != other.gyro_x) {
      return false;
    }
    if (this->gyro_y != other.gyro_y) {
      return false;
    }
    if (this->gyro_z != other.gyro_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuGyro_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuGyro_

// alias to use template instance with default allocator
using ImuGyro =
  robot_msg::msg::ImuGyro_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__IMU_GYRO__STRUCT_HPP_
