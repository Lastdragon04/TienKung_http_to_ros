// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_msg:srv/CacheSet.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__CACHE_SET__STRUCT_HPP_
#define ROBOT_MSG__SRV__DETAIL__CACHE_SET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_msg__srv__CacheSet_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__srv__CacheSet_Request __declspec(deprecated)
#endif

namespace robot_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CacheSet_Request_
{
  using Type = CacheSet_Request_<ContainerAllocator>;

  explicit CacheSet_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->value = 0;
    }
  }

  explicit CacheSet_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->value = 0;
    }
  }

  // field types and members
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;
  using _value_type =
    int8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__value(
    const int8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msg::srv::CacheSet_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::srv::CacheSet_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::srv::CacheSet_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::srv::CacheSet_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::CacheSet_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::CacheSet_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::CacheSet_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::CacheSet_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::srv::CacheSet_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::srv::CacheSet_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__srv__CacheSet_Request
    std::shared_ptr<robot_msg::srv::CacheSet_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__srv__CacheSet_Request
    std::shared_ptr<robot_msg::srv::CacheSet_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CacheSet_Request_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const CacheSet_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CacheSet_Request_

// alias to use template instance with default allocator
using CacheSet_Request =
  robot_msg::srv::CacheSet_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_msg


#ifndef _WIN32
# define DEPRECATED__robot_msg__srv__CacheSet_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__srv__CacheSet_Response __declspec(deprecated)
#endif

namespace robot_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CacheSet_Response_
{
  using Type = CacheSet_Response_<ContainerAllocator>;

  explicit CacheSet_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit CacheSet_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    int8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msg::srv::CacheSet_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::srv::CacheSet_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::srv::CacheSet_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::srv::CacheSet_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::CacheSet_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::CacheSet_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::CacheSet_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::CacheSet_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::srv::CacheSet_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::srv::CacheSet_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__srv__CacheSet_Response
    std::shared_ptr<robot_msg::srv::CacheSet_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__srv__CacheSet_Response
    std::shared_ptr<robot_msg::srv::CacheSet_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CacheSet_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CacheSet_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CacheSet_Response_

// alias to use template instance with default allocator
using CacheSet_Response =
  robot_msg::srv::CacheSet_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_msg

namespace robot_msg
{

namespace srv
{

struct CacheSet
{
  using Request = robot_msg::srv::CacheSet_Request;
  using Response = robot_msg::srv::CacheSet_Response;
};

}  // namespace srv

}  // namespace robot_msg

#endif  // ROBOT_MSG__SRV__DETAIL__CACHE_SET__STRUCT_HPP_
