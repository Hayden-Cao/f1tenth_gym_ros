// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from wall_follow_with_safety:action/StopOrGo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wall_follow_with_safety
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void StopOrGo_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wall_follow_with_safety::action::StopOrGo_Goal(_init);
}

void StopOrGo_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wall_follow_with_safety::action::StopOrGo_Goal *>(message_memory);
  typed_message->~StopOrGo_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StopOrGo_Goal_message_member_array[1] = {
  {
    "stop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_Goal, stop),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StopOrGo_Goal_message_members = {
  "wall_follow_with_safety::action",  // message namespace
  "StopOrGo_Goal",  // message name
  1,  // number of fields
  sizeof(wall_follow_with_safety::action::StopOrGo_Goal),
  StopOrGo_Goal_message_member_array,  // message members
  StopOrGo_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  StopOrGo_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StopOrGo_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopOrGo_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace wall_follow_with_safety


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wall_follow_with_safety::action::StopOrGo_Goal>()
{
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wall_follow_with_safety, action, StopOrGo_Goal)() {
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wall_follow_with_safety
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void StopOrGo_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wall_follow_with_safety::action::StopOrGo_Result(_init);
}

void StopOrGo_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wall_follow_with_safety::action::StopOrGo_Result *>(message_memory);
  typed_message->~StopOrGo_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StopOrGo_Result_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_Result, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StopOrGo_Result_message_members = {
  "wall_follow_with_safety::action",  // message namespace
  "StopOrGo_Result",  // message name
  1,  // number of fields
  sizeof(wall_follow_with_safety::action::StopOrGo_Result),
  StopOrGo_Result_message_member_array,  // message members
  StopOrGo_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  StopOrGo_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StopOrGo_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopOrGo_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace wall_follow_with_safety


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wall_follow_with_safety::action::StopOrGo_Result>()
{
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wall_follow_with_safety, action, StopOrGo_Result)() {
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wall_follow_with_safety
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void StopOrGo_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wall_follow_with_safety::action::StopOrGo_Feedback(_init);
}

void StopOrGo_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wall_follow_with_safety::action::StopOrGo_Feedback *>(message_memory);
  typed_message->~StopOrGo_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StopOrGo_Feedback_message_member_array[2] = {
  {
    "current_distance_to_wall",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_Feedback, current_distance_to_wall),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ittc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_Feedback, ittc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StopOrGo_Feedback_message_members = {
  "wall_follow_with_safety::action",  // message namespace
  "StopOrGo_Feedback",  // message name
  2,  // number of fields
  sizeof(wall_follow_with_safety::action::StopOrGo_Feedback),
  StopOrGo_Feedback_message_member_array,  // message members
  StopOrGo_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  StopOrGo_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StopOrGo_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopOrGo_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace wall_follow_with_safety


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wall_follow_with_safety::action::StopOrGo_Feedback>()
{
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wall_follow_with_safety, action, StopOrGo_Feedback)() {
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wall_follow_with_safety
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void StopOrGo_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wall_follow_with_safety::action::StopOrGo_SendGoal_Request(_init);
}

void StopOrGo_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wall_follow_with_safety::action::StopOrGo_SendGoal_Request *>(message_memory);
  typed_message->~StopOrGo_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StopOrGo_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<wall_follow_with_safety::action::StopOrGo_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StopOrGo_SendGoal_Request_message_members = {
  "wall_follow_with_safety::action",  // message namespace
  "StopOrGo_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(wall_follow_with_safety::action::StopOrGo_SendGoal_Request),
  StopOrGo_SendGoal_Request_message_member_array,  // message members
  StopOrGo_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  StopOrGo_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StopOrGo_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopOrGo_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace wall_follow_with_safety


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wall_follow_with_safety::action::StopOrGo_SendGoal_Request>()
{
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wall_follow_with_safety, action, StopOrGo_SendGoal_Request)() {
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wall_follow_with_safety
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void StopOrGo_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wall_follow_with_safety::action::StopOrGo_SendGoal_Response(_init);
}

void StopOrGo_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wall_follow_with_safety::action::StopOrGo_SendGoal_Response *>(message_memory);
  typed_message->~StopOrGo_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StopOrGo_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StopOrGo_SendGoal_Response_message_members = {
  "wall_follow_with_safety::action",  // message namespace
  "StopOrGo_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(wall_follow_with_safety::action::StopOrGo_SendGoal_Response),
  StopOrGo_SendGoal_Response_message_member_array,  // message members
  StopOrGo_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  StopOrGo_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StopOrGo_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopOrGo_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace wall_follow_with_safety


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wall_follow_with_safety::action::StopOrGo_SendGoal_Response>()
{
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wall_follow_with_safety, action, StopOrGo_SendGoal_Response)() {
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace wall_follow_with_safety
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers StopOrGo_SendGoal_service_members = {
  "wall_follow_with_safety::action",  // service namespace
  "StopOrGo_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<wall_follow_with_safety::action::StopOrGo_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t StopOrGo_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopOrGo_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace wall_follow_with_safety


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<wall_follow_with_safety::action::StopOrGo_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::wall_follow_with_safety::action::StopOrGo_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::wall_follow_with_safety::action::StopOrGo_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wall_follow_with_safety, action, StopOrGo_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<wall_follow_with_safety::action::StopOrGo_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wall_follow_with_safety
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void StopOrGo_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wall_follow_with_safety::action::StopOrGo_GetResult_Request(_init);
}

void StopOrGo_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wall_follow_with_safety::action::StopOrGo_GetResult_Request *>(message_memory);
  typed_message->~StopOrGo_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StopOrGo_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StopOrGo_GetResult_Request_message_members = {
  "wall_follow_with_safety::action",  // message namespace
  "StopOrGo_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(wall_follow_with_safety::action::StopOrGo_GetResult_Request),
  StopOrGo_GetResult_Request_message_member_array,  // message members
  StopOrGo_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  StopOrGo_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StopOrGo_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopOrGo_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace wall_follow_with_safety


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wall_follow_with_safety::action::StopOrGo_GetResult_Request>()
{
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wall_follow_with_safety, action, StopOrGo_GetResult_Request)() {
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wall_follow_with_safety
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void StopOrGo_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wall_follow_with_safety::action::StopOrGo_GetResult_Response(_init);
}

void StopOrGo_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wall_follow_with_safety::action::StopOrGo_GetResult_Response *>(message_memory);
  typed_message->~StopOrGo_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StopOrGo_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<wall_follow_with_safety::action::StopOrGo_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StopOrGo_GetResult_Response_message_members = {
  "wall_follow_with_safety::action",  // message namespace
  "StopOrGo_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(wall_follow_with_safety::action::StopOrGo_GetResult_Response),
  StopOrGo_GetResult_Response_message_member_array,  // message members
  StopOrGo_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  StopOrGo_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StopOrGo_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopOrGo_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace wall_follow_with_safety


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wall_follow_with_safety::action::StopOrGo_GetResult_Response>()
{
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wall_follow_with_safety, action, StopOrGo_GetResult_Response)() {
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace wall_follow_with_safety
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers StopOrGo_GetResult_service_members = {
  "wall_follow_with_safety::action",  // service namespace
  "StopOrGo_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<wall_follow_with_safety::action::StopOrGo_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t StopOrGo_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopOrGo_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace wall_follow_with_safety


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<wall_follow_with_safety::action::StopOrGo_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::wall_follow_with_safety::action::StopOrGo_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::wall_follow_with_safety::action::StopOrGo_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wall_follow_with_safety, action, StopOrGo_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<wall_follow_with_safety::action::StopOrGo_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wall_follow_with_safety
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void StopOrGo_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wall_follow_with_safety::action::StopOrGo_FeedbackMessage(_init);
}

void StopOrGo_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wall_follow_with_safety::action::StopOrGo_FeedbackMessage *>(message_memory);
  typed_message->~StopOrGo_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StopOrGo_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<wall_follow_with_safety::action::StopOrGo_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wall_follow_with_safety::action::StopOrGo_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StopOrGo_FeedbackMessage_message_members = {
  "wall_follow_with_safety::action",  // message namespace
  "StopOrGo_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(wall_follow_with_safety::action::StopOrGo_FeedbackMessage),
  StopOrGo_FeedbackMessage_message_member_array,  // message members
  StopOrGo_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  StopOrGo_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StopOrGo_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopOrGo_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace wall_follow_with_safety


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wall_follow_with_safety::action::StopOrGo_FeedbackMessage>()
{
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wall_follow_with_safety, action, StopOrGo_FeedbackMessage)() {
  return &::wall_follow_with_safety::action::rosidl_typesupport_introspection_cpp::StopOrGo_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
