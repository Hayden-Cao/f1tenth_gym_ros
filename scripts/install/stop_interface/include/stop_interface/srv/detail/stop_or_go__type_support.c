// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stop_interface:srv/StopOrGo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stop_interface/srv/detail/stop_or_go__rosidl_typesupport_introspection_c.h"
#include "stop_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stop_interface/srv/detail/stop_or_go__functions.h"
#include "stop_interface/srv/detail/stop_or_go__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stop_interface__srv__StopOrGo_Request__init(message_memory);
}

void StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_fini_function(void * message_memory)
{
  stop_interface__srv__StopOrGo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_message_member_array[2] = {
  {
    "ittc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stop_interface__srv__StopOrGo_Request, ittc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stop_interface__srv__StopOrGo_Request, dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_message_members = {
  "stop_interface__srv",  // message namespace
  "StopOrGo_Request",  // message name
  2,  // number of fields
  sizeof(stop_interface__srv__StopOrGo_Request),
  StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_message_member_array,  // message members
  StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_message_type_support_handle = {
  0,
  &StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stop_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stop_interface, srv, StopOrGo_Request)() {
  if (!StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_message_type_support_handle.typesupport_identifier) {
    StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StopOrGo_Request__rosidl_typesupport_introspection_c__StopOrGo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "stop_interface/srv/detail/stop_or_go__rosidl_typesupport_introspection_c.h"
// already included above
// #include "stop_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "stop_interface/srv/detail/stop_or_go__functions.h"
// already included above
// #include "stop_interface/srv/detail/stop_or_go__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stop_interface__srv__StopOrGo_Response__init(message_memory);
}

void StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_fini_function(void * message_memory)
{
  stop_interface__srv__StopOrGo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_message_member_array[1] = {
  {
    "stop_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stop_interface__srv__StopOrGo_Response, stop_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_message_members = {
  "stop_interface__srv",  // message namespace
  "StopOrGo_Response",  // message name
  1,  // number of fields
  sizeof(stop_interface__srv__StopOrGo_Response),
  StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_message_member_array,  // message members
  StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_message_type_support_handle = {
  0,
  &StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stop_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stop_interface, srv, StopOrGo_Response)() {
  if (!StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_message_type_support_handle.typesupport_identifier) {
    StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StopOrGo_Response__rosidl_typesupport_introspection_c__StopOrGo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "stop_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "stop_interface/srv/detail/stop_or_go__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers stop_interface__srv__detail__stop_or_go__rosidl_typesupport_introspection_c__StopOrGo_service_members = {
  "stop_interface__srv",  // service namespace
  "StopOrGo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // stop_interface__srv__detail__stop_or_go__rosidl_typesupport_introspection_c__StopOrGo_Request_message_type_support_handle,
  NULL  // response message
  // stop_interface__srv__detail__stop_or_go__rosidl_typesupport_introspection_c__StopOrGo_Response_message_type_support_handle
};

static rosidl_service_type_support_t stop_interface__srv__detail__stop_or_go__rosidl_typesupport_introspection_c__StopOrGo_service_type_support_handle = {
  0,
  &stop_interface__srv__detail__stop_or_go__rosidl_typesupport_introspection_c__StopOrGo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stop_interface, srv, StopOrGo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stop_interface, srv, StopOrGo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stop_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stop_interface, srv, StopOrGo)() {
  if (!stop_interface__srv__detail__stop_or_go__rosidl_typesupport_introspection_c__StopOrGo_service_type_support_handle.typesupport_identifier) {
    stop_interface__srv__detail__stop_or_go__rosidl_typesupport_introspection_c__StopOrGo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)stop_interface__srv__detail__stop_or_go__rosidl_typesupport_introspection_c__StopOrGo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stop_interface, srv, StopOrGo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stop_interface, srv, StopOrGo_Response)()->data;
  }

  return &stop_interface__srv__detail__stop_or_go__rosidl_typesupport_introspection_c__StopOrGo_service_type_support_handle;
}