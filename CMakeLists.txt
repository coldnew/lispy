CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(lispy)

# Set version
set(VERSION_MAJOR "0")
set(VERSION_MINOR "0")
set(VERSION_PATCH "1")
set(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

include(GNUInstallDirs)

SET(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

find_package(Readline REQUIRED)

ADD_SUBDIRECTORY(src)