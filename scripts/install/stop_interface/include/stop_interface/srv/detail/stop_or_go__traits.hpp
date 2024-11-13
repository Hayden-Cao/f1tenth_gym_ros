// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stop_interface:srv/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__TRAITS_HPP_
#define STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__TRAITS_HPP_

#include "stop_interface/srv/detail/stop_or_go__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interface::srv::StopOrGo_Request>()
{
  return "stop_interface::srv::StopOrGo_Request";
}

template<>
inline const char * name<stop_interface::srv::StopOrGo_Request>()
{
  return "stop_interface/srv/StopOrGo_Request";
}

template<>
struct has_fixed_size<stop_interface::srv::StopOrGo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stop_interface::srv::StopOrGo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stop_interface::srv::StopOrGo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interface::srv::StopOrGo_Response>()
{
  return "stop_interface::srv::StopOrGo_Response";
}

template<>
inline const char * name<stop_interface::srv::StopOrGo_Response>()
{
  return "stop_interface/srv/StopOrGo_Response";
}

template<>
struct has_fixed_size<stop_interface::srv::StopOrGo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stop_interface::srv::StopOrGo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stop_interface::srv::StopOrGo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stop_interface::srv::StopOrGo>()
{
  return "stop_interface::srv::StopOrGo";
}

template<>
inline const char * name<stop_interface::srv::StopOrGo>()
{
  return "stop_interface/srv/StopOrGo";
}

template<>
struct has_fixed_size<stop_interface::srv::StopOrGo>
  : std::integral_constant<
    bool,
    has_fixed_size<stop_interface::srv::StopOrGo_Request>::value &&
    has_fixed_size<stop_interface::srv::StopOrGo_Response>::value
  >
{
};

template<>
struct has_bounded_size<stop_interface::srv::StopOrGo>
  : std::integral_constant<
    bool,
    has_bounded_size<stop_interface::srv::StopOrGo_Request>::value &&
    has_bounded_size<stop_interface::srv::StopOrGo_Response>::value
  >
{
};

template<>
struct is_service<stop_interface::srv::StopOrGo>
  : std::true_type
{
};

template<>
struct is_service_request<stop_interface::srv::StopOrGo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<stop_interface::srv::StopOrGo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__TRAITS_HPP_
