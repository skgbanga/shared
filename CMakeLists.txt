cmake_minimum_required(VERSION 3.10)
project (shared VERSION 1.0.0)

add_library(dynamic SHARED
  shared.cpp
)

add_executable(main
  main.cpp
)
target_link_libraries(main
  ${CMAKE_DL_LIBS}
)
