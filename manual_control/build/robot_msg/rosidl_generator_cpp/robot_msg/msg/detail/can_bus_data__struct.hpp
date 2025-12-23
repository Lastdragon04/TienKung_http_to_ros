// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_msg:msg/CanBusData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__CAN_BUS_DATA__STRUCT_HPP_
#define ROBOT_MSG__MSG__DETAIL__CAN_BUS_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_msg__msg__CanBusData __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__msg__CanBusData __declspec(deprecated)
#endif

namespace robot_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanBusData_
{
  using Type = CanBusData_<ContainerAllocator>;

  explicit CanBusData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0;
      this->bus = "";
    }
  }

  explicit CanBusData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bus(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0;
      this->bus = "";
    }
  }

  // field types and members
  using _can_id_type =
    int16_t;
  _can_id_type can_id;
  using _can_data_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _can_data_type can_data;
  using _bus_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bus_type bus;

  // setters for named parameter idiom
  Type & set__can_id(
    const int16_t & _arg)
  {
    this->can_id = _arg;
    return *this;
  }
  Type & set__can_data(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->can_data = _arg;
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
    robot_msg::msg::CanBusData_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::msg::CanBusData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::msg::CanBusData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::msg::CanBusData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::CanBusData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::CanBusData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::msg::CanBusData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::msg::CanBusData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::msg::CanBusData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::msg::CanBusData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__msg__CanBusData
    std::shared_ptr<robot_msg::msg::CanBusData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__msg__CanBusData
    std::shared_ptr<robot_msg::msg::CanBusData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanBusData_ & other) const
  {
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->can_data != other.can_data) {
      return false;
    }
    if (this->bus != other.bus) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanBusData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanBusData_

// alias to use template instance with default allocator
using CanBusData =
  robot_msg::msg::CanBusData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_msg

#endif  // ROBOT_MSG__MSG__DETAIL__CAN_BUS_DATA__STRUCT_HPP_
