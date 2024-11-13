// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stop_interfaces:action/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__STRUCT_H_
#define STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/StopOrGo in the package stop_interfaces.
typedef struct stop_interfaces__action__StopOrGo_Goal
{
  float speed;
} stop_interfaces__action__StopOrGo_Goal;

// Struct for a sequence of stop_interfaces__action__StopOrGo_Goal.
typedef struct stop_interfaces__action__StopOrGo_Goal__Sequence
{
  stop_interfaces__action__StopOrGo_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stop_interfaces__action__StopOrGo_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/StopOrGo in the package stop_interfaces.
typedef struct stop_interfaces__action__StopOrGo_Result
{
  bool success;
} stop_interfaces__action__StopOrGo_Result;

// Struct for a sequence of stop_interfaces__action__StopOrGo_Result.
typedef struct stop_interfaces__action__StopOrGo_Result__Sequence
{
  stop_interfaces__action__StopOrGo_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stop_interfaces__action__StopOrGo_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_movement'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/StopOrGo in the package stop_interfaces.
typedef struct stop_interfaces__action__StopOrGo_Feedback
{
  rosidl_runtime_c__String current_movement;
} stop_interfaces__action__StopOrGo_Feedback;

// Struct for a sequence of stop_interfaces__action__StopOrGo_Feedback.
typedef struct stop_interfaces__action__StopOrGo_Feedback__Sequence
{
  stop_interfaces__action__StopOrGo_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stop_interfaces__action__StopOrGo_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "stop_interfaces/action/detail/stop_or_go__struct.h"

// Struct defined in action/StopOrGo in the package stop_interfaces.
typedef struct stop_interfaces__action__StopOrGo_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  stop_interfaces__action__StopOrGo_Goal goal;
} stop_interfaces__action__StopOrGo_SendGoal_Request;

// Struct for a sequence of stop_interfaces__action__StopOrGo_SendGoal_Request.
typedef struct stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence
{
  stop_interfaces__action__StopOrGo_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stop_interfaces__action__StopOrGo_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/StopOrGo in the package stop_interfaces.
typedef struct stop_interfaces__action__StopOrGo_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} stop_interfaces__action__StopOrGo_SendGoal_Response;

// Struct for a sequence of stop_interfaces__action__StopOrGo_SendGoal_Response.
typedef struct stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence
{
  stop_interfaces__action__StopOrGo_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stop_interfaces__action__StopOrGo_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/StopOrGo in the package stop_interfaces.
typedef struct stop_interfaces__action__StopOrGo_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} stop_interfaces__action__StopOrGo_GetResult_Request;

// Struct for a sequence of stop_interfaces__action__StopOrGo_GetResult_Request.
typedef struct stop_interfaces__action__StopOrGo_GetResult_Request__Sequence
{
  stop_interfaces__action__StopOrGo_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stop_interfaces__action__StopOrGo_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "stop_interfaces/action/detail/stop_or_go__struct.h"

// Struct defined in action/StopOrGo in the package stop_interfaces.
typedef struct stop_interfaces__action__StopOrGo_GetResult_Response
{
  int8_t status;
  stop_interfaces__action__StopOrGo_Result result;
} stop_interfaces__action__StopOrGo_GetResult_Response;

// Struct for a sequence of stop_interfaces__action__StopOrGo_GetResult_Response.
typedef struct stop_interfaces__action__StopOrGo_GetResult_Response__Sequence
{
  stop_interfaces__action__StopOrGo_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stop_interfaces__action__StopOrGo_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "stop_interfaces/action/detail/stop_or_go__struct.h"

// Struct defined in action/StopOrGo in the package stop_interfaces.
typedef struct stop_interfaces__action__StopOrGo_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  stop_interfaces__action__StopOrGo_Feedback feedback;
} stop_interfaces__action__StopOrGo_FeedbackMessage;

// Struct for a sequence of stop_interfaces__action__StopOrGo_FeedbackMessage.
typedef struct stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence
{
  stop_interfaces__action__StopOrGo_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stop_interfaces__action__StopOrGo_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__STRUCT_H_
