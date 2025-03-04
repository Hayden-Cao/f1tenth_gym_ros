// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:action/Stop.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__ACTION__DETAIL__STOP__BUILDER_HPP_
#define CUSTOM_INTERFACES__ACTION__DETAIL__STOP__BUILDER_HPP_

#include "custom_interfaces/action/detail/stop__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Stop_Goal_speed_zero
{
public:
  Init_Stop_Goal_speed_zero()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Stop_Goal speed_zero(::custom_interfaces::action::Stop_Goal::_speed_zero_type arg)
  {
    msg_.speed_zero = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Stop_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Stop_Goal>()
{
  return custom_interfaces::action::builder::Init_Stop_Goal_speed_zero();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Stop_Result_stopped
{
public:
  Init_Stop_Result_stopped()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Stop_Result stopped(::custom_interfaces::action::Stop_Result::_stopped_type arg)
  {
    msg_.stopped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Stop_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Stop_Result>()
{
  return custom_interfaces::action::builder::Init_Stop_Result_stopped();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Stop_Feedback_current_speed
{
public:
  Init_Stop_Feedback_current_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Stop_Feedback current_speed(::custom_interfaces::action::Stop_Feedback::_current_speed_type arg)
  {
    msg_.current_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Stop_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Stop_Feedback>()
{
  return custom_interfaces::action::builder::Init_Stop_Feedback_current_speed();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Stop_SendGoal_Request_goal
{
public:
  explicit Init_Stop_SendGoal_Request_goal(::custom_interfaces::action::Stop_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Stop_SendGoal_Request goal(::custom_interfaces::action::Stop_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Stop_SendGoal_Request msg_;
};

class Init_Stop_SendGoal_Request_goal_id
{
public:
  Init_Stop_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stop_SendGoal_Request_goal goal_id(::custom_interfaces::action::Stop_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Stop_SendGoal_Request_goal(msg_);
  }

private:
  ::custom_interfaces::action::Stop_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Stop_SendGoal_Request>()
{
  return custom_interfaces::action::builder::Init_Stop_SendGoal_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Stop_SendGoal_Response_stamp
{
public:
  explicit Init_Stop_SendGoal_Response_stamp(::custom_interfaces::action::Stop_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Stop_SendGoal_Response stamp(::custom_interfaces::action::Stop_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Stop_SendGoal_Response msg_;
};

class Init_Stop_SendGoal_Response_accepted
{
public:
  Init_Stop_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stop_SendGoal_Response_stamp accepted(::custom_interfaces::action::Stop_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Stop_SendGoal_Response_stamp(msg_);
  }

private:
  ::custom_interfaces::action::Stop_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Stop_SendGoal_Response>()
{
  return custom_interfaces::action::builder::Init_Stop_SendGoal_Response_accepted();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Stop_GetResult_Request_goal_id
{
public:
  Init_Stop_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Stop_GetResult_Request goal_id(::custom_interfaces::action::Stop_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Stop_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Stop_GetResult_Request>()
{
  return custom_interfaces::action::builder::Init_Stop_GetResult_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Stop_GetResult_Response_result
{
public:
  explicit Init_Stop_GetResult_Response_result(::custom_interfaces::action::Stop_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Stop_GetResult_Response result(::custom_interfaces::action::Stop_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Stop_GetResult_Response msg_;
};

class Init_Stop_GetResult_Response_status
{
public:
  Init_Stop_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stop_GetResult_Response_result status(::custom_interfaces::action::Stop_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Stop_GetResult_Response_result(msg_);
  }

private:
  ::custom_interfaces::action::Stop_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Stop_GetResult_Response>()
{
  return custom_interfaces::action::builder::Init_Stop_GetResult_Response_status();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Stop_FeedbackMessage_feedback
{
public:
  explicit Init_Stop_FeedbackMessage_feedback(::custom_interfaces::action::Stop_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Stop_FeedbackMessage feedback(::custom_interfaces::action::Stop_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Stop_FeedbackMessage msg_;
};

class Init_Stop_FeedbackMessage_goal_id
{
public:
  Init_Stop_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stop_FeedbackMessage_feedback goal_id(::custom_interfaces::action::Stop_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Stop_FeedbackMessage_feedback(msg_);
  }

private:
  ::custom_interfaces::action::Stop_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Stop_FeedbackMessage>()
{
  return custom_interfaces::action::builder::Init_Stop_FeedbackMessage_goal_id();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__ACTION__DETAIL__STOP__BUILDER_HPP_
