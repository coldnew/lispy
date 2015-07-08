# Use C99 feature
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BUILD_DIR}
  ${CMAKE_SOURCE_DIR}/3rdparty/mpc
  ${Readline_INCLUDE_DIR})

set(SOURCE
  main.c
  ${CMAKE_SOURCE_DIR}/3rdparty/mpc/mpc.c)

ADD_EXECUTABLE(lispy ${SOURCE})
TARGET_LINK_LIBRARIES(lispy
  ${Readline_LIBRARY})

install(
  TARGETS lispy
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})