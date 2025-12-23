// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from robot_msg:srv/ImuRectify.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robot_msg/srv/detail/imu_rectify__struct.h"
#include "robot_msg/srv/detail/imu_rectify__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robot_msg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ImuRectify_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ImuRectify_Request_type_support_ids_t;

static const _ImuRectify_Request_type_support_ids_t _ImuRectify_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ImuRectify_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ImuRectify_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ImuRectify_Request_type_support_symbol_names_t _ImuRectify_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_msg, srv, ImuRectify_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_msg, srv, ImuRectify_Request)),
  }
};

typedef struct _ImuRectify_Request_type_support_data_t
{
  void * data[2];
} _ImuRectify_Request_type_support_data_t;

static _ImuRectify_Request_type_support_data_t _ImuRectify_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ImuRectify_Request_message_typesupport_map = {
  2,
  "robot_msg",
  &_ImuRectify_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ImuRectify_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ImuRectify_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ImuRectify_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ImuRectify_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robot_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_msg, srv, ImuRectify_Request)() {
  return &::robot_msg::srv::rosidl_typesupport_c::ImuRectify_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_msg/srv/detail/imu_rectify__struct.h"
// already included above
// #include "robot_msg/srv/detail/imu_rectify__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_msg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ImuRectify_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ImuRectify_Response_type_support_ids_t;

static const _ImuRectify_Response_type_support_ids_t _ImuRectify_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ImuRectify_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ImuRectify_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ImuRectify_Response_type_support_symbol_names_t _ImuRectify_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_msg, srv, ImuRectify_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_msg, srv, ImuRectify_Response)),
  }
};

typedef struct _ImuRectify_Response_type_support_data_t
{
  void * data[2];
} _ImuRectify_Response_type_support_data_t;

static _ImuRectify_Response_type_support_data_t _ImuRectify_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ImuRectify_Response_message_typesupport_map = {
  2,
  "robot_msg",
  &_ImuRectify_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ImuRectify_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ImuRectify_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ImuRectify_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ImuRectify_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robot_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_msg, srv, ImuRectify_Response)() {
  return &::robot_msg::srv::rosidl_typesupport_c::ImuRectify_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_msg/srv/detail/imu_rectify__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_msg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ImuRectify_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ImuRectify_type_support_ids_t;

static const _ImuRectify_type_support_ids_t _ImuRectify_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ImuRectify_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ImuRectify_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ImuRectify_type_support_symbol_names_t _ImuRectify_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_msg, srv, ImuRectify)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_msg, srv, ImuRectify)),
  }
};

typedef struct _ImuRectify_type_support_data_t
{
  void * data[2];
} _ImuRectify_type_support_data_t;

static _ImuRectify_type_support_data_t _ImuRectify_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ImuRectify_service_typesupport_map = {
  2,
  "robot_msg",
  &_ImuRectify_service_typesupport_ids.typesupport_identifier[0],
  &_ImuRectify_service_typesupport_symbol_names.symbol_name[0],
  &_ImuRectify_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ImuRectify_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ImuRectify_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robot_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, robot_msg, srv, ImuRectify)() {
  return &::robot_msg::srv::rosidl_typesupport_c::ImuRectify_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
