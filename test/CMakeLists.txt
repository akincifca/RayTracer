project(catch_tst)

include_directories(
        ../src
)

add_executable(catch_tst
        catch.hpp
        chapter01.cpp
        main.cpp
        ../src/tuple.cpp
        ../src/equal_double.h ../src/vector.h ../src/point.h)