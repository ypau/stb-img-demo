cmake_minimum_required(VERSION 3.20)

set(PN stb-img-demo)

project(${PN})

if (DEFINED ENV{stb_DIR})
  message(STATUS "Add $ENV{stb_DIR} to include path")
  include_directories($ENV{stb_DIR})
endif()

add_executable(${PN}
  stb_img_demo.cpp
)