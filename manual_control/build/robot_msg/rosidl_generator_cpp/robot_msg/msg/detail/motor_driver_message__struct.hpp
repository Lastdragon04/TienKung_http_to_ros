// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_msg:msg/MotorDriverMessage.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_MESSAGE__STRUCT_HPP_
#define ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'data'
#include "robot_msg/msg/detail/motor_driver_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_msg__msg__MotorDriverMessage __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__msg__MotorDriverMessage __declspec(deprecated)
#endif

namespace robot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorDriverMessage_
{
  using Type = MotorDriverMessage_<ContainerAllocator>;

  explicit MotorDriverMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MotorDriverMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::vector<robot_msg::msg::MotorDriverData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_msg::msg::MotorDriverData_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<robot_msg::msg::MotorDriverData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_msg::msg::MotorDriverData_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msg::msg::MotorDriverMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::msg::MotorDriverMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::msg::MotorDriverMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::msg::MotorDriverMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::MotorDriverMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::MotorDriverMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::MotorDriverMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::MotorDriverMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::msg::MotorDriverMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::msg::MotorDriverMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__msg__MotorDriverMessage
    std::shared_ptr<robot_msg::msg::MotorDriverMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__msg__MotorDriverMessage
    std::shared_ptr<robot_msg::msg::MotorDriverMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorDriverMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorDriverMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorDriverMessage_

// alias to use template instance with default allocator
using MotorDriverMessage =
  robot_msg::msg::MotorDriverMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__MOTOR_DRIVER_MESSAGE__STRUCT_HPP_
