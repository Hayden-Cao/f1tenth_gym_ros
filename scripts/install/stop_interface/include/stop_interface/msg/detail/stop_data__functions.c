// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stop_interface:msg/StopData.idl
// generated code does not contain a copyright notice
#include "stop_interface/msg/detail/stop_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
stop_interface__msg__StopData__init(stop_interface__msg__StopData * msg)
{
  if (!msg) {
    return false;
  }
  // ittc
  // dist
  return true;
}

void
stop_interface__msg__StopData__fini(stop_interface__msg__StopData * msg)
{
  if (!msg) {
    return;
  }
  // ittc
  // dist
}

bool
stop_interface__msg__StopData__are_equal(const stop_interface__msg__StopData * lhs, const stop_interface__msg__StopData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ittc
  if (lhs->ittc != rhs->ittc) {
    return false;
  }
  // dist
  if (lhs->dist != rhs->dist) {
    return false;
  }
  return true;
}

bool
stop_interface__msg__StopData__copy(
  const stop_interface__msg__StopData * input,
  stop_interface__msg__StopData * output)
{
  if (!input || !output) {
    return false;
  }
  // ittc
  output->ittc = input->ittc;
  // dist
  output->dist = input->dist;
  return true;
}

stop_interface__msg__StopData *
stop_interface__msg__StopData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stop_interface__msg__StopData * msg = (stop_interface__msg__StopData *)allocator.allocate(sizeof(stop_interface__msg__StopData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stop_interface__msg__StopData));
  bool success = stop_interface__msg__StopData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stop_interface__msg__StopData__destroy(stop_interface__msg__StopData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stop_interface__msg__StopData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stop_interface__msg__StopData__Sequence__init(stop_interface__msg__StopData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stop_interface__msg__StopData * data = NULL;

  if (size) {
    data = (stop_interface__msg__StopData *)allocator.zero_allocate(size, sizeof(stop_interface__msg__StopData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stop_interface__msg__StopData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stop_interface__msg__StopData__fini(&data[i - 1]);
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
stop_interface__msg__StopData__Sequence__fini(stop_interface__msg__StopData__Sequence * array)
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
      stop_interface__msg__StopData__fini(&array->data[i]);
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

stop_interface__msg__StopData__Sequence *
stop_interface__msg__StopData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stop_interface__msg__StopData__Sequence * array = (stop_interface__msg__StopData__Sequence *)allocator.allocate(sizeof(stop_interface__msg__StopData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stop_interface__msg__StopData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stop_interface__msg__StopData__Sequence__destroy(stop_interface__msg__StopData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stop_interface__msg__StopData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stop_interface__msg__StopData__Sequence__are_equal(const stop_interface__msg__StopData__Sequence * lhs, const stop_interface__msg__StopData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stop_interface__msg__StopData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stop_interface__msg__StopData__Sequence__copy(
  const stop_interface__msg__StopData__Sequence * input,
  stop_interface__msg__StopData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stop_interface__msg__StopData);
    stop_interface__msg__StopData * data =
      (stop_interface__msg__StopData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stop_interface__msg__StopData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          stop_interface__msg__StopData__fini(&data[i]);
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
    if (!stop_interface__msg__StopData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
