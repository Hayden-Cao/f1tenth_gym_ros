// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wall_follow_with_safety:action/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef WALL_FOLLOW_WITH_SAFETY__ACTION__DETAIL__STOP_OR_GO__TRAITS_HPP_
#define WALL_FOLLOW_WITH_SAFETY__ACTION__DETAIL__STOP_OR_GO__TRAITS_HPP_

#include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wall_follow_with_safety::action::StopOrGo_Goal>()
{
  return "wall_follow_with_safety::action::StopOrGo_Goal";
}

template<>
inline const char * name<wall_follow_with_safety::action::StopOrGo_Goal>()
{
  return "wall_follow_with_safety/action/StopOrGo_Goal";
}

template<>
struct has_fixed_size<wall_follow_with_safety::action::StopOrGo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wall_follow_with_safety::action::StopOrGo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wall_follow_with_safety::action::StopOrGo_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wall_follow_with_safety::action::StopOrGo_Result>()
{
  return "wall_follow_with_safety::action::StopOrGo_Result";
}

template<>
inline const char * name<wall_follow_with_safety::action::StopOrGo_Result>()
{
  return "wall_follow_with_safety/action/StopOrGo_Result";
}

template<>
struct has_fixed_size<wall_follow_with_safety::action::StopOrGo_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wall_follow_with_safety::action::StopOrGo_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wall_follow_with_safety::action::StopOrGo_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wall_follow_with_safety::action::StopOrGo_Feedback>()
{
  return "wall_follow_with_safety::action::StopOrGo_Feedback";
}

template<>
inline const char * name<wall_follow_with_safety::action::StopOrGo_Feedback>()
{
  return "wall_follow_with_safety/action/StopOrGo_Feedback";
}

template<>
struct has_fixed_size<wall_follow_with_safety::action::StopOrGo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wall_follow_with_safety::action::StopOrGo_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wall_follow_with_safety::action::StopOrGo_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "wall_follow_with_safety/action/detail/stop_or_go__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wall_follow_with_safety::action::StopOrGo_SendGoal_Request>()
{
  return "wall_follow_with_safety::action::StopOrGo_SendGoal_Request";
}

template<>
inline const char * name<wall_follow_with_safety::action::StopOrGo_SendGoal_Request>()
{
  return "wall_follow_with_safety/action/StopOrGo_SendGoal_Request";
}

template<>
struct has_fixed_size<wall_follow_with_safety::action::StopOrGo_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<wall_follow_with_safety::action::StopOrGo_Goal>::value> {};

template<>
struct has_bounded_size<wall_follow_with_safety::action::StopOrGo_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<wall_follow_with_safety::action::StopOrGo_Goal>::value> {};

template<>
struct is_message<wall_follow_with_safety::action::StopOrGo_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wall_follow_with_safety::action::StopOrGo_SendGoal_Response>()
{
  return "wall_follow_with_safety::action::StopOrGo_SendGoal_Response";
}

template<>
inline const char * name<wall_follow_with_safety::action::StopOrGo_SendGoal_Response>()
{
  return "wall_follow_with_safety/action/StopOrGo_SendGoal_Response";
}

template<>
struct has_fixed_size<wall_follow_with_safety::action::StopOrGo_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<wall_follow_with_safety::action::StopOrGo_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<wall_follow_with_safety::action::StopOrGo_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wall_follow_with_safety::action::StopOrGo_SendGoal>()
{
  return "wall_follow_with_safety::action::StopOrGo_SendGoal";
}

template<>
inline const char * name<wall_follow_with_safety::action::StopOrGo_SendGoal>()
{
  return "wall_follow_with_safety/action/StopOrGo_SendGoal";
}

template<>
struct has_fixed_size<wall_follow_with_safety::action::StopOrGo_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<wall_follow_with_safety::action::StopOrGo_SendGoal_Request>::value &&
    has_fixed_size<wall_follow_with_safety::action::StopOrGo_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<wall_follow_with_safety::action::StopOrGo_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<wall_follow_with_safety::action::StopOrGo_SendGoal_Request>::value &&
    has_bounded_size<wall_follow_with_safety::action::StopOrGo_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<wall_follow_with_safety::action::StopOrGo_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<wall_follow_with_safety::action::StopOrGo_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<wall_follow_with_safety::action::StopOrGo_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wall_follow_with_safety::action::StopOrGo_GetResult_Request>()
{
  return "wall_follow_with_safety::action::StopOrGo_GetResult_Request";
}

template<>
inline const char * name<wall_follow_with_safety::action::StopOrGo_GetResult_Request>()
{
  return "wall_follow_with_safety/action/StopOrGo_GetResult_Request";
}

template<>
struct has_fixed_size<wall_follow_with_safety::action::StopOrGo_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<wall_follow_with_safety::action::StopOrGo_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<wall_follow_with_safety::action::StopOrGo_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wall_follow_with_safety::action::StopOrGo_GetResult_Response>()
{
  return "wall_follow_with_safety::action::StopOrGo_GetResult_Response";
}

template<>
inline const char * name<wall_follow_with_safety::action::StopOrGo_GetResult_Response>()
{
  return "wall_follow_with_safety/action/StopOrGo_GetResult_Response";
}

template<>
struct has_fixed_size<wall_follow_with_safety::action::StopOrGo_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<wall_follow_with_safety::action::StopOrGo_Result>::value> {};

template<>
struct has_bounded_size<wall_follow_with_safety::action::StopOrGo_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<wall_follow_with_safety::action::StopOrGo_Result>::value> {};

template<>
struct is_message<wall_follow_with_safety::action::StopOrGo_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wall_follow_with_safety::action::StopOrGo_GetResult>()
{
  return "wall_follow_with_safety::action::StopOrGo_GetResult";
}

template<>
inline const char * name<wall_follow_with_safety::action::StopOrGo_GetResult>()
{
  return "wall_follow_with_safety/action/StopOrGo_GetResult";
}

template<>
struct has_fixed_size<wall_follow_with_safety::action::StopOrGo_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<wall_follow_with_safety::action::StopOrGo_GetResult_Request>::value &&
    has_fixed_size<wall_follow_with_safety::action::StopOrGo_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<wall_follow_with_safety::action::StopOrGo_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<wall_follow_with_safety::action::StopOrGo_GetResult_Request>::value &&
    has_bounded_size<wall_follow_with_safety::action::StopOrGo_GetResult_Response>::value
  >
{
};

template<>
struct is_service<wall_follow_with_safety::action::StopOrGo_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<wall_follow_with_safety::action::StopOrGo_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<wall_follow_with_safety::action::StopOrGo_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wall_follow_with_safety::action::StopOrGo_FeedbackMessage>()
{
  return "wall_follow_with_safety::action::StopOrGo_FeedbackMessage";
}

template<>
inline const char * name<wall_follow_with_safety::action::StopOrGo_FeedbackMessage>()
{
  return "wall_follow_with_safety/action/StopOrGo_FeedbackMessage";
}

template<>
struct has_fixed_size<wall_follow_with_safety::action::StopOrGo_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<wall_follow_with_safety::action::StopOrGo_Feedback>::value> {};

template<>
struct has_bounded_size<wall_follow_with_safety::action::StopOrGo_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<wall_follow_with_safety::action::StopOrGo_Feedback>::value> {};

template<>
struct is_message<wall_follow_with_safety::action::StopOrGo_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<wall_follow_with_safety::action::StopOrGo>
  : std::true_type
{
};

template<>
struct is_action_goal<wall_follow_with_safety::action::StopOrGo_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<wall_follow_with_safety::action::StopOrGo_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<wall_follow_with_safety::action::StopOrGo_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // WALL_FOLLOW_WITH_SAFETY__ACTION__DETAIL__STOP_OR_GO__TRAITS_HPP_
