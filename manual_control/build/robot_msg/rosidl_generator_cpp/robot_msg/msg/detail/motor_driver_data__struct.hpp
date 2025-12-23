// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_msg:msg/MotorDriverData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__STRUCT_HPP_
#define ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_msg__msg__MotorDriverData __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__msg__MotorDriverData __declspec(deprecated)
#endif

namespace robot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorDriverData_
{
  using Type = MotorDriverData_<ContainerAllocator>;

  explicit MotorDriverData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canid = 0;
      this->value = 0.0f;
      this->speed = 0.0f;
      this->type = 0;
      this->protocol_type = 0;
      this->boards_motor = 0;
      this->depend = "";
      this->bus = "";
    }
  }

  explicit MotorDriverData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : depend(_alloc),
    bus(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canid = 0;
      this->value = 0.0f;
      this->speed = 0.0f;
      this->type = 0;
      this->protocol_type = 0;
      this->boards_motor = 0;
      this->depend = "";
      this->bus = "";
    }
  }

  // field types and members
  using _canid_type =
    int16_t;
  _canid_type canid;
  using _value_type =
    float;
  _value_type value;
  using _speed_type =
    float;
  _speed_type speed;
  using _type_type =
    int16_t;
  _type_type type;
  using _protocol_type_type =
    int16_t;
  _protocol_type_type protocol_type;
  using _boards_motor_type =
    int16_t;
  _boards_motor_type boards_motor;
  using _depend_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _depend_type depend;
  using _bus_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bus_type bus;

  // setters for named parameter idiom
  Type & set__canid(
    const int16_t & _arg)
  {
    this->canid = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__type(
    const int16_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__protocol_type(
    const int16_t & _arg)
  {
    this->protocol_type = _arg;
    return *this;
  }
  Type & set__boards_motor(
    const int16_t & _arg)
  {
    this->boards_motor = _arg;
    return *this;
  }
  Type & set__depend(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->depend = _arg;
    return *this;
  }
  Type & set__bus(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msg::msg::MotorDriverData_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::msg::MotorDriverData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::msg::MotorDriverData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::msg::MotorDriverData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::MotorDriverData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::MotorDriverData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::MotorDriverData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::MotorDriverData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::msg::MotorDriverData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::msg::MotorDriverData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__msg__MotorDriverData
    std::shared_ptr<robot_msg::msg::MotorDriverData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__msg__MotorDriverData
    std::shared_ptr<robot_msg::msg::MotorDriverData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorDriverData_ & other) const
  {
    if (this->canid != other.canid) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->protocol_type != other.protocol_type) {
      return false;
    }
    if (this->boards_motor != other.boards_motor) {
      return false;
    }
    if (this->depend != other.depend) {
      return false;
    }
    if (this->bus != other.bus) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorDriverData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorDriverData_

// alias to use template instance with default allocator
using MotorDriverData =
  robot_msg::msg::MotorDriverData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_DATA__STRUCT_HPP_
