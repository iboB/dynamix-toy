cmake_minimum_required(VERSION 3.2.2)

add_executable(rpg 
    main.cpp
    rpg.pch.h
    rpg.pch.cpp
    GameObject.cpp
    GameObject.h
    ID.h
)

target_link_libraries(rpg dynamix)
set_target_properties(rpg PROPERTIES FOLDER demo)

add_precompiled_header(rpg rpg.pch.h rpg.pch.cpp)
