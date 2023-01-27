// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__SRV__QUERY__FUNCTIONS_H_
#define PERSON_MSGS__SRV__QUERY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "person_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "person_msgs/srv/query__struct.h"

/// Initialize srv/Query message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * person_msgs__srv__Query_Request
 * )) before or use
 * person_msgs__srv__Query_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
bool
person_msgs__srv__Query_Request__init(person_msgs__srv__Query_Request * msg);

/// Finalize srv/Query message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
void
person_msgs__srv__Query_Request__fini(person_msgs__srv__Query_Request * msg);

/// Create srv/Query message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * person_msgs__srv__Query_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
person_msgs__srv__Query_Request *
person_msgs__srv__Query_Request__create();

/// Destroy srv/Query message.
/**
 * It calls
 * person_msgs__srv__Query_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
void
person_msgs__srv__Query_Request__destroy(person_msgs__srv__Query_Request * msg);


/// Initialize array of srv/Query messages.
/**
 * It allocates the memory for the number of elements and calls
 * person_msgs__srv__Query_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
bool
person_msgs__srv__Query_Request__Sequence__init(person_msgs__srv__Query_Request__Sequence * array, size_t size);

/// Finalize array of srv/Query messages.
/**
 * It calls
 * person_msgs__srv__Query_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
void
person_msgs__srv__Query_Request__Sequence__fini(person_msgs__srv__Query_Request__Sequence * array);

/// Create array of srv/Query messages.
/**
 * It allocates the memory for the array and calls
 * person_msgs__srv__Query_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
person_msgs__srv__Query_Request__Sequence *
person_msgs__srv__Query_Request__Sequence__create(size_t size);

/// Destroy array of srv/Query messages.
/**
 * It calls
 * person_msgs__srv__Query_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
void
person_msgs__srv__Query_Request__Sequence__destroy(person_msgs__srv__Query_Request__Sequence * array);

/// Initialize srv/Query message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * person_msgs__srv__Query_Response
 * )) before or use
 * person_msgs__srv__Query_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
bool
person_msgs__srv__Query_Response__init(person_msgs__srv__Query_Response * msg);

/// Finalize srv/Query message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
void
person_msgs__srv__Query_Response__fini(person_msgs__srv__Query_Response * msg);

/// Create srv/Query message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * person_msgs__srv__Query_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
person_msgs__srv__Query_Response *
person_msgs__srv__Query_Response__create();

/// Destroy srv/Query message.
/**
 * It calls
 * person_msgs__srv__Query_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
void
person_msgs__srv__Query_Response__destroy(person_msgs__srv__Query_Response * msg);


/// Initialize array of srv/Query messages.
/**
 * It allocates the memory for the number of elements and calls
 * person_msgs__srv__Query_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
bool
person_msgs__srv__Query_Response__Sequence__init(person_msgs__srv__Query_Response__Sequence * array, size_t size);

/// Finalize array of srv/Query messages.
/**
 * It calls
 * person_msgs__srv__Query_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
void
person_msgs__srv__Query_Response__Sequence__fini(person_msgs__srv__Query_Response__Sequence * array);

/// Create array of srv/Query messages.
/**
 * It allocates the memory for the array and calls
 * person_msgs__srv__Query_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
person_msgs__srv__Query_Response__Sequence *
person_msgs__srv__Query_Response__Sequence__create(size_t size);

/// Destroy array of srv/Query messages.
/**
 * It calls
 * person_msgs__srv__Query_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_person_msgs
void
person_msgs__srv__Query_Response__Sequence__destroy(person_msgs__srv__Query_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PERSON_MSGS__SRV__QUERY__FUNCTIONS_H_
