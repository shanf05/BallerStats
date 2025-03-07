cmake_minimum_required(VERSION 3.10)

project(BallerStats VERSION 1.0)

find_package(Qt5 REQUIRED Widgets)

#SRC (alle cpp files )
file(GLOB SOURCES "src/*.cpp")

add_executable(BallerStats ${SOURCES})

# Linken Mit Q5
target_link_libraries(BallerStats Qt5::Widgets)

# Ziel für die Executable (in Bin ordner! )
set_target_properties(BallerStats PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../bin"
)
