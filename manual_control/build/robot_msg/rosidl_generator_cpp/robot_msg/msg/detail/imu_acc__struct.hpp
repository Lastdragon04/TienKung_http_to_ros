// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_msg:msg/ImuAcc.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__IMU_ACC__STRUCT_HPP_
#define ROBOT_MSG__MSG__DETAIL__IMU_ACC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_msg__msg__ImuAcc __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__msg__ImuAcc __declspec(deprecated)
#endif

namespace robot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuAcc_
{
  using Type = ImuAcc_<ContainerAllocator>;

  explicit ImuAcc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus = "";
      this->boards_imu = 0;
      this->acc_x = 0.0f;
      this->acc_y = 0.0f;
      this->acc_z = 0.0f;
    }
  }

  explicit ImuAcc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bus(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus = "";
      this->boards_imu = 0;
      this->acc_x = 0.0f;
      this->acc_y = 0.0f;
      this->acc_z = 0.0f;
    }
  }

  // field types and members
  using _bus_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bus_type bus;
  using _boards_imu_type =
    int16_t;
  _boards_imu_type boards_imu;
  using _acc_x_type =
    float;
  _acc_x_type acc_x;
  using _acc_y_type =
    float;
  _acc_y_type acc_y;
  using _acc_z_type =
    float;
  _acc_z_type acc_z;

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
  Type & set__acc_x(
    const float & _arg)
  {
    this->acc_x = _arg;
    return *this;
  }
  Type & set__acc_y(
    const float & _arg)
  {
    this->acc_y = _arg;
    return *this;
  }
  Type & set__acc_z(
    const float & _arg)
  {
    this->acc_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msg::msg::ImuAcc_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::msg::ImuAcc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::msg::ImuAcc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::msg::ImuAcc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::ImuAcc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::ImuAcc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::ImuAcc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::ImuAcc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::msg::ImuAcc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::msg::ImuAcc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__msg__ImuAcc
    std::shared_ptr<robot_msg::msg::ImuAcc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__msg__ImuAcc
    std::shared_ptr<robot_msg::msg::ImuAcc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuAcc_ & other) const
  {
    if (this->bus != other.bus) {
      return false;
    }
    if (this->boards_imu != other.boards_imu) {
      return false;
    }
    if (this->acc_x != other.acc_x) {
      return false;
    }
    if (this->acc_y != other.acc_y) {
      return false;
    }
    if (this->acc_z != other.acc_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuAcc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuAcc_

// alias to use template instance with default allocator
using ImuAcc =
  robot_msg::msg::ImuAcc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__IMU_ACC__STRUCT_HPP_
