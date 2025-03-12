# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_camera_platform_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED camera_platform_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(camera_platform_FOUND FALSE)
  elseif(NOT camera_platform_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(camera_platform_FOUND FALSE)
  endif()
  return()
endif()
set(_camera_platform_CONFIG_INCLUDED TRUE)

# output package information
if(NOT camera_platform_FIND_QUIETLY)
  message(STATUS "Found camera_platform: 0.0.1 (${camera_platform_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'camera_platform' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT camera_platform_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(camera_platform_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${camera_platform_DIR}/${_extra}")
endforeach()
