#include "catch.hpp"
#include "equal_double.h"
#include "tuple.h"
#include "vector.h"
#include "point.h"

using namespace raytracer;

TEST_CASE("Test tuple") {
    Tuple a(4.3, -4.2, 3.1, 1.0);
    REQUIRE(EqualDouble(4.3, a.GetX()));
    REQUIRE(EqualDouble(-4.2, a.GetY()));
    REQUIRE(EqualDouble(3.1, a.GetZ()));
    REQUIRE(EqualDouble(1.0, a.GetW()));
}

TEST_CASE("Test vector") {
    Vector a(4.3, -4.2, 3.1);
    REQUIRE(EqualDouble(4.3, a.GetX()));
    REQUIRE(EqualDouble(-4.2, a.GetY()));
    REQUIRE(EqualDouble(3.1, a.GetZ()));
    REQUIRE(EqualDouble(0.0, a.GetW()));
}

TEST_CASE("Test point") {
    Point a(4.3, -4.2, 3.1);
    REQUIRE(EqualDouble(4.3, a.GetX()));
    REQUIRE(EqualDouble(-4.2, a.GetY()));
    REQUIRE(EqualDouble(3.1, a.GetZ()));
    REQUIRE(EqualDouble(1.0, a.GetW()));
}

TEST_CASE("Compare tuples for equality") {
    Tuple a(2, 2, 2, 1);
    Tuple b(2, 2, 2, 1);
    REQUIRE(IsEqual(a, b));
}

TEST_CASE("Add two tuples") {
    Tuple a(3, -2, 5, 1);
    Tuple b(-2, 3, 1, 0);
    Tuple sum = a + b;
    REQUIRE(EqualDouble(1,sum.GetX()));
    REQUIRE(EqualDouble(1,sum.GetY()));
    REQUIRE(EqualDouble(6,sum.GetZ()));
    REQUIRE(EqualDouble(1,sum.GetW()));
}

TEST_CASE("Subtracting two points") {
    Point p1 {3, 2, 1};
    Point p2 {5, 6, 7};
    REQUIRE(IsEqual(p1 - p2, Vector{-2, -4, -6}));
}

TEST_CASE("Subtracting a vector from a point") {
    Point p {3, 2, 1};
    Vector v {5, 6, 7};
    REQUIRE(IsEqual(p - v, Point{-2, -4, -6}));
}

TEST_CASE("Subtracting two vectors") {
    Vector v1 {3, 2, 1};
    Vector v2 {5, 6, 7};
    REQUIRE(IsEqual(v1 - v2, Vector{-2, -4, -6}));
}
