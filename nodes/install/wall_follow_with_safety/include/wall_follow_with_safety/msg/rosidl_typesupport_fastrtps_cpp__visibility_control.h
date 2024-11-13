// generated from
// rosidl_typesupport_fastrtps_cpp/resource/rosidl_typesupport_fastrtps_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef WALL_FOLLOW_WITH_SAFETY__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
#define WALL_FOLLOW_WITH_SAFETY__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wall_follow_with_safety __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_wall_follow_with_safety __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wall_follow_with_safety __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_wall_follow_with_safety __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_CPP_BUILDING_DLL_wall_follow_with_safety
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wall_follow_with_safety ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wall_follow_with_safety
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wall_follow_with_safety ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_wall_follow_with_safety
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wall_follow_with_safety __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_wall_follow_with_safety
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wall_follow_with_safety __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wall_follow_with_safety
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // WALL_FOLLOW_WITH_SAFETY__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_