// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stop_interfaces:action/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__BUILDER_HPP_
#define STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__BUILDER_HPP_

#include "stop_interfaces/action/detail/stop_or_go__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace stop_interfaces
{

namespace action
{

namespace builder
{

class Init_StopOrGo_Goal_angle
{
public:
  explicit Init_StopOrGo_Goal_angle(::stop_interfaces::action::StopOrGo_Goal & msg)
  : msg_(msg)
  {}
  ::stop_interfaces::action::StopOrGo_Goal angle(::stop_interfaces::action::StopOrGo_Goal::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_Goal msg_;
};

class Init_StopOrGo_Goal_speed
{
public:
  Init_StopOrGo_Goal_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOrGo_Goal_angle speed(::stop_interfaces::action::StopOrGo_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_StopOrGo_Goal_angle(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stop_interfaces::action::StopOrGo_Goal>()
{
  return stop_interfaces::action::builder::Init_StopOrGo_Goal_speed();
}

}  // namespace stop_interfaces


namespace stop_interfaces
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
  ::stop_interfaces::action::StopOrGo_Result success(::stop_interfaces::action::StopOrGo_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stop_interfaces::action::StopOrGo_Result>()
{
  return stop_interfaces::action::builder::Init_StopOrGo_Result_success();
}

}  // namespace stop_interfaces


namespace stop_interfaces
{

namespace action
{

namespace builder
{

class Init_StopOrGo_Feedback_current_movement
{
public:
  Init_StopOrGo_Feedback_current_movement()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::stop_interfaces::action::StopOrGo_Feedback current_movement(::stop_interfaces::action::StopOrGo_Feedback::_current_movement_type arg)
  {
    msg_.current_movement = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stop_interfaces::action::StopOrGo_Feedback>()
{
  return stop_interfaces::action::builder::Init_StopOrGo_Feedback_current_movement();
}

}  // namespace stop_interfaces


namespace stop_interfaces
{

namespace action
{

namespace builder
{

class Init_StopOrGo_SendGoal_Request_goal
{
public:
  explicit Init_StopOrGo_SendGoal_Request_goal(::stop_interfaces::action::StopOrGo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::stop_interfaces::action::StopOrGo_SendGoal_Request goal(::stop_interfaces::action::StopOrGo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_SendGoal_Request msg_;
};

class Init_StopOrGo_SendGoal_Request_goal_id
{
public:
  Init_StopOrGo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOrGo_SendGoal_Request_goal goal_id(::stop_interfaces::action::StopOrGo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_StopOrGo_SendGoal_Request_goal(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stop_interfaces::action::StopOrGo_SendGoal_Request>()
{
  return stop_interfaces::action::builder::Init_StopOrGo_SendGoal_Request_goal_id();
}

}  // namespace stop_interfaces


namespace stop_interfaces
{

namespace action
{

namespace builder
{

class Init_StopOrGo_SendGoal_Response_stamp
{
public:
  explicit Init_StopOrGo_SendGoal_Response_stamp(::stop_interfaces::action::StopOrGo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::stop_interfaces::action::StopOrGo_SendGoal_Response stamp(::stop_interfaces::action::StopOrGo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_SendGoal_Response msg_;
};

class Init_StopOrGo_SendGoal_Response_accepted
{
public:
  Init_StopOrGo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOrGo_SendGoal_Response_stamp accepted(::stop_interfaces::action::StopOrGo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_StopOrGo_SendGoal_Response_stamp(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stop_interfaces::action::StopOrGo_SendGoal_Response>()
{
  return stop_interfaces::action::builder::Init_StopOrGo_SendGoal_Response_accepted();
}

}  // namespace stop_interfaces


namespace stop_interfaces
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
  ::stop_interfaces::action::StopOrGo_GetResult_Request goal_id(::stop_interfaces::action::StopOrGo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stop_interfaces::action::StopOrGo_GetResult_Request>()
{
  return stop_interfaces::action::builder::Init_StopOrGo_GetResult_Request_goal_id();
}

}  // namespace stop_interfaces


namespace stop_interfaces
{

namespace action
{

namespace builder
{

class Init_StopOrGo_GetResult_Response_result
{
public:
  explicit Init_StopOrGo_GetResult_Response_result(::stop_interfaces::action::StopOrGo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::stop_interfaces::action::StopOrGo_GetResult_Response result(::stop_interfaces::action::StopOrGo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_GetResult_Response msg_;
};

class Init_StopOrGo_GetResult_Response_status
{
public:
  Init_StopOrGo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOrGo_GetResult_Response_result status(::stop_interfaces::action::StopOrGo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_StopOrGo_GetResult_Response_result(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stop_interfaces::action::StopOrGo_GetResult_Response>()
{
  return stop_interfaces::action::builder::Init_StopOrGo_GetResult_Response_status();
}

}  // namespace stop_interfaces


namespace stop_interfaces
{

namespace action
{

namespace builder
{

class Init_StopOrGo_FeedbackMessage_feedback
{
public:
  explicit Init_StopOrGo_FeedbackMessage_feedback(::stop_interfaces::action::StopOrGo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::stop_interfaces::action::StopOrGo_FeedbackMessage feedback(::stop_interfaces::action::StopOrGo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_FeedbackMessage msg_;
};

class Init_StopOrGo_FeedbackMessage_goal_id
{
public:
  Init_StopOrGo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOrGo_FeedbackMessage_feedback goal_id(::stop_interfaces::action::StopOrGo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_StopOrGo_FeedbackMessage_feedback(msg_);
  }

private:
  ::stop_interfaces::action::StopOrGo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::stop_interfaces::action::StopOrGo_FeedbackMessage>()
{
  return stop_interfaces::action::builder::Init_StopOrGo_FeedbackMessage_goal_id();
}

}  // namespace stop_interfaces

#endif  // STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__BUILDER_HPP_
