// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stop_interfaces:action/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__TRAITS_HPP_
#define STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__TRAITS_HPP_

#include "stop_interfaces/action/detail/stop_or_go__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interfaces::action::StopOrGo_Goal>()
{
  return "stop_interfaces::action::StopOrGo_Goal";
}

template<>
inline const char * name<stop_interfaces::action::StopOrGo_Goal>()
{
  return "stop_interfaces/action/StopOrGo_Goal";
}

template<>
struct has_fixed_size<stop_interfaces::action::StopOrGo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stop_interfaces::action::StopOrGo_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stop_interfaces::action::StopOrGo_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interfaces::action::StopOrGo_Result>()
{
  return "stop_interfaces::action::StopOrGo_Result";
}

template<>
inline const char * name<stop_interfaces::action::StopOrGo_Result>()
{
  return "stop_interfaces/action/StopOrGo_Result";
}

template<>
struct has_fixed_size<stop_interfaces::action::StopOrGo_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stop_interfaces::action::StopOrGo_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stop_interfaces::action::StopOrGo_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interfaces::action::StopOrGo_Feedback>()
{
  return "stop_interfaces::action::StopOrGo_Feedback";
}

template<>
inline const char * name<stop_interfaces::action::StopOrGo_Feedback>()
{
  return "stop_interfaces/action/StopOrGo_Feedback";
}

template<>
struct has_fixed_size<stop_interfaces::action::StopOrGo_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<stop_interfaces::action::StopOrGo_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<stop_interfaces::action::StopOrGo_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "stop_interfaces/action/detail/stop_or_go__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interfaces::action::StopOrGo_SendGoal_Request>()
{
  return "stop_interfaces::action::StopOrGo_SendGoal_Request";
}

template<>
inline const char * name<stop_interfaces::action::StopOrGo_SendGoal_Request>()
{
  return "stop_interfaces/action/StopOrGo_SendGoal_Request";
}

template<>
struct has_fixed_size<stop_interfaces::action::StopOrGo_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<stop_interfaces::action::StopOrGo_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<stop_interfaces::action::StopOrGo_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<stop_interfaces::action::StopOrGo_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<stop_interfaces::action::StopOrGo_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interfaces::action::StopOrGo_SendGoal_Response>()
{
  return "stop_interfaces::action::StopOrGo_SendGoal_Response";
}

template<>
inline const char * name<stop_interfaces::action::StopOrGo_SendGoal_Response>()
{
  return "stop_interfaces/action/StopOrGo_SendGoal_Response";
}

template<>
struct has_fixed_size<stop_interfaces::action::StopOrGo_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<stop_interfaces::action::StopOrGo_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<stop_interfaces::action::StopOrGo_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interfaces::action::StopOrGo_SendGoal>()
{
  return "stop_interfaces::action::StopOrGo_SendGoal";
}

template<>
inline const char * name<stop_interfaces::action::StopOrGo_SendGoal>()
{
  return "stop_interfaces/action/StopOrGo_SendGoal";
}

template<>
struct has_fixed_size<stop_interfaces::action::StopOrGo_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<stop_interfaces::action::StopOrGo_SendGoal_Request>::value &&
    has_fixed_size<stop_interfaces::action::StopOrGo_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<stop_interfaces::action::StopOrGo_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<stop_interfaces::action::StopOrGo_SendGoal_Request>::value &&
    has_bounded_size<stop_interfaces::action::StopOrGo_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<stop_interfaces::action::StopOrGo_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<stop_interfaces::action::StopOrGo_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<stop_interfaces::action::StopOrGo_SendGoal_Response>
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
inline const char * data_type<stop_interfaces::action::StopOrGo_GetResult_Request>()
{
  return "stop_interfaces::action::StopOrGo_GetResult_Request";
}

template<>
inline const char * name<stop_interfaces::action::StopOrGo_GetResult_Request>()
{
  return "stop_interfaces/action/StopOrGo_GetResult_Request";
}

template<>
struct has_fixed_size<stop_interfaces::action::StopOrGo_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<stop_interfaces::action::StopOrGo_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<stop_interfaces::action::StopOrGo_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "stop_interfaces/action/detail/stop_or_go__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interfaces::action::StopOrGo_GetResult_Response>()
{
  return "stop_interfaces::action::StopOrGo_GetResult_Response";
}

template<>
inline const char * name<stop_interfaces::action::StopOrGo_GetResult_Response>()
{
  return "stop_interfaces/action/StopOrGo_GetResult_Response";
}

template<>
struct has_fixed_size<stop_interfaces::action::StopOrGo_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<stop_interfaces::action::StopOrGo_Result>::value> {};

template<>
struct has_bounded_size<stop_interfaces::action::StopOrGo_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<stop_interfaces::action::StopOrGo_Result>::value> {};

template<>
struct is_message<stop_interfaces::action::StopOrGo_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interfaces::action::StopOrGo_GetResult>()
{
  return "stop_interfaces::action::StopOrGo_GetResult";
}

template<>
inline const char * name<stop_interfaces::action::StopOrGo_GetResult>()
{
  return "stop_interfaces/action/StopOrGo_GetResult";
}

template<>
struct has_fixed_size<stop_interfaces::action::StopOrGo_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<stop_interfaces::action::StopOrGo_GetResult_Request>::value &&
    has_fixed_size<stop_interfaces::action::StopOrGo_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<stop_interfaces::action::StopOrGo_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<stop_interfaces::action::StopOrGo_GetResult_Request>::value &&
    has_bounded_size<stop_interfaces::action::StopOrGo_GetResult_Response>::value
  >
{
};

template<>
struct is_service<stop_interfaces::action::StopOrGo_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<stop_interfaces::action::StopOrGo_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<stop_interfaces::action::StopOrGo_GetResult_Response>
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
// #include "stop_interfaces/action/detail/stop_or_go__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interfaces::action::StopOrGo_FeedbackMessage>()
{
  return "stop_interfaces::action::StopOrGo_FeedbackMessage";
}

template<>
inline const char * name<stop_interfaces::action::StopOrGo_FeedbackMessage>()
{
  return "stop_interfaces/action/StopOrGo_FeedbackMessage";
}

template<>
struct has_fixed_size<stop_interfaces::action::StopOrGo_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<stop_interfaces::action::StopOrGo_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<stop_interfaces::action::StopOrGo_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<stop_interfaces::action::StopOrGo_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<stop_interfaces::action::StopOrGo_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<stop_interfaces::action::StopOrGo>
  : std::true_type
{
};

template<>
struct is_action_goal<stop_interfaces::action::StopOrGo_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<stop_interfaces::action::StopOrGo_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<stop_interfaces::action::StopOrGo_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__TRAITS_HPP_
