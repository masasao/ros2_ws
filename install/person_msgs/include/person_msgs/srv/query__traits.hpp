// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__SRV__QUERY__TRAITS_HPP_
#define PERSON_MSGS__SRV__QUERY__TRAITS_HPP_

#include "person_msgs/srv/query__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<person_msgs::srv::Query_Request>()
{
  return "person_msgs::srv::Query_Request";
}

template<>
struct has_fixed_size<person_msgs::srv::Query_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<person_msgs::srv::Query_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<person_msgs::srv::Query_Response>()
{
  return "person_msgs::srv::Query_Response";
}

template<>
struct has_fixed_size<person_msgs::srv::Query_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<person_msgs::srv::Query_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<person_msgs::srv::Query>()
{
  return "person_msgs::srv::Query";
}

template<>
struct has_fixed_size<person_msgs::srv::Query>
  : std::integral_constant<
    bool,
    has_fixed_size<person_msgs::srv::Query_Request>::value &&
    has_fixed_size<person_msgs::srv::Query_Response>::value
  >
{
};

template<>
struct has_bounded_size<person_msgs::srv::Query>
  : std::integral_constant<
    bool,
    has_bounded_size<person_msgs::srv::Query_Request>::value &&
    has_bounded_size<person_msgs::srv::Query_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // PERSON_MSGS__SRV__QUERY__TRAITS_HPP_
