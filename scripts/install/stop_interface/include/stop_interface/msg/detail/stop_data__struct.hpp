// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stop_interface:msg/StopData.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACE__MSG__DETAIL__STOP_DATA__STRUCT_HPP_
#define STOP_INTERFACE__MSG__DETAIL__STOP_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__stop_interface__msg__StopData __attribute__((deprecated))
#else
# define DEPRECATED__stop_interface__msg__StopData __declspec(deprecated)
#endif

namespace stop_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StopData_
{
  using Type = StopData_<ContainerAllocator>;

  explicit StopData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ittc = 0.0;
      this->dist = 0.0;
    }
  }

  explicit StopData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ittc = 0.0;
      this->dist = 0.0;
    }
  }

  // field types and members
  using _ittc_type =
    double;
  _ittc_type ittc;
  using _dist_type =
    double;
  _dist_type dist;

  // setters for named parameter idiom
  Type & set__ittc(
    const double & _arg)
  {
    this->ittc = _arg;
    return *this;
  }
  Type & set__dist(
    const double & _arg)
  {
    this->dist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stop_interface::msg::StopData_<ContainerAllocator> *;
  using ConstRawPtr =
    const stop_interface::msg::StopData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stop_interface::msg::StopData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stop_interface::msg::StopData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stop_interface::msg::StopData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stop_interface::msg::StopData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stop_interface::msg::StopData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stop_interface::msg::StopData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stop_interface::msg::StopData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stop_interface::msg::StopData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stop_interface__msg__StopData
    std::shared_ptr<stop_interface::msg::StopData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stop_interface__msg__StopData
    std::shared_ptr<stop_interface::msg::StopData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopData_ & other) const
  {
    if (this->ittc != other.ittc) {
      return false;
    }
    if (this->dist != other.dist) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopData_

// alias to use template instance with default allocator
using StopData =
  stop_interface::msg::StopData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stop_interface

#endif  // STOP_INTERFACE__MSG__DETAIL__STOP_DATA__STRUCT_HPP_
