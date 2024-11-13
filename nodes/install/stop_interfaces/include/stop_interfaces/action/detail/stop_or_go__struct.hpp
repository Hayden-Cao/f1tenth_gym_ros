// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stop_interfaces:action/StopOrGo.idl
// generated code does not contain a copyright notice

#ifndef STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__STRUCT_HPP_
#define STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__stop_interfaces__action__StopOrGo_Goal __attribute__((deprecated))
#else
# define DEPRECATED__stop_interfaces__action__StopOrGo_Goal __declspec(deprecated)
#endif

namespace stop_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StopOrGo_Goal_
{
  using Type = StopOrGo_Goal_<ContainerAllocator>;

  explicit StopOrGo_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
    }
  }

  explicit StopOrGo_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_Goal
    std::shared_ptr<stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_Goal
    std::shared_ptr<stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopOrGo_Goal_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopOrGo_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopOrGo_Goal_

// alias to use template instance with default allocator
using StopOrGo_Goal =
  stop_interfaces::action::StopOrGo_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace stop_interfaces


#ifndef _WIN32
# define DEPRECATED__stop_interfaces__action__StopOrGo_Result __attribute__((deprecated))
#else
# define DEPRECATED__stop_interfaces__action__StopOrGo_Result __declspec(deprecated)
#endif

namespace stop_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StopOrGo_Result_
{
  using Type = StopOrGo_Result_<ContainerAllocator>;

  explicit StopOrGo_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit StopOrGo_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stop_interfaces::action::StopOrGo_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const stop_interfaces::action::StopOrGo_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_Result
    std::shared_ptr<stop_interfaces::action::StopOrGo_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_Result
    std::shared_ptr<stop_interfaces::action::StopOrGo_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopOrGo_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopOrGo_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopOrGo_Result_

// alias to use template instance with default allocator
using StopOrGo_Result =
  stop_interfaces::action::StopOrGo_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace stop_interfaces


#ifndef _WIN32
# define DEPRECATED__stop_interfaces__action__StopOrGo_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__stop_interfaces__action__StopOrGo_Feedback __declspec(deprecated)
#endif

namespace stop_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StopOrGo_Feedback_
{
  using Type = StopOrGo_Feedback_<ContainerAllocator>;

  explicit StopOrGo_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_movement = "";
    }
  }

  explicit StopOrGo_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_movement(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_movement = "";
    }
  }

  // field types and members
  using _current_movement_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _current_movement_type current_movement;

  // setters for named parameter idiom
  Type & set__current_movement(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->current_movement = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_Feedback
    std::shared_ptr<stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_Feedback
    std::shared_ptr<stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopOrGo_Feedback_ & other) const
  {
    if (this->current_movement != other.current_movement) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopOrGo_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopOrGo_Feedback_

// alias to use template instance with default allocator
using StopOrGo_Feedback =
  stop_interfaces::action::StopOrGo_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace stop_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "stop_interfaces/action/detail/stop_or_go__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stop_interfaces__action__StopOrGo_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__stop_interfaces__action__StopOrGo_SendGoal_Request __declspec(deprecated)
#endif

namespace stop_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StopOrGo_SendGoal_Request_
{
  using Type = StopOrGo_SendGoal_Request_<ContainerAllocator>;

  explicit StopOrGo_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit StopOrGo_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const stop_interfaces::action::StopOrGo_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_SendGoal_Request
    std::shared_ptr<stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_SendGoal_Request
    std::shared_ptr<stop_interfaces::action::StopOrGo_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopOrGo_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopOrGo_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopOrGo_SendGoal_Request_

// alias to use template instance with default allocator
using StopOrGo_SendGoal_Request =
  stop_interfaces::action::StopOrGo_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace stop_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stop_interfaces__action__StopOrGo_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__stop_interfaces__action__StopOrGo_SendGoal_Response __declspec(deprecated)
#endif

namespace stop_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StopOrGo_SendGoal_Response_
{
  using Type = StopOrGo_SendGoal_Response_<ContainerAllocator>;

  explicit StopOrGo_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit StopOrGo_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_SendGoal_Response
    std::shared_ptr<stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_SendGoal_Response
    std::shared_ptr<stop_interfaces::action::StopOrGo_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopOrGo_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopOrGo_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopOrGo_SendGoal_Response_

// alias to use template instance with default allocator
using StopOrGo_SendGoal_Response =
  stop_interfaces::action::StopOrGo_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace stop_interfaces

namespace stop_interfaces
{

namespace action
{

struct StopOrGo_SendGoal
{
  using Request = stop_interfaces::action::StopOrGo_SendGoal_Request;
  using Response = stop_interfaces::action::StopOrGo_SendGoal_Response;
};

}  // namespace action

}  // namespace stop_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stop_interfaces__action__StopOrGo_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__stop_interfaces__action__StopOrGo_GetResult_Request __declspec(deprecated)
#endif

namespace stop_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StopOrGo_GetResult_Request_
{
  using Type = StopOrGo_GetResult_Request_<ContainerAllocator>;

  explicit StopOrGo_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit StopOrGo_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_GetResult_Request
    std::shared_ptr<stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_GetResult_Request
    std::shared_ptr<stop_interfaces::action::StopOrGo_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopOrGo_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopOrGo_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopOrGo_GetResult_Request_

// alias to use template instance with default allocator
using StopOrGo_GetResult_Request =
  stop_interfaces::action::StopOrGo_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace stop_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "stop_interfaces/action/detail/stop_or_go__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stop_interfaces__action__StopOrGo_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__stop_interfaces__action__StopOrGo_GetResult_Response __declspec(deprecated)
#endif

namespace stop_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StopOrGo_GetResult_Response_
{
  using Type = StopOrGo_GetResult_Response_<ContainerAllocator>;

  explicit StopOrGo_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit StopOrGo_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    stop_interfaces::action::StopOrGo_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const stop_interfaces::action::StopOrGo_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_GetResult_Response
    std::shared_ptr<stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_GetResult_Response
    std::shared_ptr<stop_interfaces::action::StopOrGo_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopOrGo_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopOrGo_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopOrGo_GetResult_Response_

// alias to use template instance with default allocator
using StopOrGo_GetResult_Response =
  stop_interfaces::action::StopOrGo_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace stop_interfaces

namespace stop_interfaces
{

namespace action
{

struct StopOrGo_GetResult
{
  using Request = stop_interfaces::action::StopOrGo_GetResult_Request;
  using Response = stop_interfaces::action::StopOrGo_GetResult_Response;
};

}  // namespace action

}  // namespace stop_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "stop_interfaces/action/detail/stop_or_go__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stop_interfaces__action__StopOrGo_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__stop_interfaces__action__StopOrGo_FeedbackMessage __declspec(deprecated)
#endif

namespace stop_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct StopOrGo_FeedbackMessage_
{
  using Type = StopOrGo_FeedbackMessage_<ContainerAllocator>;

  explicit StopOrGo_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit StopOrGo_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const stop_interfaces::action::StopOrGo_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_FeedbackMessage
    std::shared_ptr<stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stop_interfaces__action__StopOrGo_FeedbackMessage
    std::shared_ptr<stop_interfaces::action::StopOrGo_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopOrGo_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopOrGo_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopOrGo_FeedbackMessage_

// alias to use template instance with default allocator
using StopOrGo_FeedbackMessage =
  stop_interfaces::action::StopOrGo_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace stop_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace stop_interfaces
{

namespace action
{

struct StopOrGo
{
  /// The goal message defined in the action definition.
  using Goal = stop_interfaces::action::StopOrGo_Goal;
  /// The result message defined in the action definition.
  using Result = stop_interfaces::action::StopOrGo_Result;
  /// The feedback message defined in the action definition.
  using Feedback = stop_interfaces::action::StopOrGo_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = stop_interfaces::action::StopOrGo_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = stop_interfaces::action::StopOrGo_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = stop_interfaces::action::StopOrGo_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct StopOrGo StopOrGo;

}  // namespace action

}  // namespace stop_interfaces

#endif  // STOP_INTERFACES__ACTION__DETAIL__STOP_OR_GO__STRUCT_HPP_
