// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stop_interface:msg/StopData.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACE__MSG__DETAIL__STOP_DATA__STRUCT_H_
#define STOP_INTERFACE__MSG__DETAIL__STOP_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/StopData in the package stop_interface.
typedef struct stop_interface__msg__StopData
{
  double ittc;
  double dist;
} stop_interface__msg__StopData;

// Struct for a sequence of stop_interface__msg__StopData.
typedef struct stop_interface__msg__StopData__Sequence
{
  stop_interface__msg__StopData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stop_interface__msg__StopData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STOP_INTERFACE__MSG__DETAIL__STOP_DATA__STRUCT_H_
