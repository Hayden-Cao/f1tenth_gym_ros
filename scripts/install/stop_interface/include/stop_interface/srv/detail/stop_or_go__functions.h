// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stop_interface:srv/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__FUNCTIONS_H_
#define STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stop_interface/msg/rosidl_generator_c__visibility_control.h"

#include "stop_interface/srv/detail/stop_or_go__struct.h"

/// Initialize srv/StopOrGo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stop_interface__srv__StopOrGo_Request
 * )) before or use
 * stop_interface__srv__StopOrGo_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__srv__StopOrGo_Request__init(stop_interface__srv__StopOrGo_Request * msg);

/// Finalize srv/StopOrGo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__srv__StopOrGo_Request__fini(stop_interface__srv__StopOrGo_Request * msg);

/// Create srv/StopOrGo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stop_interface__srv__StopOrGo_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
stop_interface__srv__StopOrGo_Request *
stop_interface__srv__StopOrGo_Request__create();

/// Destroy srv/StopOrGo message.
/**
 * It calls
 * stop_interface__srv__StopOrGo_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__srv__StopOrGo_Request__destroy(stop_interface__srv__StopOrGo_Request * msg);

/// Check for srv/StopOrGo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__srv__StopOrGo_Request__are_equal(const stop_interface__srv__StopOrGo_Request * lhs, const stop_interface__srv__StopOrGo_Request * rhs);

/// Copy a srv/StopOrGo message.
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
stop_interface__srv__StopOrGo_Request__copy(
  const stop_interface__srv__StopOrGo_Request * input,
  stop_interface__srv__StopOrGo_Request * output);

/// Initialize array of srv/StopOrGo messages.
/**
 * It allocates the memory for the number of elements and calls
 * stop_interface__srv__StopOrGo_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__srv__StopOrGo_Request__Sequence__init(stop_interface__srv__StopOrGo_Request__Sequence * array, size_t size);

/// Finalize array of srv/StopOrGo messages.
/**
 * It calls
 * stop_interface__srv__StopOrGo_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__srv__StopOrGo_Request__Sequence__fini(stop_interface__srv__StopOrGo_Request__Sequence * array);

/// Create array of srv/StopOrGo messages.
/**
 * It allocates the memory for the array and calls
 * stop_interface__srv__StopOrGo_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
stop_interface__srv__StopOrGo_Request__Sequence *
stop_interface__srv__StopOrGo_Request__Sequence__create(size_t size);

/// Destroy array of srv/StopOrGo messages.
/**
 * It calls
 * stop_interface__srv__StopOrGo_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__srv__StopOrGo_Request__Sequence__destroy(stop_interface__srv__StopOrGo_Request__Sequence * array);

/// Check for srv/StopOrGo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__srv__StopOrGo_Request__Sequence__are_equal(const stop_interface__srv__StopOrGo_Request__Sequence * lhs, const stop_interface__srv__StopOrGo_Request__Sequence * rhs);

/// Copy an array of srv/StopOrGo messages.
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
stop_interface__srv__StopOrGo_Request__Sequence__copy(
  const stop_interface__srv__StopOrGo_Request__Sequence * input,
  stop_interface__srv__StopOrGo_Request__Sequence * output);

/// Initialize srv/StopOrGo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stop_interface__srv__StopOrGo_Response
 * )) before or use
 * stop_interface__srv__StopOrGo_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__srv__StopOrGo_Response__init(stop_interface__srv__StopOrGo_Response * msg);

/// Finalize srv/StopOrGo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__srv__StopOrGo_Response__fini(stop_interface__srv__StopOrGo_Response * msg);

/// Create srv/StopOrGo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stop_interface__srv__StopOrGo_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
stop_interface__srv__StopOrGo_Response *
stop_interface__srv__StopOrGo_Response__create();

/// Destroy srv/StopOrGo message.
/**
 * It calls
 * stop_interface__srv__StopOrGo_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__srv__StopOrGo_Response__destroy(stop_interface__srv__StopOrGo_Response * msg);

/// Check for srv/StopOrGo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__srv__StopOrGo_Response__are_equal(const stop_interface__srv__StopOrGo_Response * lhs, const stop_interface__srv__StopOrGo_Response * rhs);

/// Copy a srv/StopOrGo message.
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
stop_interface__srv__StopOrGo_Response__copy(
  const stop_interface__srv__StopOrGo_Response * input,
  stop_interface__srv__StopOrGo_Response * output);

/// Initialize array of srv/StopOrGo messages.
/**
 * It allocates the memory for the number of elements and calls
 * stop_interface__srv__StopOrGo_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__srv__StopOrGo_Response__Sequence__init(stop_interface__srv__StopOrGo_Response__Sequence * array, size_t size);

/// Finalize array of srv/StopOrGo messages.
/**
 * It calls
 * stop_interface__srv__StopOrGo_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__srv__StopOrGo_Response__Sequence__fini(stop_interface__srv__StopOrGo_Response__Sequence * array);

/// Create array of srv/StopOrGo messages.
/**
 * It allocates the memory for the array and calls
 * stop_interface__srv__StopOrGo_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
stop_interface__srv__StopOrGo_Response__Sequence *
stop_interface__srv__StopOrGo_Response__Sequence__create(size_t size);

/// Destroy array of srv/StopOrGo messages.
/**
 * It calls
 * stop_interface__srv__StopOrGo_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
void
stop_interface__srv__StopOrGo_Response__Sequence__destroy(stop_interface__srv__StopOrGo_Response__Sequence * array);

/// Check for srv/StopOrGo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interface
bool
stop_interface__srv__StopOrGo_Response__Sequence__are_equal(const stop_interface__srv__StopOrGo_Response__Sequence * lhs, const stop_interface__srv__StopOrGo_Response__Sequence * rhs);

/// Copy an array of srv/StopOrGo messages.
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
stop_interface__srv__StopOrGo_Response__Sequence__copy(
  const stop_interface__srv__StopOrGo_Response__Sequence * input,
  stop_interface__srv__StopOrGo_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__FUNCTIONS_H_
