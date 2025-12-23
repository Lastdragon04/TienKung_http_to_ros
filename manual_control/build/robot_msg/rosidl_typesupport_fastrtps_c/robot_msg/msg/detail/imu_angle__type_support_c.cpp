// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robot_msg:msg/ImuAngle.idl
// generated code does not contain a copyright notice
#include "robot_msg/msg/detail/imu_angle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robot_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_msg/msg/detail/imu_angle__struct.h"
#include "robot_msg/msg/detail/imu_angle__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // bus
#include "rosidl_runtime_c/string_functions.h"  // bus

// forward declare type support functions


using _ImuAngle__ros_msg_type = robot_msg__msg__ImuAngle;

static bool _ImuAngle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImuAngle__ros_msg_type * ros_message = static_cast<const _ImuAngle__ros_msg_type *>(untyped_ros_message);
  // Field name: bus
  {
    const rosidl_runtime_c__String * str = &ros_message->bus;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: boards_imu
  {
    cdr << ros_message->boards_imu;
  }

  // Field name: angle_x
  {
    cdr << ros_message->angle_x;
  }

  // Field name: angle_y
  {
    cdr << ros_message->angle_y;
  }

  // Field name: angle_z
  {
    cdr << ros_message->angle_z;
  }

  return true;
}

static bool _ImuAngle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImuAngle__ros_msg_type * ros_message = static_cast<_ImuAngle__ros_msg_type *>(untyped_ros_message);
  // Field name: bus
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bus.data) {
      rosidl_runtime_c__String__init(&ros_message->bus);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bus,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bus'\n");
      return false;
    }
  }

  // Field name: boards_imu
  {
    cdr >> ros_message->boards_imu;
  }

  // Field name: angle_x
  {
    cdr >> ros_message->angle_x;
  }

  // Field name: angle_y
  {
    cdr >> ros_message->angle_y;
  }

  // Field name: angle_z
  {
    cdr >> ros_message->angle_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_msg
size_t get_serialized_size_robot_msg__msg__ImuAngle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImuAngle__ros_msg_type * ros_message = static_cast<const _ImuAngle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bus
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bus.size + 1);
  // field.name boards_imu
  {
    size_t item_size = sizeof(ros_message->boards_imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_x
  {
    size_t item_size = sizeof(ros_message->angle_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_y
  {
    size_t item_size = sizeof(ros_message->angle_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_z
  {
    size_t item_size = sizeof(ros_message->angle_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ImuAngle__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robot_msg__msg__ImuAngle(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_msg
size_t max_serialized_size_robot_msg__msg__ImuAngle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: bus
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: boards_imu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: angle_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robot_msg__msg__ImuAngle;
    is_plain =
      (
      offsetof(DataType, angle_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ImuAngle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robot_msg__msg__ImuAngle(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ImuAngle = {
  "robot_msg::msg",
  "ImuAngle",
  _ImuAngle__cdr_serialize,
  _ImuAngle__cdr_deserialize,
  _ImuAngle__get_serialized_size,
  _ImuAngle__max_serialized_size
};

static rosidl_message_type_support_t _ImuAngle__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImuAngle,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_msg, msg, ImuAngle)() {
  return &_ImuAngle__type_support;
}

#if defined(__cplusplus)
}
#endif
