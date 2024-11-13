// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wall_follow_with_safety:action/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef WALL_FOLLOW_WITH_SAFETY__ACTION__DETAIL__STOP_OR_GO__BUILDER_HPP_
#define WALL_FOLLOW_WITH_SAFETY__ACTION__DETAIL__STOP_OR_GO__BUILDER_HPP_

#include "wall_follow_with_safety/action/detail/stop_or_go__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace wall_follow_with_safety
{

namespace action
{

namespace builder
{

class Init_StopOrGo_Goal_stop
{
public:
  Init_StopOrGo_Goal_stop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wall_follow_with_safety::action::StopOrGo_Goal stop(::wall_follow_with_safety::action::StopOrGo_Goal::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wall_follow_with_safety::action::StopOrGo_Goal>()
{
  return wall_follow_with_safety::action::builder::Init_StopOrGo_Goal_stop();
}

}  // namespace wall_follow_with_safety


namespace wall_follow_with_safety
{

namespace action
{

namespace builder
{

class Init_StopOrGo_Result_success
{
public:
  Init_StopOrGo_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wall_follow_with_safety::action::StopOrGo_Result success(::wall_follow_with_safety::action::StopOrGo_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wall_follow_with_safety::action::StopOrGo_Result>()
{
  return wall_follow_with_safety::action::builder::Init_StopOrGo_Result_success();
}

}  // namespace wall_follow_with_safety


namespace wall_follow_with_safety
{

namespace action
{

namespace builder
{

class Init_StopOrGo_Feedback_ittc
{
public:
  explicit Init_StopOrGo_Feedback_ittc(::wall_follow_with_safety::action::StopOrGo_Feedback & msg)
  : msg_(msg)
  {}
  ::wall_follow_with_safety::action::StopOrGo_Feedback ittc(::wall_follow_with_safety::action::StopOrGo_Feedback::_ittc_type arg)
  {
    msg_.ittc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_Feedback msg_;
};

class Init_StopOrGo_Feedback_current_distance_to_wall
{
public:
  Init_StopOrGo_Feedback_current_distance_to_wall()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOrGo_Feedback_ittc current_distance_to_wall(::wall_follow_with_safety::action::StopOrGo_Feedback::_current_distance_to_wall_type arg)
  {
    msg_.current_distance_to_wall = std::move(arg);
    return Init_StopOrGo_Feedback_ittc(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wall_follow_with_safety::action::StopOrGo_Feedback>()
{
  return wall_follow_with_safety::action::builder::Init_StopOrGo_Feedback_current_distance_to_wall();
}

}  // namespace wall_follow_with_safety


namespace wall_follow_with_safety
{

namespace action
{

namespace builder
{

class Init_StopOrGo_SendGoal_Request_goal
{
public:
  explicit Init_StopOrGo_SendGoal_Request_goal(::wall_follow_with_safety::action::StopOrGo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::wall_follow_with_safety::action::StopOrGo_SendGoal_Request goal(::wall_follow_with_safety::action::StopOrGo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_SendGoal_Request msg_;
};

class Init_StopOrGo_SendGoal_Request_goal_id
{
public:
  Init_StopOrGo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOrGo_SendGoal_Request_goal goal_id(::wall_follow_with_safety::action::StopOrGo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_StopOrGo_SendGoal_Request_goal(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wall_follow_with_safety::action::StopOrGo_SendGoal_Request>()
{
  return wall_follow_with_safety::action::builder::Init_StopOrGo_SendGoal_Request_goal_id();
}

}  // namespace wall_follow_with_safety


namespace wall_follow_with_safety
{

namespace action
{

namespace builder
{

class Init_StopOrGo_SendGoal_Response_stamp
{
public:
  explicit Init_StopOrGo_SendGoal_Response_stamp(::wall_follow_with_safety::action::StopOrGo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::wall_follow_with_safety::action::StopOrGo_SendGoal_Response stamp(::wall_follow_with_safety::action::StopOrGo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_SendGoal_Response msg_;
};

class Init_StopOrGo_SendGoal_Response_accepted
{
public:
  Init_StopOrGo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOrGo_SendGoal_Response_stamp accepted(::wall_follow_with_safety::action::StopOrGo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_StopOrGo_SendGoal_Response_stamp(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wall_follow_with_safety::action::StopOrGo_SendGoal_Response>()
{
  return wall_follow_with_safety::action::builder::Init_StopOrGo_SendGoal_Response_accepted();
}

}  // namespace wall_follow_with_safety


namespace wall_follow_with_safety
{

namespace action
{

namespace builder
{

class Init_StopOrGo_GetResult_Request_goal_id
{
public:
  Init_StopOrGo_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wall_follow_with_safety::action::StopOrGo_GetResult_Request goal_id(::wall_follow_with_safety::action::StopOrGo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wall_follow_with_safety::action::StopOrGo_GetResult_Request>()
{
  return wall_follow_with_safety::action::builder::Init_StopOrGo_GetResult_Request_goal_id();
}

}  // namespace wall_follow_with_safety


namespace wall_follow_with_safety
{

namespace action
{

namespace builder
{

class Init_StopOrGo_GetResult_Response_result
{
public:
  explicit Init_StopOrGo_GetResult_Response_result(::wall_follow_with_safety::action::StopOrGo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::wall_follow_with_safety::action::StopOrGo_GetResult_Response result(::wall_follow_with_safety::action::StopOrGo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_GetResult_Response msg_;
};

class Init_StopOrGo_GetResult_Response_status
{
public:
  Init_StopOrGo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOrGo_GetResult_Response_result status(::wall_follow_with_safety::action::StopOrGo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_StopOrGo_GetResult_Response_result(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wall_follow_with_safety::action::StopOrGo_GetResult_Response>()
{
  return wall_follow_with_safety::action::builder::Init_StopOrGo_GetResult_Response_status();
}

}  // namespace wall_follow_with_safety


namespace wall_follow_with_safety
{

namespace action
{

namespace builder
{

class Init_StopOrGo_FeedbackMessage_feedback
{
public:
  explicit Init_StopOrGo_FeedbackMessage_feedback(::wall_follow_with_safety::action::StopOrGo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::wall_follow_with_safety::action::StopOrGo_FeedbackMessage feedback(::wall_follow_with_safety::action::StopOrGo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_FeedbackMessage msg_;
};

class Init_StopOrGo_FeedbackMessage_goal_id
{
public:
  Init_StopOrGo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOrGo_FeedbackMessage_feedback goal_id(::wall_follow_with_safety::action::StopOrGo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_StopOrGo_FeedbackMessage_feedback(msg_);
  }

private:
  ::wall_follow_with_safety::action::StopOrGo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wall_follow_with_safety::action::StopOrGo_FeedbackMessage>()
{
  return wall_follow_with_safety::action::builder::Init_StopOrGo_FeedbackMessage_goal_id();
}

}  // namespace wall_follow_with_safety

#endif  // WALL_FOLLOW_WITH_SAFETY__ACTION__DETAIL__STOP_OR_GO__BUILDER_HPP_
