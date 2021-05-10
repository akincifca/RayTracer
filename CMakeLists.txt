cmake_minimum_required(VERSION 3.1)
project(RayTracer)
set(CMAKE_CXX_STANDARD 17)

add_library(raytracer
        src/tuple.cpp
        src/vector.cpp
        src/point.cpp)
add_executable(test_raytracer
        test/chapter01.cpp
        test/main.cpp)
add_compile_options(-Wall -pedantic -Wextra)
target_link_libraries(test_raytracer raytracer)
target_include_directories(test_raytracer PRIVATE src)