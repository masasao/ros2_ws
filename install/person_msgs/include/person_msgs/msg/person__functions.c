// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from person_msgs:msg/Person.idl
// generated code does not contain a copyright notice
#include "person_msgs/msg/person__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"

bool
person_msgs__msg__Person__init(person_msgs__msg__Person * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    person_msgs__msg__Person__fini(msg);
    return false;
  }
  // age
  return true;
}

void
person_msgs__msg__Person__fini(person_msgs__msg__Person * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // age
}

person_msgs__msg__Person *
person_msgs__msg__Person__create()
{
  person_msgs__msg__Person * msg = (person_msgs__msg__Person *)malloc(sizeof(person_msgs__msg__Person));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(person_msgs__msg__Person));
  bool success = person_msgs__msg__Person__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
person_msgs__msg__Person__destroy(person_msgs__msg__Person * msg)
{
  if (msg) {
    person_msgs__msg__Person__fini(msg);
  }
  free(msg);
}


bool
person_msgs__msg__Person__Sequence__init(person_msgs__msg__Person__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  person_msgs__msg__Person * data = NULL;
  if (size) {
    data = (person_msgs__msg__Person *)calloc(size, sizeof(person_msgs__msg__Person));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = person_msgs__msg__Person__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        person_msgs__msg__Person__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
person_msgs__msg__Person__Sequence__fini(person_msgs__msg__Person__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      person_msgs__msg__Person__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

person_msgs__msg__Person__Sequence *
person_msgs__msg__Person__Sequence__create(size_t size)
{
  person_msgs__msg__Person__Sequence * array = (person_msgs__msg__Person__Sequence *)malloc(sizeof(person_msgs__msg__Person__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = person_msgs__msg__Person__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
person_msgs__msg__Person__Sequence__destroy(person_msgs__msg__Person__Sequence * array)
{
  if (array) {
    person_msgs__msg__Person__Sequence__fini(array);
  }
  free(array);
}
