// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice
#include "person_msgs/srv/query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"

bool
person_msgs__srv__Query_Request__init(person_msgs__srv__Query_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    person_msgs__srv__Query_Request__fini(msg);
    return false;
  }
  return true;
}

void
person_msgs__srv__Query_Request__fini(person_msgs__srv__Query_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_generator_c__String__fini(&msg->name);
}

person_msgs__srv__Query_Request *
person_msgs__srv__Query_Request__create()
{
  person_msgs__srv__Query_Request * msg = (person_msgs__srv__Query_Request *)malloc(sizeof(person_msgs__srv__Query_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(person_msgs__srv__Query_Request));
  bool success = person_msgs__srv__Query_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
person_msgs__srv__Query_Request__destroy(person_msgs__srv__Query_Request * msg)
{
  if (msg) {
    person_msgs__srv__Query_Request__fini(msg);
  }
  free(msg);
}


bool
person_msgs__srv__Query_Request__Sequence__init(person_msgs__srv__Query_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  person_msgs__srv__Query_Request * data = NULL;
  if (size) {
    data = (person_msgs__srv__Query_Request *)calloc(size, sizeof(person_msgs__srv__Query_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = person_msgs__srv__Query_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        person_msgs__srv__Query_Request__fini(&data[i - 1]);
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
person_msgs__srv__Query_Request__Sequence__fini(person_msgs__srv__Query_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      person_msgs__srv__Query_Request__fini(&array->data[i]);
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

person_msgs__srv__Query_Request__Sequence *
person_msgs__srv__Query_Request__Sequence__create(size_t size)
{
  person_msgs__srv__Query_Request__Sequence * array = (person_msgs__srv__Query_Request__Sequence *)malloc(sizeof(person_msgs__srv__Query_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = person_msgs__srv__Query_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
person_msgs__srv__Query_Request__Sequence__destroy(person_msgs__srv__Query_Request__Sequence * array)
{
  if (array) {
    person_msgs__srv__Query_Request__Sequence__fini(array);
  }
  free(array);
}


bool
person_msgs__srv__Query_Response__init(person_msgs__srv__Query_Response * msg)
{
  if (!msg) {
    return false;
  }
  // age
  return true;
}

void
person_msgs__srv__Query_Response__fini(person_msgs__srv__Query_Response * msg)
{
  if (!msg) {
    return;
  }
  // age
}

person_msgs__srv__Query_Response *
person_msgs__srv__Query_Response__create()
{
  person_msgs__srv__Query_Response * msg = (person_msgs__srv__Query_Response *)malloc(sizeof(person_msgs__srv__Query_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(person_msgs__srv__Query_Response));
  bool success = person_msgs__srv__Query_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
person_msgs__srv__Query_Response__destroy(person_msgs__srv__Query_Response * msg)
{
  if (msg) {
    person_msgs__srv__Query_Response__fini(msg);
  }
  free(msg);
}


bool
person_msgs__srv__Query_Response__Sequence__init(person_msgs__srv__Query_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  person_msgs__srv__Query_Response * data = NULL;
  if (size) {
    data = (person_msgs__srv__Query_Response *)calloc(size, sizeof(person_msgs__srv__Query_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = person_msgs__srv__Query_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        person_msgs__srv__Query_Response__fini(&data[i - 1]);
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
person_msgs__srv__Query_Response__Sequence__fini(person_msgs__srv__Query_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      person_msgs__srv__Query_Response__fini(&array->data[i]);
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

person_msgs__srv__Query_Response__Sequence *
person_msgs__srv__Query_Response__Sequence__create(size_t size)
{
  person_msgs__srv__Query_Response__Sequence * array = (person_msgs__srv__Query_Response__Sequence *)malloc(sizeof(person_msgs__srv__Query_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = person_msgs__srv__Query_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
person_msgs__srv__Query_Response__Sequence__destroy(person_msgs__srv__Query_Response__Sequence * array)
{
  if (array) {
    person_msgs__srv__Query_Response__Sequence__fini(array);
  }
  free(array);
}
