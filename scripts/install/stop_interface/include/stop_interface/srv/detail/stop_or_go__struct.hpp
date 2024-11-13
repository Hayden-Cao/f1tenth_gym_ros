// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stop_interface:srv/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__STRUCT_HPP_
#define STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__stop_interface__srv__StopOrGo_Request __attribute__((deprecated))
#else
# define DEPRECATED__stop_interface__srv__StopOrGo_Request __declspec(deprecated)
#endif

namespace stop_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StopOrGo_Request_
{
  using Type = StopOrGo_Request_<ContainerAllocator>;

  explicit StopOrGo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ittc = 0.0;
      this->dist = 0.0;
    }
  }

  explicit StopOrGo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    stop_interface::srv::StopOrGo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const stop_interface::srv::StopOrGo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stop_interface::srv::StopOrGo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stop_interface::srv::StopOrGo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stop_interface::srv::StopOrGo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stop_interface::srv::StopOrGo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stop_interface::srv::StopOrGo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stop_interface::srv::StopOrGo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stop_interface::srv::StopOrGo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stop_interface::srv::StopOrGo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stop_interface__srv__StopOrGo_Request
    std::shared_ptr<stop_interface::srv::StopOrGo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stop_interface__srv__StopOrGo_Request
    std::shared_ptr<stop_interface::srv::StopOrGo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopOrGo_Request_ & other) const
  {
    if (this->ittc != other.ittc) {
      return false;
    }
    if (this->dist != other.dist) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopOrGo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopOrGo_Request_

// alias to use template instance with default allocator
using StopOrGo_Request =
  stop_interface::srv::StopOrGo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace stop_interface


#ifndef _WIN32
# define DEPRECATED__stop_interface__srv__StopOrGo_Response __attribute__((deprecated))
#else
# define DEPRECATED__stop_interface__srv__StopOrGo_Response __declspec(deprecated)
#endif

namespace stop_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StopOrGo_Response_
{
  using Type = StopOrGo_Response_<ContainerAllocator>;

  explicit StopOrGo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_flag = false;
    }
  }

  explicit StopOrGo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_flag = false;
    }
  }

  // field types and members
  using _stop_flag_type =
    bool;
  _stop_flag_type stop_flag;

  // setters for named parameter idiom
  Type & set__stop_flag(
    const bool & _arg)
  {
    this->stop_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stop_interface::srv::StopOrGo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const stop_interface::srv::StopOrGo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stop_interface::srv::StopOrGo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stop_interface::srv::StopOrGo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stop_interface::srv::StopOrGo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stop_interface::srv::StopOrGo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stop_interface::srv::StopOrGo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stop_interface::srv::StopOrGo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stop_interface::srv::StopOrGo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stop_interface::srv::StopOrGo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stop_interface__srv__StopOrGo_Response
    std::shared_ptr<stop_interface::srv::StopOrGo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stop_interface__srv__StopOrGo_Response
    std::shared_ptr<stop_interface::srv::StopOrGo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopOrGo_Response_ & other) const
  {
    if (this->stop_flag != other.stop_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopOrGo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopOrGo_Response_

// alias to use template instance with default allocator
using StopOrGo_Response =
  stop_interface::srv::StopOrGo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace stop_interface

namespace stop_interface
{

namespace srv
{

struct StopOrGo
{
  using Request = stop_interface::srv::StopOrGo_Request;
  using Response = stop_interface::srv::StopOrGo_Response;
};

}  // namespace srv

}  // namespace stop_interface

#endif  // STOP_INTERFACE__SRV__DETAIL__STOP_OR_GO__STRUCT_HPP_
