// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stop_interface:srv/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__STRUCT_H_
#define STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/StopOrGo in the package stop_interface.
typedef struct stop_interface__srv__StopOrGo_Request
{
  double ittc;
  double dist;
} stop_interface__srv__StopOrGo_Request;

// Struct for a sequence of stop_interface__srv__StopOrGo_Request.
typedef struct stop_interface__srv__StopOrGo_Request__Sequence
{
  stop_interface__srv__StopOrGo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stop_interface__srv__StopOrGo_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/StopOrGo in the package stop_interface.
typedef struct stop_interface__srv__StopOrGo_Response
{
  bool stop_flag;
} stop_interface__srv__StopOrGo_Response;

// Struct for a sequence of stop_interface__srv__StopOrGo_Response.
typedef struct stop_interface__srv__StopOrGo_Response__Sequence
{
  stop_interface__srv__StopOrGo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stop_interface__srv__StopOrGo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__STRUCT_H_
