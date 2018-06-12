cmake_minimum_required(VERSION 3.2.2)

add_executable(rpg 
    main.cpp
    GameObject.cpp
    GameObject.h
    dynamixc.h
    ID.h
)

target_link_libraries(rpg dynamix)
set_target_properties(rpg PROPERTIES FOLDER demo)
