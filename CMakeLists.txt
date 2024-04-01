cmake_minimum_required(VERSION 3.7)
project(cui)

SET(GCC_COVERAGE_COMPILE_FLAGS "-O3") # DEBUG OFF
# SET(GCC_COVERAGE_COMPILE_FLAGS "-O3 -g") # DEBUB ON
SET(GCC_COVERAGE_LINK_FLAGS    "-lSDL2 -lSDL2_ttf")

find_package(SDL2 REQUIRED)
include_directories(cui ${SDL2_INCLUDE_DIRS})

add_executable(cui ./src/src/cui.cpp)
target_link_libraries(cui ${SDL2_LIBRARIES} SDL2_ttf)
