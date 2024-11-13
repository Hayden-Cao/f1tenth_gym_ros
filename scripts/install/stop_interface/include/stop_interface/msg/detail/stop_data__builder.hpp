// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stop_interface:msg/StopData.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACE__MSG__DETAIL__STOP_DATA__BUILDER_HPP_
#define STOP_INTERFACE__MSG__DETAIL__STOP_DATA__BUILDER_HPP_

#include "stop_interface/msg/detail/stop_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace stop_interface
{

namespace msg
{

namespace builder
{

class Init_StopData_dist
{
public:
  explicit Init_StopData_dist(::stop_interface::msg::StopData & msg)
  : msg_(msg)
  {}
  ::stop_interface::msg::StopData dist(::stop_interface::msg::StopData::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stop_interface::msg::StopData msg_;
};

class Init_StopData_ittc
{
public:
  Init_StopData_ittc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopData_dist ittc(::stop_interface::msg::StopData::_ittc_type arg)
  {
    msg_.ittc = std::move(arg);
    return Init_StopData_dist(msg_);
  }

private:
  ::stop_interface::msg::StopData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stop_interface::msg::StopData>()
{
  return stop_interface::msg::builder::Init_StopData_ittc();
}

}  // namespace stop_interface

#endif  // STOP_INTERFACE__MSG__DETAIL__STOP_DATA__BUILDER_HPP_
