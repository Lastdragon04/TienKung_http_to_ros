// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_msg:srv/CacheGet.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__CACHE_GET__STRUCT_HPP_
#define ROBOT_MSG__SRV__DETAIL__CACHE_GET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_msg__srv__CacheGet_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__srv__CacheGet_Request __declspec(deprecated)
#endif

namespace robot_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CacheGet_Request_
{
  using Type = CacheGet_Request_<ContainerAllocator>;

  explicit CacheGet_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
    }
  }

  explicit CacheGet_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
    }
  }

  // field types and members
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;

  // setters for named parameter idiom
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msg::srv::CacheGet_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::srv::CacheGet_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::srv::CacheGet_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::srv::CacheGet_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::CacheGet_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::CacheGet_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::CacheGet_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::CacheGet_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::srv::CacheGet_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::srv::CacheGet_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__srv__CacheGet_Request
    std::shared_ptr<robot_msg::srv::CacheGet_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__srv__CacheGet_Request
    std::shared_ptr<robot_msg::srv::CacheGet_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CacheGet_Request_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    return true;
  }
  bool operator!=(const CacheGet_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CacheGet_Request_

// alias to use template instance with default allocator
using CacheGet_Request =
  robot_msg::srv::CacheGet_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_msg


#ifndef _WIN32
# define DEPRECATED__robot_msg__srv__CacheGet_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__srv__CacheGet_Response __declspec(deprecated)
#endif

namespace robot_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CacheGet_Response_
{
  using Type = CacheGet_Response_<ContainerAllocator>;

  explicit CacheGet_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
    }
  }

  explicit CacheGet_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
    }
  }

  // field types and members
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msg::srv::CacheGet_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::srv::CacheGet_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::srv::CacheGet_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::srv::CacheGet_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::CacheGet_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::CacheGet_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::CacheGet_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::CacheGet_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::srv::CacheGet_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::srv::CacheGet_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__srv__CacheGet_Response
    std::shared_ptr<robot_msg::srv::CacheGet_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__srv__CacheGet_Response
    std::shared_ptr<robot_msg::srv::CacheGet_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CacheGet_Response_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const CacheGet_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CacheGet_Response_

// alias to use template instance with default allocator
using CacheGet_Response =
  robot_msg::srv::CacheGet_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_msg

namespace robot_msg
{

namespace srv
{

struct CacheGet
{
  using Request = robot_msg::srv::CacheGet_Request;
  using Response = robot_msg::srv::CacheGet_Response;
};

}  // namespace srv

}  // namespace robot_msg

#endif  // ROBOT_MSG__SRV__DETAIL__CACHE_GET__STRUCT_HPP_
