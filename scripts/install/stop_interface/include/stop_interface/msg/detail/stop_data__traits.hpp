// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stop_interface:msg/StopData.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACE__MSG__DETAIL__STOP_DATA__TRAITS_HPP_
#define STOP_INTERFACE__MSG__DETAIL__STOP_DATA__TRAITS_HPP_

#include "stop_interface/msg/detail/stop_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interface::msg::StopData>()
{
  return "stop_interface::msg::StopData";
}

template<>
inline const char * name<stop_interface::msg::StopData>()
{
  return "stop_interface/msg/StopData";
}

template<>
struct has_fixed_size<stop_interface::msg::StopData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stop_interface::msg::StopData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stop_interface::msg::StopData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STOP_INTERFACE__MSG__DETAIL__STOP_DATA__TRAITS_HPP_
