// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_msg:msg/ImuAcc.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__MSG__DETAIL__IMU_ACC__FUNCTIONS_H_
#define ROBOT_MSG__MSG__DETAIL__IMU_ACC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robot_msg/msg/rosidl_generator_c__visibility_control.h"

#include "robot_msg/msg/detail/imu_acc__struct.h"

/// Initialize msg/ImuAcc message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_msg__msg__ImuAcc
 * )) before or use
 * robot_msg__msg__ImuAcc__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
bool
robot_msg__msg__ImuAcc__init(robot_msg__msg__ImuAcc * msg);

/// Finalize msg/ImuAcc message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
void
robot_msg__msg__ImuAcc__fini(robot_msg__msg__ImuAcc * msg);

/// Create msg/ImuAcc message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_msg__msg__ImuAcc__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
robot_msg__msg__ImuAcc *
robot_msg__msg__ImuAcc__create();

/// Destroy msg/ImuAcc message.
/**
 * It calls
 * robot_msg__msg__ImuAcc__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
void
robot_msg__msg__ImuAcc__destroy(robot_msg__msg__ImuAcc * msg);

/// Check for msg/ImuAcc message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
bool
robot_msg__msg__ImuAcc__are_equal(const robot_msg__msg__ImuAcc * lhs, const robot_msg__msg__ImuAcc * rhs);

/// Copy a msg/ImuAcc message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
bool
robot_msg__msg__ImuAcc__copy(
  const robot_msg__msg__ImuAcc * input,
  robot_msg__msg__ImuAcc * output);

/// Initialize array of msg/ImuAcc messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_msg__msg__ImuAcc__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
bool
robot_msg__msg__ImuAcc__Sequence__init(robot_msg__msg__ImuAcc__Sequence * array, size_t size);

/// Finalize array of msg/ImuAcc messages.
/**
 * It calls
 * robot_msg__msg__ImuAcc__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
void
robot_msg__msg__ImuAcc__Sequence__fini(robot_msg__msg__ImuAcc__Sequence * array);

/// Create array of msg/ImuAcc messages.
/**
 * It allocates the memory for the array and calls
 * robot_msg__msg__ImuAcc__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
robot_msg__msg__ImuAcc__Sequence *
robot_msg__msg__ImuAcc__Sequence__create(size_t size);

/// Destroy array of msg/ImuAcc messages.
/**
 * It calls
 * robot_msg__msg__ImuAcc__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
void
robot_msg__msg__ImuAcc__Sequence__destroy(robot_msg__msg__ImuAcc__Sequence * array);

/// Check for msg/ImuAcc message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
bool
robot_msg__msg__ImuAcc__Sequence__are_equal(const robot_msg__msg__ImuAcc__Sequence * lhs, const robot_msg__msg__ImuAcc__Sequence * rhs);

/// Copy an array of msg/ImuAcc messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_msg
bool
robot_msg__msg__ImuAcc__Sequence__copy(
  const robot_msg__msg__ImuAcc__Sequence * input,
  robot_msg__msg__ImuAcc__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MSG__MSG__DETAIL__IMU_ACC__FUNCTIONS_H_
