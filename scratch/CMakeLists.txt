cmake_minimum_required(VERSION 3.2.2)

add_executable(scratch 
    scratch.cpp
)

target_link_libraries(scratch dynamix)
set_target_properties(scratch PROPERTIES FOLDER scratch)
