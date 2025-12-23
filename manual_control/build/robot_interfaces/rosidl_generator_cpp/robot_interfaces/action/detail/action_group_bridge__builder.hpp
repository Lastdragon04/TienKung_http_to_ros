// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:action/ActionGroupBridge.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__ACTION__DETAIL__ACTION_GROUP_BRIDGE__BUILDER_HPP_
#define ROBOT_INTERFACES__ACTION__DETAIL__ACTION_GROUP_BRIDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/action/detail/action_group_bridge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ActionGroupBridge_Goal_efforts
{
public:
  explicit Init_ActionGroupBridge_Goal_efforts(::robot_interfaces::action::ActionGroupBridge_Goal & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::ActionGroupBridge_Goal efforts(::robot_interfaces::action::ActionGroupBridge_Goal::_efforts_type arg)
  {
    msg_.efforts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_Goal msg_;
};

class Init_ActionGroupBridge_Goal_velocities
{
public:
  explicit Init_ActionGroupBridge_Goal_velocities(::robot_interfaces::action::ActionGroupBridge_Goal & msg)
  : msg_(msg)
  {}
  Init_ActionGroupBridge_Goal_efforts velocities(::robot_interfaces::action::ActionGroupBridge_Goal::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_ActionGroupBridge_Goal_efforts(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_Goal msg_;
};

class Init_ActionGroupBridge_Goal_positions
{
public:
  explicit Init_ActionGroupBridge_Goal_positions(::robot_interfaces::action::ActionGroupBridge_Goal & msg)
  : msg_(msg)
  {}
  Init_ActionGroupBridge_Goal_velocities positions(::robot_interfaces::action::ActionGroupBridge_Goal::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_ActionGroupBridge_Goal_velocities(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_Goal msg_;
};

class Init_ActionGroupBridge_Goal_joint_names
{
public:
  explicit Init_ActionGroupBridge_Goal_joint_names(::robot_interfaces::action::ActionGroupBridge_Goal & msg)
  : msg_(msg)
  {}
  Init_ActionGroupBridge_Goal_positions joint_names(::robot_interfaces::action::ActionGroupBridge_Goal::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_ActionGroupBridge_Goal_positions(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_Goal msg_;
};

class Init_ActionGroupBridge_Goal_header
{
public:
  Init_ActionGroupBridge_Goal_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupBridge_Goal_joint_names header(::robot_interfaces::action::ActionGroupBridge_Goal::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActionGroupBridge_Goal_joint_names(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::ActionGroupBridge_Goal>()
{
  return robot_interfaces::action::builder::Init_ActionGroupBridge_Goal_header();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ActionGroupBridge_Result_flag
{
public:
  Init_ActionGroupBridge_Result_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::action::ActionGroupBridge_Result flag(::robot_interfaces::action::ActionGroupBridge_Result::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::ActionGroupBridge_Result>()
{
  return robot_interfaces::action::builder::Init_ActionGroupBridge_Result_flag();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ActionGroupBridge_Feedback_efforts
{
public:
  explicit Init_ActionGroupBridge_Feedback_efforts(::robot_interfaces::action::ActionGroupBridge_Feedback & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::ActionGroupBridge_Feedback efforts(::robot_interfaces::action::ActionGroupBridge_Feedback::_efforts_type arg)
  {
    msg_.efforts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_Feedback msg_;
};

class Init_ActionGroupBridge_Feedback_velocities
{
public:
  explicit Init_ActionGroupBridge_Feedback_velocities(::robot_interfaces::action::ActionGroupBridge_Feedback & msg)
  : msg_(msg)
  {}
  Init_ActionGroupBridge_Feedback_efforts velocities(::robot_interfaces::action::ActionGroupBridge_Feedback::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_ActionGroupBridge_Feedback_efforts(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_Feedback msg_;
};

class Init_ActionGroupBridge_Feedback_positions
{
public:
  explicit Init_ActionGroupBridge_Feedback_positions(::robot_interfaces::action::ActionGroupBridge_Feedback & msg)
  : msg_(msg)
  {}
  Init_ActionGroupBridge_Feedback_velocities positions(::robot_interfaces::action::ActionGroupBridge_Feedback::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_ActionGroupBridge_Feedback_velocities(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_Feedback msg_;
};

class Init_ActionGroupBridge_Feedback_joint_names
{
public:
  Init_ActionGroupBridge_Feedback_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupBridge_Feedback_positions joint_names(::robot_interfaces::action::ActionGroupBridge_Feedback::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_ActionGroupBridge_Feedback_positions(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::ActionGroupBridge_Feedback>()
{
  return robot_interfaces::action::builder::Init_ActionGroupBridge_Feedback_joint_names();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ActionGroupBridge_SendGoal_Request_goal
{
public:
  explicit Init_ActionGroupBridge_SendGoal_Request_goal(::robot_interfaces::action::ActionGroupBridge_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::ActionGroupBridge_SendGoal_Request goal(::robot_interfaces::action::ActionGroupBridge_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_SendGoal_Request msg_;
};

class Init_ActionGroupBridge_SendGoal_Request_goal_id
{
public:
  Init_ActionGroupBridge_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupBridge_SendGoal_Request_goal goal_id(::robot_interfaces::action::ActionGroupBridge_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActionGroupBridge_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::ActionGroupBridge_SendGoal_Request>()
{
  return robot_interfaces::action::builder::Init_ActionGroupBridge_SendGoal_Request_goal_id();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ActionGroupBridge_SendGoal_Response_stamp
{
public:
  explicit Init_ActionGroupBridge_SendGoal_Response_stamp(::robot_interfaces::action::ActionGroupBridge_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::ActionGroupBridge_SendGoal_Response stamp(::robot_interfaces::action::ActionGroupBridge_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_SendGoal_Response msg_;
};

class Init_ActionGroupBridge_SendGoal_Response_accepted
{
public:
  Init_ActionGroupBridge_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupBridge_SendGoal_Response_stamp accepted(::robot_interfaces::action::ActionGroupBridge_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ActionGroupBridge_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::ActionGroupBridge_SendGoal_Response>()
{
  return robot_interfaces::action::builder::Init_ActionGroupBridge_SendGoal_Response_accepted();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ActionGroupBridge_GetResult_Request_goal_id
{
public:
  Init_ActionGroupBridge_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::action::ActionGroupBridge_GetResult_Request goal_id(::robot_interfaces::action::ActionGroupBridge_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::ActionGroupBridge_GetResult_Request>()
{
  return robot_interfaces::action::builder::Init_ActionGroupBridge_GetResult_Request_goal_id();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ActionGroupBridge_GetResult_Response_result
{
public:
  explicit Init_ActionGroupBridge_GetResult_Response_result(::robot_interfaces::action::ActionGroupBridge_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::ActionGroupBridge_GetResult_Response result(::robot_interfaces::action::ActionGroupBridge_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_GetResult_Response msg_;
};

class Init_ActionGroupBridge_GetResult_Response_status
{
public:
  Init_ActionGroupBridge_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupBridge_GetResult_Response_result status(::robot_interfaces::action::ActionGroupBridge_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ActionGroupBridge_GetResult_Response_result(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::ActionGroupBridge_GetResult_Response>()
{
  return robot_interfaces::action::builder::Init_ActionGroupBridge_GetResult_Response_status();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ActionGroupBridge_FeedbackMessage_feedback
{
public:
  explicit Init_ActionGroupBridge_FeedbackMessage_feedback(::robot_interfaces::action::ActionGroupBridge_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::ActionGroupBridge_FeedbackMessage feedback(::robot_interfaces::action::ActionGroupBridge_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_FeedbackMessage msg_;
};

class Init_ActionGroupBridge_FeedbackMessage_goal_id
{
public:
  Init_ActionGroupBridge_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionGroupBridge_FeedbackMessage_feedback goal_id(::robot_interfaces::action::ActionGroupBridge_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActionGroupBridge_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_interfaces::action::ActionGroupBridge_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::ActionGroupBridge_FeedbackMessage>()
{
  return robot_interfaces::action::builder::Init_ActionGroupBridge_FeedbackMessage_goal_id();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__ACTION__DETAIL__ACTION_GROUP_BRIDGE__BUILDER_HPP_
