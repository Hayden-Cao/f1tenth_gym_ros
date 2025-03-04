// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stop_interface:msg/StopData.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACE__MSG__DETAIL__STOP_DATA__FUNCTIONS_H_
#define STOP_INTERFACE__MSG__DETAIL__STOP_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stop_interface/msg/rosidl_generator_c__visibility_control.h"

#include "stop_interface/msg/detail/stop_data__struct.h"

/// Initialize msg/StopData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stop_interface__msg__StopData
 * )) before or use
 * stop_interface__msg__StopData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__msg__StopData__init(stop_interface__msg__StopData * msg);

/// Finalize msg/StopData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__msg__StopData__fini(stop_interface__msg__StopData * msg);

/// Create msg/StopData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stop_interface__msg__StopData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
stop_interface__msg__StopData *
stop_interface__msg__StopData__create();

/// Destroy msg/StopData message.
/**
 * It calls
 * stop_interface__msg__StopData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__msg__StopData__destroy(stop_interface__msg__StopData * msg);

/// Check for msg/StopData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__msg__StopData__are_equal(const stop_interface__msg__StopData * lhs, const stop_interface__msg__StopData * rhs);

/// Copy a msg/StopData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__msg__StopData__copy(
  const stop_interface__msg__StopData * input,
  stop_interface__msg__StopData * output);

/// Initialize array of msg/StopData messages.
/**
 * It allocates the memory for the number of elements and calls
 * stop_interface__msg__StopData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__msg__StopData__Sequence__init(stop_interface__msg__StopData__Sequence * array, size_t size);

/// Finalize array of msg/StopData messages.
/**
 * It calls
 * stop_interface__msg__StopData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__msg__StopData__Sequence__fini(stop_interface__msg__StopData__Sequence * array);

/// Create array of msg/StopData messages.
/**
 * It allocates the memory for the array and calls
 * stop_interface__msg__StopData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
stop_interface__msg__StopData__Sequence *
stop_interface__msg__StopData__Sequence__create(size_t size);

/// Destroy array of msg/StopData messages.
/**
 * It calls
 * stop_interface__msg__StopData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__msg__StopData__Sequence__destroy(stop_interface__msg__StopData__Sequence * array);

/// Check for msg/StopData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__msg__StopData__Sequence__are_equal(const stop_interface__msg__StopData__Sequence * lhs, const stop_interface__msg__StopData__Sequence * rhs);

/// Copy an array of msg/StopData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__msg__StopData__Sequence__copy(
  const stop_interface__msg__StopData__Sequence * input,
  stop_interface__msg__StopData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STOP_INTERFACE__MSG__DETAIL__STOP_DATA__FUNCTIONS_H_
