// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stop_interface:srv/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__BUILDER_HPP_
#define STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__BUILDER_HPP_

#include "stop_interface/srv/detail/stop_or_go__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace stop_interface
{

namespace srv
{

namespace builder
{

class Init_StopOrGo_Request_dist
{
public:
  explicit Init_StopOrGo_Request_dist(::stop_interface::srv::StopOrGo_Request & msg)
  : msg_(msg)
  {}
  ::stop_interface::srv::StopOrGo_Request dist(::stop_interface::srv::StopOrGo_Request::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stop_interface::srv::StopOrGo_Request msg_;
};

class Init_StopOrGo_Request_ittc
{
public:
  Init_StopOrGo_Request_ittc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOrGo_Request_dist ittc(::stop_interface::srv::StopOrGo_Request::_ittc_type arg)
  {
    msg_.ittc = std::move(arg);
    return Init_StopOrGo_Request_dist(msg_);
  }

private:
  ::stop_interface::srv::StopOrGo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stop_interface::srv::StopOrGo_Request>()
{
  return stop_interface::srv::builder::Init_StopOrGo_Request_ittc();
}

}  // namespace stop_interface


namespace stop_interface
{

namespace srv
{

namespace builder
{

class Init_StopOrGo_Response_stop_flag
{
public:
  Init_StopOrGo_Response_stop_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::stop_interface::srv::StopOrGo_Response stop_flag(::stop_interface::srv::StopOrGo_Response::_stop_flag_type arg)
  {
    msg_.stop_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stop_interface::srv::StopOrGo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stop_interface::srv::StopOrGo_Response>()
{
  return stop_interface::srv::builder::Init_StopOrGo_Response_stop_flag();
}

}  // namespace stop_interface

#endif  // STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__BUILDER_HPP_
