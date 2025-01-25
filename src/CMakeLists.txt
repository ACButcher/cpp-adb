add_library(cpp-adb)

target_include_directories(
    cpp-adb 
    PUBLIC
    include
)

target_sources(
    cpp-adb

    PUBLIC
    client.cpp
    connection.cpp
)

install(TARGETS cpp-adb)