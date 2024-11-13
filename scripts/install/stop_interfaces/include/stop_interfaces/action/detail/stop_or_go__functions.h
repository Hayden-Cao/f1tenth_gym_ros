// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stop_interfaces:action/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__FUNCTIONS_H_
#define STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stop_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "stop_interfaces/action/detail/stop_or_go__struct.h"

/// Initialize action/StopOrGo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stop_interfaces__action__StopOrGo_Goal
 * )) before or use
 * stop_interfaces__action__StopOrGo_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Goal__init(stop_interfaces__action__StopOrGo_Goal * msg);

/// Finalize action/StopOrGo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Goal__fini(stop_interfaces__action__StopOrGo_Goal * msg);

/// Create action/StopOrGo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stop_interfaces__action__StopOrGo_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_Goal *
stop_interfaces__action__StopOrGo_Goal__create();

/// Destroy action/StopOrGo message.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Goal__destroy(stop_interfaces__action__StopOrGo_Goal * msg);

/// Check for action/StopOrGo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Goal__are_equal(const stop_interfaces__action__StopOrGo_Goal * lhs, const stop_interfaces__action__StopOrGo_Goal * rhs);

/// Copy a action/StopOrGo message.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Goal__copy(
  const stop_interfaces__action__StopOrGo_Goal * input,
  stop_interfaces__action__StopOrGo_Goal * output);

/// Initialize array of action/StopOrGo messages.
/**
 * It allocates the memory for the number of elements and calls
 * stop_interfaces__action__StopOrGo_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Goal__Sequence__init(stop_interfaces__action__StopOrGo_Goal__Sequence * array, size_t size);

/// Finalize array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Goal__Sequence__fini(stop_interfaces__action__StopOrGo_Goal__Sequence * array);

/// Create array of action/StopOrGo messages.
/**
 * It allocates the memory for the array and calls
 * stop_interfaces__action__StopOrGo_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_Goal__Sequence *
stop_interfaces__action__StopOrGo_Goal__Sequence__create(size_t size);

/// Destroy array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Goal__Sequence__destroy(stop_interfaces__action__StopOrGo_Goal__Sequence * array);

/// Check for action/StopOrGo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Goal__Sequence__are_equal(const stop_interfaces__action__StopOrGo_Goal__Sequence * lhs, const stop_interfaces__action__StopOrGo_Goal__Sequence * rhs);

/// Copy an array of action/StopOrGo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Goal__Sequence__copy(
  const stop_interfaces__action__StopOrGo_Goal__Sequence * input,
  stop_interfaces__action__StopOrGo_Goal__Sequence * output);

/// Initialize action/StopOrGo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stop_interfaces__action__StopOrGo_Result
 * )) before or use
 * stop_interfaces__action__StopOrGo_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Result__init(stop_interfaces__action__StopOrGo_Result * msg);

/// Finalize action/StopOrGo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Result__fini(stop_interfaces__action__StopOrGo_Result * msg);

/// Create action/StopOrGo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stop_interfaces__action__StopOrGo_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_Result *
stop_interfaces__action__StopOrGo_Result__create();

/// Destroy action/StopOrGo message.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Result__destroy(stop_interfaces__action__StopOrGo_Result * msg);

/// Check for action/StopOrGo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Result__are_equal(const stop_interfaces__action__StopOrGo_Result * lhs, const stop_interfaces__action__StopOrGo_Result * rhs);

/// Copy a action/StopOrGo message.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Result__copy(
  const stop_interfaces__action__StopOrGo_Result * input,
  stop_interfaces__action__StopOrGo_Result * output);

/// Initialize array of action/StopOrGo messages.
/**
 * It allocates the memory for the number of elements and calls
 * stop_interfaces__action__StopOrGo_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Result__Sequence__init(stop_interfaces__action__StopOrGo_Result__Sequence * array, size_t size);

/// Finalize array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Result__Sequence__fini(stop_interfaces__action__StopOrGo_Result__Sequence * array);

/// Create array of action/StopOrGo messages.
/**
 * It allocates the memory for the array and calls
 * stop_interfaces__action__StopOrGo_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_Result__Sequence *
stop_interfaces__action__StopOrGo_Result__Sequence__create(size_t size);

/// Destroy array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Result__Sequence__destroy(stop_interfaces__action__StopOrGo_Result__Sequence * array);

/// Check for action/StopOrGo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Result__Sequence__are_equal(const stop_interfaces__action__StopOrGo_Result__Sequence * lhs, const stop_interfaces__action__StopOrGo_Result__Sequence * rhs);

/// Copy an array of action/StopOrGo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Result__Sequence__copy(
  const stop_interfaces__action__StopOrGo_Result__Sequence * input,
  stop_interfaces__action__StopOrGo_Result__Sequence * output);

/// Initialize action/StopOrGo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stop_interfaces__action__StopOrGo_Feedback
 * )) before or use
 * stop_interfaces__action__StopOrGo_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Feedback__init(stop_interfaces__action__StopOrGo_Feedback * msg);

/// Finalize action/StopOrGo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Feedback__fini(stop_interfaces__action__StopOrGo_Feedback * msg);

/// Create action/StopOrGo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stop_interfaces__action__StopOrGo_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_Feedback *
stop_interfaces__action__StopOrGo_Feedback__create();

/// Destroy action/StopOrGo message.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Feedback__destroy(stop_interfaces__action__StopOrGo_Feedback * msg);

/// Check for action/StopOrGo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Feedback__are_equal(const stop_interfaces__action__StopOrGo_Feedback * lhs, const stop_interfaces__action__StopOrGo_Feedback * rhs);

/// Copy a action/StopOrGo message.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Feedback__copy(
  const stop_interfaces__action__StopOrGo_Feedback * input,
  stop_interfaces__action__StopOrGo_Feedback * output);

/// Initialize array of action/StopOrGo messages.
/**
 * It allocates the memory for the number of elements and calls
 * stop_interfaces__action__StopOrGo_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Feedback__Sequence__init(stop_interfaces__action__StopOrGo_Feedback__Sequence * array, size_t size);

/// Finalize array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Feedback__Sequence__fini(stop_interfaces__action__StopOrGo_Feedback__Sequence * array);

/// Create array of action/StopOrGo messages.
/**
 * It allocates the memory for the array and calls
 * stop_interfaces__action__StopOrGo_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_Feedback__Sequence *
stop_interfaces__action__StopOrGo_Feedback__Sequence__create(size_t size);

/// Destroy array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_Feedback__Sequence__destroy(stop_interfaces__action__StopOrGo_Feedback__Sequence * array);

/// Check for action/StopOrGo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Feedback__Sequence__are_equal(const stop_interfaces__action__StopOrGo_Feedback__Sequence * lhs, const stop_interfaces__action__StopOrGo_Feedback__Sequence * rhs);

/// Copy an array of action/StopOrGo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_Feedback__Sequence__copy(
  const stop_interfaces__action__StopOrGo_Feedback__Sequence * input,
  stop_interfaces__action__StopOrGo_Feedback__Sequence * output);

/// Initialize action/StopOrGo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stop_interfaces__action__StopOrGo_SendGoal_Request
 * )) before or use
 * stop_interfaces__action__StopOrGo_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Request__init(stop_interfaces__action__StopOrGo_SendGoal_Request * msg);

/// Finalize action/StopOrGo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_SendGoal_Request__fini(stop_interfaces__action__StopOrGo_SendGoal_Request * msg);

/// Create action/StopOrGo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stop_interfaces__action__StopOrGo_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_SendGoal_Request *
stop_interfaces__action__StopOrGo_SendGoal_Request__create();

/// Destroy action/StopOrGo message.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_SendGoal_Request__destroy(stop_interfaces__action__StopOrGo_SendGoal_Request * msg);

/// Check for action/StopOrGo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Request__are_equal(const stop_interfaces__action__StopOrGo_SendGoal_Request * lhs, const stop_interfaces__action__StopOrGo_SendGoal_Request * rhs);

/// Copy a action/StopOrGo message.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Request__copy(
  const stop_interfaces__action__StopOrGo_SendGoal_Request * input,
  stop_interfaces__action__StopOrGo_SendGoal_Request * output);

/// Initialize array of action/StopOrGo messages.
/**
 * It allocates the memory for the number of elements and calls
 * stop_interfaces__action__StopOrGo_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence__init(stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence__fini(stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence * array);

/// Create array of action/StopOrGo messages.
/**
 * It allocates the memory for the array and calls
 * stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence *
stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence__destroy(stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence * array);

/// Check for action/StopOrGo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence__are_equal(const stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence * lhs, const stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/StopOrGo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence__copy(
  const stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence * input,
  stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence * output);

/// Initialize action/StopOrGo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stop_interfaces__action__StopOrGo_SendGoal_Response
 * )) before or use
 * stop_interfaces__action__StopOrGo_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Response__init(stop_interfaces__action__StopOrGo_SendGoal_Response * msg);

/// Finalize action/StopOrGo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_SendGoal_Response__fini(stop_interfaces__action__StopOrGo_SendGoal_Response * msg);

/// Create action/StopOrGo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stop_interfaces__action__StopOrGo_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_SendGoal_Response *
stop_interfaces__action__StopOrGo_SendGoal_Response__create();

/// Destroy action/StopOrGo message.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_SendGoal_Response__destroy(stop_interfaces__action__StopOrGo_SendGoal_Response * msg);

/// Check for action/StopOrGo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Response__are_equal(const stop_interfaces__action__StopOrGo_SendGoal_Response * lhs, const stop_interfaces__action__StopOrGo_SendGoal_Response * rhs);

/// Copy a action/StopOrGo message.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Response__copy(
  const stop_interfaces__action__StopOrGo_SendGoal_Response * input,
  stop_interfaces__action__StopOrGo_SendGoal_Response * output);

/// Initialize array of action/StopOrGo messages.
/**
 * It allocates the memory for the number of elements and calls
 * stop_interfaces__action__StopOrGo_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence__init(stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence__fini(stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence * array);

/// Create array of action/StopOrGo messages.
/**
 * It allocates the memory for the array and calls
 * stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence *
stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence__destroy(stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence * array);

/// Check for action/StopOrGo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence__are_equal(const stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence * lhs, const stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/StopOrGo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence__copy(
  const stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence * input,
  stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence * output);

/// Initialize action/StopOrGo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stop_interfaces__action__StopOrGo_GetResult_Request
 * )) before or use
 * stop_interfaces__action__StopOrGo_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Request__init(stop_interfaces__action__StopOrGo_GetResult_Request * msg);

/// Finalize action/StopOrGo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_GetResult_Request__fini(stop_interfaces__action__StopOrGo_GetResult_Request * msg);

/// Create action/StopOrGo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stop_interfaces__action__StopOrGo_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_GetResult_Request *
stop_interfaces__action__StopOrGo_GetResult_Request__create();

/// Destroy action/StopOrGo message.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_GetResult_Request__destroy(stop_interfaces__action__StopOrGo_GetResult_Request * msg);

/// Check for action/StopOrGo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Request__are_equal(const stop_interfaces__action__StopOrGo_GetResult_Request * lhs, const stop_interfaces__action__StopOrGo_GetResult_Request * rhs);

/// Copy a action/StopOrGo message.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Request__copy(
  const stop_interfaces__action__StopOrGo_GetResult_Request * input,
  stop_interfaces__action__StopOrGo_GetResult_Request * output);

/// Initialize array of action/StopOrGo messages.
/**
 * It allocates the memory for the number of elements and calls
 * stop_interfaces__action__StopOrGo_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Request__Sequence__init(stop_interfaces__action__StopOrGo_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_GetResult_Request__Sequence__fini(stop_interfaces__action__StopOrGo_GetResult_Request__Sequence * array);

/// Create array of action/StopOrGo messages.
/**
 * It allocates the memory for the array and calls
 * stop_interfaces__action__StopOrGo_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_GetResult_Request__Sequence *
stop_interfaces__action__StopOrGo_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_GetResult_Request__Sequence__destroy(stop_interfaces__action__StopOrGo_GetResult_Request__Sequence * array);

/// Check for action/StopOrGo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Request__Sequence__are_equal(const stop_interfaces__action__StopOrGo_GetResult_Request__Sequence * lhs, const stop_interfaces__action__StopOrGo_GetResult_Request__Sequence * rhs);

/// Copy an array of action/StopOrGo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Request__Sequence__copy(
  const stop_interfaces__action__StopOrGo_GetResult_Request__Sequence * input,
  stop_interfaces__action__StopOrGo_GetResult_Request__Sequence * output);

/// Initialize action/StopOrGo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stop_interfaces__action__StopOrGo_GetResult_Response
 * )) before or use
 * stop_interfaces__action__StopOrGo_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Response__init(stop_interfaces__action__StopOrGo_GetResult_Response * msg);

/// Finalize action/StopOrGo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_GetResult_Response__fini(stop_interfaces__action__StopOrGo_GetResult_Response * msg);

/// Create action/StopOrGo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stop_interfaces__action__StopOrGo_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_GetResult_Response *
stop_interfaces__action__StopOrGo_GetResult_Response__create();

/// Destroy action/StopOrGo message.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_GetResult_Response__destroy(stop_interfaces__action__StopOrGo_GetResult_Response * msg);

/// Check for action/StopOrGo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Response__are_equal(const stop_interfaces__action__StopOrGo_GetResult_Response * lhs, const stop_interfaces__action__StopOrGo_GetResult_Response * rhs);

/// Copy a action/StopOrGo message.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Response__copy(
  const stop_interfaces__action__StopOrGo_GetResult_Response * input,
  stop_interfaces__action__StopOrGo_GetResult_Response * output);

/// Initialize array of action/StopOrGo messages.
/**
 * It allocates the memory for the number of elements and calls
 * stop_interfaces__action__StopOrGo_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Response__Sequence__init(stop_interfaces__action__StopOrGo_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_GetResult_Response__Sequence__fini(stop_interfaces__action__StopOrGo_GetResult_Response__Sequence * array);

/// Create array of action/StopOrGo messages.
/**
 * It allocates the memory for the array and calls
 * stop_interfaces__action__StopOrGo_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_GetResult_Response__Sequence *
stop_interfaces__action__StopOrGo_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_GetResult_Response__Sequence__destroy(stop_interfaces__action__StopOrGo_GetResult_Response__Sequence * array);

/// Check for action/StopOrGo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Response__Sequence__are_equal(const stop_interfaces__action__StopOrGo_GetResult_Response__Sequence * lhs, const stop_interfaces__action__StopOrGo_GetResult_Response__Sequence * rhs);

/// Copy an array of action/StopOrGo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_GetResult_Response__Sequence__copy(
  const stop_interfaces__action__StopOrGo_GetResult_Response__Sequence * input,
  stop_interfaces__action__StopOrGo_GetResult_Response__Sequence * output);

/// Initialize action/StopOrGo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stop_interfaces__action__StopOrGo_FeedbackMessage
 * )) before or use
 * stop_interfaces__action__StopOrGo_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_FeedbackMessage__init(stop_interfaces__action__StopOrGo_FeedbackMessage * msg);

/// Finalize action/StopOrGo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_FeedbackMessage__fini(stop_interfaces__action__StopOrGo_FeedbackMessage * msg);

/// Create action/StopOrGo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stop_interfaces__action__StopOrGo_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_FeedbackMessage *
stop_interfaces__action__StopOrGo_FeedbackMessage__create();

/// Destroy action/StopOrGo message.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_FeedbackMessage__destroy(stop_interfaces__action__StopOrGo_FeedbackMessage * msg);

/// Check for action/StopOrGo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_FeedbackMessage__are_equal(const stop_interfaces__action__StopOrGo_FeedbackMessage * lhs, const stop_interfaces__action__StopOrGo_FeedbackMessage * rhs);

/// Copy a action/StopOrGo message.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_FeedbackMessage__copy(
  const stop_interfaces__action__StopOrGo_FeedbackMessage * input,
  stop_interfaces__action__StopOrGo_FeedbackMessage * output);

/// Initialize array of action/StopOrGo messages.
/**
 * It allocates the memory for the number of elements and calls
 * stop_interfaces__action__StopOrGo_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence__init(stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence__fini(stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence * array);

/// Create array of action/StopOrGo messages.
/**
 * It allocates the memory for the array and calls
 * stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence *
stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/StopOrGo messages.
/**
 * It calls
 * stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
void
stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence__destroy(stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence * array);

/// Check for action/StopOrGo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence__are_equal(const stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence * lhs, const stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/StopOrGo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_stop_interfaces
bool
stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence__copy(
  const stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence * input,
  stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__FUNCTIONS_H_
