# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_typesupport_introspection_c:wall_follow_with_safety__rosidl_typesupport_introspection_c;__rosidl_typesupport_introspection_cpp:wall_follow_with_safety__rosidl_typesupport_introspection_cpp")

# populate wall_follow_with_safety_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "wall_follow_with_safety::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'wall_follow_with_safety' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND wall_follow_with_safety_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
