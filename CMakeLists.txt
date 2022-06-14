cmake_minimum_required(VERSION 3.16)

project(stb-img-demo)

if (DEFINED ENV{stb_DIR})
  message(STATUS "Add $ENV{stb_DIR} to include path")
  include_directories($ENV{stb_DIR})
endif()

add_executable(${CMAKE_PROJECT_NAME}
  stb_img_demo.cpp
)

include(GNUInstallDirs)
install(TARGETS ${CMAKE_PROJECT_NAME}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)