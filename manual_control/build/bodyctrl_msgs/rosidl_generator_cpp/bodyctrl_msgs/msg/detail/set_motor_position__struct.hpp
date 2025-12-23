// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bodyctrl_msgs:msg/SetMotorPosition.idl
// generated code does not contain a copyright notice

#ifndef BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_POSITION__STRUCT_HPP_
#define BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bodyctrl_msgs__msg__SetMotorPosition __attribute__((deprecated))
#else
# define DEPRECATED__bodyctrl_msgs__msg__SetMotorPosition __declspec(deprecated)
#endif

namespace bodyctrl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetMotorPosition_
{
  using Type = SetMotorPosition_<ContainerAllocator>;

  explicit SetMotorPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0;
      this->pos = 0.0f;
      this->spd = 0.0f;
      this->cur = 0.0f;
    }
  }

  explicit SetMotorPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = 0;
      this->pos = 0.0f;
      this->spd = 0.0f;
      this->cur = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    uint16_t;
  _name_type name;
  using _pos_type =
    float;
  _pos_type pos;
  using _spd_type =
    float;
  _spd_type spd;
  using _cur_type =
    float;
  _cur_type cur;

  // setters for named parameter idiom
  Type & set__name(
    const uint16_t & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__pos(
    const float & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__spd(
    const float & _arg)
  {
    this->spd = _arg;
    return *this;
  }
  Type & set__cur(
    const float & _arg)
  {
    this->cur = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bodyctrl_msgs__msg__SetMotorPosition
    std::shared_ptr<bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bodyctrl_msgs__msg__SetMotorPosition
    std::shared_ptr<bodyctrl_msgs::msg::SetMotorPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotorPosition_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->spd != other.spd) {
      return false;
    }
    if (this->cur != other.cur) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotorPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotorPosition_

// alias to use template instance with default allocator
using SetMotorPosition =
  bodyctrl_msgs::msg::SetMotorPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bodyctrl_msgs

#endif  // BODYCTRL_MSGS__MSG__DETAIL__SET_MOTOR_POSITION__STRUCT_HPP_
