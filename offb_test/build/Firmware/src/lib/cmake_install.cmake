# Install script for directory: /home/jinwoo/offboard_test/src/Firmware/src/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jinwoo/offboard_test/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/battery/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/controllib/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/conversion/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/drivers/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/ecl/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/FlightTasks/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/led/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/mathlib/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/mixer/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/perf/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/rc/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/terrain_estimation/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/tunes/cmake_install.cmake")
  include("/home/jinwoo/offboard_test/build/Firmware/src/lib/version/cmake_install.cmake")

endif()

