// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wall_follow_with_safety:action/StopOrGo.idl
// generated code does not contain a copyright notice
#include "wall_follow_with_safety/action/detail/stop_or_go__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wall_follow_with_safety__action__StopOrGo_Goal__init(wall_follow_with_safety__action__StopOrGo_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // stop
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_Goal__fini(wall_follow_with_safety__action__StopOrGo_Goal * msg)
{
  if (!msg) {
    return;
  }
  // stop
}

bool
wall_follow_with_safety__action__StopOrGo_Goal__are_equal(const wall_follow_with_safety__action__StopOrGo_Goal * lhs, const wall_follow_with_safety__action__StopOrGo_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stop
  if (lhs->stop != rhs->stop) {
    return false;
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_Goal__copy(
  const wall_follow_with_safety__action__StopOrGo_Goal * input,
  wall_follow_with_safety__action__StopOrGo_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // stop
  output->stop = input->stop;
  return true;
}

wall_follow_with_safety__action__StopOrGo_Goal *
wall_follow_with_safety__action__StopOrGo_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_Goal * msg = (wall_follow_with_safety__action__StopOrGo_Goal *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wall_follow_with_safety__action__StopOrGo_Goal));
  bool success = wall_follow_with_safety__action__StopOrGo_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wall_follow_with_safety__action__StopOrGo_Goal__destroy(wall_follow_with_safety__action__StopOrGo_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wall_follow_with_safety__action__StopOrGo_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wall_follow_with_safety__action__StopOrGo_Goal__Sequence__init(wall_follow_with_safety__action__StopOrGo_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_Goal * data = NULL;

  if (size) {
    data = (wall_follow_with_safety__action__StopOrGo_Goal *)allocator.zero_allocate(size, sizeof(wall_follow_with_safety__action__StopOrGo_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wall_follow_with_safety__action__StopOrGo_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wall_follow_with_safety__action__StopOrGo_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_Goal__Sequence__fini(wall_follow_with_safety__action__StopOrGo_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wall_follow_with_safety__action__StopOrGo_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wall_follow_with_safety__action__StopOrGo_Goal__Sequence *
wall_follow_with_safety__action__StopOrGo_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_Goal__Sequence * array = (wall_follow_with_safety__action__StopOrGo_Goal__Sequence *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wall_follow_with_safety__action__StopOrGo_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wall_follow_with_safety__action__StopOrGo_Goal__Sequence__destroy(wall_follow_with_safety__action__StopOrGo_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wall_follow_with_safety__action__StopOrGo_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wall_follow_with_safety__action__StopOrGo_Goal__Sequence__are_equal(const wall_follow_with_safety__action__StopOrGo_Goal__Sequence * lhs, const wall_follow_with_safety__action__StopOrGo_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_Goal__Sequence__copy(
  const wall_follow_with_safety__action__StopOrGo_Goal__Sequence * input,
  wall_follow_with_safety__action__StopOrGo_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wall_follow_with_safety__action__StopOrGo_Goal);
    wall_follow_with_safety__action__StopOrGo_Goal * data =
      (wall_follow_with_safety__action__StopOrGo_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wall_follow_with_safety__action__StopOrGo_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          wall_follow_with_safety__action__StopOrGo_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
wall_follow_with_safety__action__StopOrGo_Result__init(wall_follow_with_safety__action__StopOrGo_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_Result__fini(wall_follow_with_safety__action__StopOrGo_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
wall_follow_with_safety__action__StopOrGo_Result__are_equal(const wall_follow_with_safety__action__StopOrGo_Result * lhs, const wall_follow_with_safety__action__StopOrGo_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_Result__copy(
  const wall_follow_with_safety__action__StopOrGo_Result * input,
  wall_follow_with_safety__action__StopOrGo_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

wall_follow_with_safety__action__StopOrGo_Result *
wall_follow_with_safety__action__StopOrGo_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_Result * msg = (wall_follow_with_safety__action__StopOrGo_Result *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wall_follow_with_safety__action__StopOrGo_Result));
  bool success = wall_follow_with_safety__action__StopOrGo_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wall_follow_with_safety__action__StopOrGo_Result__destroy(wall_follow_with_safety__action__StopOrGo_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wall_follow_with_safety__action__StopOrGo_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wall_follow_with_safety__action__StopOrGo_Result__Sequence__init(wall_follow_with_safety__action__StopOrGo_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_Result * data = NULL;

  if (size) {
    data = (wall_follow_with_safety__action__StopOrGo_Result *)allocator.zero_allocate(size, sizeof(wall_follow_with_safety__action__StopOrGo_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wall_follow_with_safety__action__StopOrGo_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wall_follow_with_safety__action__StopOrGo_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_Result__Sequence__fini(wall_follow_with_safety__action__StopOrGo_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wall_follow_with_safety__action__StopOrGo_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wall_follow_with_safety__action__StopOrGo_Result__Sequence *
wall_follow_with_safety__action__StopOrGo_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_Result__Sequence * array = (wall_follow_with_safety__action__StopOrGo_Result__Sequence *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wall_follow_with_safety__action__StopOrGo_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wall_follow_with_safety__action__StopOrGo_Result__Sequence__destroy(wall_follow_with_safety__action__StopOrGo_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wall_follow_with_safety__action__StopOrGo_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wall_follow_with_safety__action__StopOrGo_Result__Sequence__are_equal(const wall_follow_with_safety__action__StopOrGo_Result__Sequence * lhs, const wall_follow_with_safety__action__StopOrGo_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_Result__Sequence__copy(
  const wall_follow_with_safety__action__StopOrGo_Result__Sequence * input,
  wall_follow_with_safety__action__StopOrGo_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wall_follow_with_safety__action__StopOrGo_Result);
    wall_follow_with_safety__action__StopOrGo_Result * data =
      (wall_follow_with_safety__action__StopOrGo_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wall_follow_with_safety__action__StopOrGo_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          wall_follow_with_safety__action__StopOrGo_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
wall_follow_with_safety__action__StopOrGo_Feedback__init(wall_follow_with_safety__action__StopOrGo_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_distance_to_wall
  // ittc
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_Feedback__fini(wall_follow_with_safety__action__StopOrGo_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_distance_to_wall
  // ittc
}

bool
wall_follow_with_safety__action__StopOrGo_Feedback__are_equal(const wall_follow_with_safety__action__StopOrGo_Feedback * lhs, const wall_follow_with_safety__action__StopOrGo_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_distance_to_wall
  if (lhs->current_distance_to_wall != rhs->current_distance_to_wall) {
    return false;
  }
  // ittc
  if (lhs->ittc != rhs->ittc) {
    return false;
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_Feedback__copy(
  const wall_follow_with_safety__action__StopOrGo_Feedback * input,
  wall_follow_with_safety__action__StopOrGo_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_distance_to_wall
  output->current_distance_to_wall = input->current_distance_to_wall;
  // ittc
  output->ittc = input->ittc;
  return true;
}

wall_follow_with_safety__action__StopOrGo_Feedback *
wall_follow_with_safety__action__StopOrGo_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_Feedback * msg = (wall_follow_with_safety__action__StopOrGo_Feedback *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wall_follow_with_safety__action__StopOrGo_Feedback));
  bool success = wall_follow_with_safety__action__StopOrGo_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wall_follow_with_safety__action__StopOrGo_Feedback__destroy(wall_follow_with_safety__action__StopOrGo_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wall_follow_with_safety__action__StopOrGo_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wall_follow_with_safety__action__StopOrGo_Feedback__Sequence__init(wall_follow_with_safety__action__StopOrGo_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_Feedback * data = NULL;

  if (size) {
    data = (wall_follow_with_safety__action__StopOrGo_Feedback *)allocator.zero_allocate(size, sizeof(wall_follow_with_safety__action__StopOrGo_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wall_follow_with_safety__action__StopOrGo_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wall_follow_with_safety__action__StopOrGo_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_Feedback__Sequence__fini(wall_follow_with_safety__action__StopOrGo_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wall_follow_with_safety__action__StopOrGo_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wall_follow_with_safety__action__StopOrGo_Feedback__Sequence *
wall_follow_with_safety__action__StopOrGo_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_Feedback__Sequence * array = (wall_follow_with_safety__action__StopOrGo_Feedback__Sequence *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wall_follow_with_safety__action__StopOrGo_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wall_follow_with_safety__action__StopOrGo_Feedback__Sequence__destroy(wall_follow_with_safety__action__StopOrGo_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wall_follow_with_safety__action__StopOrGo_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wall_follow_with_safety__action__StopOrGo_Feedback__Sequence__are_equal(const wall_follow_with_safety__action__StopOrGo_Feedback__Sequence * lhs, const wall_follow_with_safety__action__StopOrGo_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_Feedback__Sequence__copy(
  const wall_follow_with_safety__action__StopOrGo_Feedback__Sequence * input,
  wall_follow_with_safety__action__StopOrGo_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wall_follow_with_safety__action__StopOrGo_Feedback);
    wall_follow_with_safety__action__StopOrGo_Feedback * data =
      (wall_follow_with_safety__action__StopOrGo_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wall_follow_with_safety__action__StopOrGo_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          wall_follow_with_safety__action__StopOrGo_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__functions.h"

bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__init(wall_follow_with_safety__action__StopOrGo_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    wall_follow_with_safety__action__StopOrGo_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!wall_follow_with_safety__action__StopOrGo_Goal__init(&msg->goal)) {
    wall_follow_with_safety__action__StopOrGo_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__fini(wall_follow_with_safety__action__StopOrGo_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  wall_follow_with_safety__action__StopOrGo_Goal__fini(&msg->goal);
}

bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__are_equal(const wall_follow_with_safety__action__StopOrGo_SendGoal_Request * lhs, const wall_follow_with_safety__action__StopOrGo_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!wall_follow_with_safety__action__StopOrGo_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__copy(
  const wall_follow_with_safety__action__StopOrGo_SendGoal_Request * input,
  wall_follow_with_safety__action__StopOrGo_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!wall_follow_with_safety__action__StopOrGo_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

wall_follow_with_safety__action__StopOrGo_SendGoal_Request *
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_SendGoal_Request * msg = (wall_follow_with_safety__action__StopOrGo_SendGoal_Request *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wall_follow_with_safety__action__StopOrGo_SendGoal_Request));
  bool success = wall_follow_with_safety__action__StopOrGo_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__destroy(wall_follow_with_safety__action__StopOrGo_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wall_follow_with_safety__action__StopOrGo_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence__init(wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_SendGoal_Request * data = NULL;

  if (size) {
    data = (wall_follow_with_safety__action__StopOrGo_SendGoal_Request *)allocator.zero_allocate(size, sizeof(wall_follow_with_safety__action__StopOrGo_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wall_follow_with_safety__action__StopOrGo_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wall_follow_with_safety__action__StopOrGo_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence__fini(wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wall_follow_with_safety__action__StopOrGo_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence *
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence * array = (wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence__destroy(wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence__are_equal(const wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence * lhs, const wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence__copy(
  const wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence * input,
  wall_follow_with_safety__action__StopOrGo_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wall_follow_with_safety__action__StopOrGo_SendGoal_Request);
    wall_follow_with_safety__action__StopOrGo_SendGoal_Request * data =
      (wall_follow_with_safety__action__StopOrGo_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wall_follow_with_safety__action__StopOrGo_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          wall_follow_with_safety__action__StopOrGo_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__init(wall_follow_with_safety__action__StopOrGo_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    wall_follow_with_safety__action__StopOrGo_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__fini(wall_follow_with_safety__action__StopOrGo_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__are_equal(const wall_follow_with_safety__action__StopOrGo_SendGoal_Response * lhs, const wall_follow_with_safety__action__StopOrGo_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__copy(
  const wall_follow_with_safety__action__StopOrGo_SendGoal_Response * input,
  wall_follow_with_safety__action__StopOrGo_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

wall_follow_with_safety__action__StopOrGo_SendGoal_Response *
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_SendGoal_Response * msg = (wall_follow_with_safety__action__StopOrGo_SendGoal_Response *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wall_follow_with_safety__action__StopOrGo_SendGoal_Response));
  bool success = wall_follow_with_safety__action__StopOrGo_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__destroy(wall_follow_with_safety__action__StopOrGo_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wall_follow_with_safety__action__StopOrGo_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence__init(wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_SendGoal_Response * data = NULL;

  if (size) {
    data = (wall_follow_with_safety__action__StopOrGo_SendGoal_Response *)allocator.zero_allocate(size, sizeof(wall_follow_with_safety__action__StopOrGo_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wall_follow_with_safety__action__StopOrGo_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wall_follow_with_safety__action__StopOrGo_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence__fini(wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wall_follow_with_safety__action__StopOrGo_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence *
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence * array = (wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence__destroy(wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence__are_equal(const wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence * lhs, const wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence__copy(
  const wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence * input,
  wall_follow_with_safety__action__StopOrGo_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wall_follow_with_safety__action__StopOrGo_SendGoal_Response);
    wall_follow_with_safety__action__StopOrGo_SendGoal_Response * data =
      (wall_follow_with_safety__action__StopOrGo_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wall_follow_with_safety__action__StopOrGo_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          wall_follow_with_safety__action__StopOrGo_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
wall_follow_with_safety__action__StopOrGo_GetResult_Request__init(wall_follow_with_safety__action__StopOrGo_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    wall_follow_with_safety__action__StopOrGo_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_GetResult_Request__fini(wall_follow_with_safety__action__StopOrGo_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
wall_follow_with_safety__action__StopOrGo_GetResult_Request__are_equal(const wall_follow_with_safety__action__StopOrGo_GetResult_Request * lhs, const wall_follow_with_safety__action__StopOrGo_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_GetResult_Request__copy(
  const wall_follow_with_safety__action__StopOrGo_GetResult_Request * input,
  wall_follow_with_safety__action__StopOrGo_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

wall_follow_with_safety__action__StopOrGo_GetResult_Request *
wall_follow_with_safety__action__StopOrGo_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_GetResult_Request * msg = (wall_follow_with_safety__action__StopOrGo_GetResult_Request *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wall_follow_with_safety__action__StopOrGo_GetResult_Request));
  bool success = wall_follow_with_safety__action__StopOrGo_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wall_follow_with_safety__action__StopOrGo_GetResult_Request__destroy(wall_follow_with_safety__action__StopOrGo_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wall_follow_with_safety__action__StopOrGo_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence__init(wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_GetResult_Request * data = NULL;

  if (size) {
    data = (wall_follow_with_safety__action__StopOrGo_GetResult_Request *)allocator.zero_allocate(size, sizeof(wall_follow_with_safety__action__StopOrGo_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wall_follow_with_safety__action__StopOrGo_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wall_follow_with_safety__action__StopOrGo_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence__fini(wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wall_follow_with_safety__action__StopOrGo_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence *
wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence * array = (wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence__destroy(wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence__are_equal(const wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence * lhs, const wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence__copy(
  const wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence * input,
  wall_follow_with_safety__action__StopOrGo_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wall_follow_with_safety__action__StopOrGo_GetResult_Request);
    wall_follow_with_safety__action__StopOrGo_GetResult_Request * data =
      (wall_follow_with_safety__action__StopOrGo_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wall_follow_with_safety__action__StopOrGo_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          wall_follow_with_safety__action__StopOrGo_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__functions.h"

bool
wall_follow_with_safety__action__StopOrGo_GetResult_Response__init(wall_follow_with_safety__action__StopOrGo_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!wall_follow_with_safety__action__StopOrGo_Result__init(&msg->result)) {
    wall_follow_with_safety__action__StopOrGo_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_GetResult_Response__fini(wall_follow_with_safety__action__StopOrGo_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  wall_follow_with_safety__action__StopOrGo_Result__fini(&msg->result);
}

bool
wall_follow_with_safety__action__StopOrGo_GetResult_Response__are_equal(const wall_follow_with_safety__action__StopOrGo_GetResult_Response * lhs, const wall_follow_with_safety__action__StopOrGo_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!wall_follow_with_safety__action__StopOrGo_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_GetResult_Response__copy(
  const wall_follow_with_safety__action__StopOrGo_GetResult_Response * input,
  wall_follow_with_safety__action__StopOrGo_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!wall_follow_with_safety__action__StopOrGo_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

wall_follow_with_safety__action__StopOrGo_GetResult_Response *
wall_follow_with_safety__action__StopOrGo_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_GetResult_Response * msg = (wall_follow_with_safety__action__StopOrGo_GetResult_Response *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wall_follow_with_safety__action__StopOrGo_GetResult_Response));
  bool success = wall_follow_with_safety__action__StopOrGo_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wall_follow_with_safety__action__StopOrGo_GetResult_Response__destroy(wall_follow_with_safety__action__StopOrGo_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wall_follow_with_safety__action__StopOrGo_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence__init(wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_GetResult_Response * data = NULL;

  if (size) {
    data = (wall_follow_with_safety__action__StopOrGo_GetResult_Response *)allocator.zero_allocate(size, sizeof(wall_follow_with_safety__action__StopOrGo_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wall_follow_with_safety__action__StopOrGo_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wall_follow_with_safety__action__StopOrGo_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence__fini(wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wall_follow_with_safety__action__StopOrGo_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence *
wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence * array = (wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence__destroy(wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence__are_equal(const wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence * lhs, const wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence__copy(
  const wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence * input,
  wall_follow_with_safety__action__StopOrGo_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wall_follow_with_safety__action__StopOrGo_GetResult_Response);
    wall_follow_with_safety__action__StopOrGo_GetResult_Response * data =
      (wall_follow_with_safety__action__StopOrGo_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wall_follow_with_safety__action__StopOrGo_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          wall_follow_with_safety__action__StopOrGo_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "wall_follow_with_safety/action/detail/stop_or_go__functions.h"

bool
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__init(wall_follow_with_safety__action__StopOrGo_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    wall_follow_with_safety__action__StopOrGo_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!wall_follow_with_safety__action__StopOrGo_Feedback__init(&msg->feedback)) {
    wall_follow_with_safety__action__StopOrGo_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__fini(wall_follow_with_safety__action__StopOrGo_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  wall_follow_with_safety__action__StopOrGo_Feedback__fini(&msg->feedback);
}

bool
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__are_equal(const wall_follow_with_safety__action__StopOrGo_FeedbackMessage * lhs, const wall_follow_with_safety__action__StopOrGo_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!wall_follow_with_safety__action__StopOrGo_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__copy(
  const wall_follow_with_safety__action__StopOrGo_FeedbackMessage * input,
  wall_follow_with_safety__action__StopOrGo_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!wall_follow_with_safety__action__StopOrGo_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

wall_follow_with_safety__action__StopOrGo_FeedbackMessage *
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_FeedbackMessage * msg = (wall_follow_with_safety__action__StopOrGo_FeedbackMessage *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wall_follow_with_safety__action__StopOrGo_FeedbackMessage));
  bool success = wall_follow_with_safety__action__StopOrGo_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__destroy(wall_follow_with_safety__action__StopOrGo_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wall_follow_with_safety__action__StopOrGo_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence__init(wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_FeedbackMessage * data = NULL;

  if (size) {
    data = (wall_follow_with_safety__action__StopOrGo_FeedbackMessage *)allocator.zero_allocate(size, sizeof(wall_follow_with_safety__action__StopOrGo_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wall_follow_with_safety__action__StopOrGo_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wall_follow_with_safety__action__StopOrGo_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence__fini(wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wall_follow_with_safety__action__StopOrGo_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence *
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence * array = (wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence *)allocator.allocate(sizeof(wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence__destroy(wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence__are_equal(const wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence * lhs, const wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence__copy(
  const wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence * input,
  wall_follow_with_safety__action__StopOrGo_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wall_follow_with_safety__action__StopOrGo_FeedbackMessage);
    wall_follow_with_safety__action__StopOrGo_FeedbackMessage * data =
      (wall_follow_with_safety__action__StopOrGo_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wall_follow_with_safety__action__StopOrGo_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          wall_follow_with_safety__action__StopOrGo_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wall_follow_with_safety__action__StopOrGo_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
