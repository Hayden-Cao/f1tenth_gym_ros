// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from stop_interface:msg/StopData.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACE__MSG__DETAIL__STOP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define STOP_INTERFACE__MSG__DETAIL__STOP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "stop_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "stop_interface/msg/detail/stop_data__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace stop_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stop_interface
cdr_serialize(
  const stop_interface::msg::StopData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stop_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  stop_interface::msg::StopData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stop_interface
get_serialized_size(
  const stop_interface::msg::StopData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stop_interface
max_serialized_size_StopData(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace stop_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stop_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, stop_interface, msg, StopData)();

#ifdef __cplusplus
}
#endif

#endif  // STOP_INTERFACE__MSG__DETAIL__STOP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
