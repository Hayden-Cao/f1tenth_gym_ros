// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stop_interface:msg/StopData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stop_interface/msg/detail/stop_data__rosidl_typesupport_introspection_c.h"
#include "stop_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stop_interface/msg/detail/stop_data__functions.h"
#include "stop_interface/msg/detail/stop_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void StopData__rosidl_typesupport_introspection_c__StopData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stop_interface__msg__StopData__init(message_memory);
}

void StopData__rosidl_typesupport_introspection_c__StopData_fini_function(void * message_memory)
{
  stop_interface__msg__StopData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StopData__rosidl_typesupport_introspection_c__StopData_message_member_array[2] = {
  {
    "ittc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stop_interface__msg__StopData, ittc),  // bytes offset in struct
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
    offsetof(stop_interface__msg__StopData, dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StopData__rosidl_typesupport_introspection_c__StopData_message_members = {
  "stop_interface__msg",  // message namespace
  "StopData",  // message name
  2,  // number of fields
  sizeof(stop_interface__msg__StopData),
  StopData__rosidl_typesupport_introspection_c__StopData_message_member_array,  // message members
  StopData__rosidl_typesupport_introspection_c__StopData_init_function,  // function to initialize message memory (memory has to be allocated)
  StopData__rosidl_typesupport_introspection_c__StopData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StopData__rosidl_typesupport_introspection_c__StopData_message_type_support_handle = {
  0,
  &StopData__rosidl_typesupport_introspection_c__StopData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stop_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stop_interface, msg, StopData)() {
  if (!StopData__rosidl_typesupport_introspection_c__StopData_message_type_support_handle.typesupport_identifier) {
    StopData__rosidl_typesupport_introspection_c__StopData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StopData__rosidl_typesupport_introspection_c__StopData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
