# DynaMix Toy
# Copyright (c) 2018 Borislav Stanimirov
#
# Distributed under the MIT Software License
# See accompanying file LICENSE.txt or copy at
# https://opensource.org/licenses/MIT
#
cmake_minimum_required(VERSION 3.2.2)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(dynamix-toy)

set(DYNAMIX_SHARED_LIB ON CACHE BOOL "DynaMix shared")
set(DYNAMIX_BUILD_UNIT_TESTS OFF CACHE BOOL "DynaMix no unit tests")
set(DYNAMIX_BUILD_EXAMPLES OFF CACHE BOOL "DynaMix no examples")
set(DYNAMIX_BUILD_SCRATCH OFF CACHE BOOL "DynaMix no scratch")
set(DYNAMIX_BUILD_TUTORIALS OFF CACHE BOOL "DynaMix no tutorials")
set(DYNAMIX_BUILD_PERF OFF CACHE BOOL "DynaMix no perf")
add_subdirectory(dynamix)

add_subdirectory(rpg)
add_subdirectory(scratch)
