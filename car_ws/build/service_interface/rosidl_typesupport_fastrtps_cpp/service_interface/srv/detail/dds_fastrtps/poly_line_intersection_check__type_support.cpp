// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from service_interface:srv/PolyLineIntersectionCheck.idl
// generated code does not contain a copyright notice
#include "service_interface/srv/detail/poly_line_intersection_check__rosidl_typesupport_fastrtps_cpp.hpp"
#include "service_interface/srv/detail/poly_line_intersection_check__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace service_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_service_interface
cdr_serialize(
  const service_interface::srv::PolyLineIntersectionCheck_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x
  cdr << ros_message.x;
  // Member: y
  cdr << ros_message.y;
  // Member: yaw
  cdr << ros_message.yaw;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_service_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  service_interface::srv::PolyLineIntersectionCheck_Request & ros_message)
{
  // Member: x
  cdr >> ros_message.x;

  // Member: y
  cdr >> ros_message.y;

  // Member: yaw
  cdr >> ros_message.yaw;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_service_interface
get_serialized_size(
  const service_interface::srv::PolyLineIntersectionCheck_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_service_interface
max_serialized_size_PolyLineIntersectionCheck_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PolyLineIntersectionCheck_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const service_interface::srv::PolyLineIntersectionCheck_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PolyLineIntersectionCheck_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<service_interface::srv::PolyLineIntersectionCheck_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PolyLineIntersectionCheck_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const service_interface::srv::PolyLineIntersectionCheck_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PolyLineIntersectionCheck_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PolyLineIntersectionCheck_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _PolyLineIntersectionCheck_Request__callbacks = {
  "service_interface::srv",
  "PolyLineIntersectionCheck_Request",
  _PolyLineIntersectionCheck_Request__cdr_serialize,
  _PolyLineIntersectionCheck_Request__cdr_deserialize,
  _PolyLineIntersectionCheck_Request__get_serialized_size,
  _PolyLineIntersectionCheck_Request__max_serialized_size
};

static rosidl_message_type_support_t _PolyLineIntersectionCheck_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PolyLineIntersectionCheck_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace service_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_service_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<service_interface::srv::PolyLineIntersectionCheck_Request>()
{
  return &service_interface::srv::typesupport_fastrtps_cpp::_PolyLineIntersectionCheck_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, service_interface, srv, PolyLineIntersectionCheck_Request)() {
  return &service_interface::srv::typesupport_fastrtps_cpp::_PolyLineIntersectionCheck_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace service_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_service_interface
cdr_serialize(
  const service_interface::srv::PolyLineIntersectionCheck_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dist
  cdr << ros_message.dist;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_service_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  service_interface::srv::PolyLineIntersectionCheck_Response & ros_message)
{
  // Member: dist
  cdr >> ros_message.dist;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_service_interface
get_serialized_size(
  const service_interface::srv::PolyLineIntersectionCheck_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dist
  {
    size_t item_size = sizeof(ros_message.dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_service_interface
max_serialized_size_PolyLineIntersectionCheck_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: dist
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PolyLineIntersectionCheck_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const service_interface::srv::PolyLineIntersectionCheck_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PolyLineIntersectionCheck_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<service_interface::srv::PolyLineIntersectionCheck_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PolyLineIntersectionCheck_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const service_interface::srv::PolyLineIntersectionCheck_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PolyLineIntersectionCheck_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PolyLineIntersectionCheck_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _PolyLineIntersectionCheck_Response__callbacks = {
  "service_interface::srv",
  "PolyLineIntersectionCheck_Response",
  _PolyLineIntersectionCheck_Response__cdr_serialize,
  _PolyLineIntersectionCheck_Response__cdr_deserialize,
  _PolyLineIntersectionCheck_Response__get_serialized_size,
  _PolyLineIntersectionCheck_Response__max_serialized_size
};

static rosidl_message_type_support_t _PolyLineIntersectionCheck_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PolyLineIntersectionCheck_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace service_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_service_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<service_interface::srv::PolyLineIntersectionCheck_Response>()
{
  return &service_interface::srv::typesupport_fastrtps_cpp::_PolyLineIntersectionCheck_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, service_interface, srv, PolyLineIntersectionCheck_Response)() {
  return &service_interface::srv::typesupport_fastrtps_cpp::_PolyLineIntersectionCheck_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace service_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _PolyLineIntersectionCheck__callbacks = {
  "service_interface::srv",
  "PolyLineIntersectionCheck",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, service_interface, srv, PolyLineIntersectionCheck_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, service_interface, srv, PolyLineIntersectionCheck_Response)(),
};

static rosidl_service_type_support_t _PolyLineIntersectionCheck__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PolyLineIntersectionCheck__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace service_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_service_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<service_interface::srv::PolyLineIntersectionCheck>()
{
  return &service_interface::srv::typesupport_fastrtps_cpp::_PolyLineIntersectionCheck__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, service_interface, srv, PolyLineIntersectionCheck)() {
  return &service_interface::srv::typesupport_fastrtps_cpp::_PolyLineIntersectionCheck__handle;
}

#ifdef __cplusplus
}
#endif
