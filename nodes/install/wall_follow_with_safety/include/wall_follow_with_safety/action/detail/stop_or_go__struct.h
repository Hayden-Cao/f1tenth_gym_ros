// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wall_follow_with_safety:action/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef WALL_FOLLOW_WITH_SAFETY__ACTION__DETAIL__STOP_OR_GO__STRUCT_H_
#define WALL_FOLLOW_WITH_SAFETY__ACTION__DETAIL__STOP_OR_GO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/StopOrGo in the package wall_follow_with_safety.
typedef struct wall_follow_with_safety__action__StopOrGo_Goal
{
  bool stop;
} wall_follow_with_safety__action__StopOrGo_Goal;

// Struct for a sequence of wall_follow_with_safety__action__StopOrGo_Goal.
typedef struct wall_follow_with_safety__action__StopOrGo_Goal__Sequence
{
  wall_follow_with_safety__action__StopOrGo_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wall_follow_with_safety__action__StopOrGo_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/StopOrGo in the package wall_follow_with_safety.
typedef struct wall_follow_with_safety__action__StopOrGo_Result
{
  bool success;
} wall_follow_with_safety__action__StopOrGo_Result;

// Struct for a sequence of wall_follow_with_safety__action__StopOrGo_Result.
typedef struct wall_follow_with_safety__action__StopOrGo_Result__Sequence
{
  wall_follow_with_safety__action__StopOrGo_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wall_follow_with_safety__action__StopOrGo_Result__Sequence;


// Constants defined in the message

// Struct defined in action/StopOrGo in the package wall_follow_with_safety.
typedef struct wall_follow_with_safety__action__StopOrGo_Feedback
{
  float current_distance_to_wall;
  float ittc;
} wall_follow_with_safety__action__StopOrGo_Feedback;

// Struct for a sequence of wall_follow_with_safety__action__StopOrGo_Feedback.
typedef struct wall_follow_with_safety__action__StopOrGo_Feedback__Sequence
{
  wall_follow_with_safety__action__StopOrGo_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wall_follow_with_safety__action__StopOrGo_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "wall_follow_with_safety/action/detail/stop_or_go__struct.h"

// Struct defined in action/StopOrGo in the package wall_follow_with_safety.
typedef struct wall_follow_with_safety__action__StopOrGo_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  wall_follow_with_safety__action__StopOrGo_Goal goal;
} wall_follow_with_safety__action__StopOrGo_SendGoal_Request;

// Struct for a sequence of wall_follow_with_safety__action__StopOrGo_SendGoal_Request.
typedef struct wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence
{
  wall_follow_with_safety__action__StopOrGo_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/StopOrGo in the package wall_follow_with_safety.
typedef struct wall_follow_with_safety__action__StopOrGo_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} wall_follow_with_safety__action__StopOrGo_SendGoal_Response;

// Struct for a sequence of wall_follow_with_safety__action__StopOrGo_SendGoal_Response.
typedef struct wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence
{
  wall_follow_with_safety__action__StopOrGo_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/StopOrGo in the package wall_follow_with_safety.
typedef struct wall_follow_with_safety__action__StopOrGo_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} wall_follow_with_safety__action__StopOrGo_GetResult_Request;

// Struct for a sequence of wall_follow_with_safety__action__StopOrGo_GetResult_Request.
typedef struct wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence
{
  wall_follow_with_safety__action__StopOrGo_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__struct.h"

// Struct defined in action/StopOrGo in the package wall_follow_with_safety.
typedef struct wall_follow_with_safety__action__StopOrGo_GetResult_Response
{
  int8_t status;
  wall_follow_with_safety__action__StopOrGo_Result result;
} wall_follow_with_safety__action__StopOrGo_GetResult_Response;

// Struct for a sequence of wall_follow_with_safety__action__StopOrGo_GetResult_Response.
typedef struct wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence
{
  wall_follow_with_safety__action__StopOrGo_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__struct.h"

// Struct defined in action/StopOrGo in the package wall_follow_with_safety.
typedef struct wall_follow_with_safety__action__StopOrGo_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  wall_follow_with_safety__action__StopOrGo_Feedback feedback;
} wall_follow_with_safety__action__StopOrGo_FeedbackMessage;

// Struct for a sequence of wall_follow_with_safety__action__StopOrGo_FeedbackMessage.
typedef struct wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence
{
  wall_follow_with_safety__action__StopOrGo_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WALL_FOLLOW_WITH_SAFETY__ACTION__DETAIL__STOP_OR_GO__STRUCT_H_
