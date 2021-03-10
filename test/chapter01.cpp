//
// Created by Fatih Can AKINCI on 10.03.2021.
// HAVELSAN AS
//
#include "catch.hpp"
#include "equal_double.h"
#include "tuple.h"
#include "vector.h"
#include "point.h"

#include <iostream>

using namespace raytracer;

TEST_CASE("Test Tuple") {
    Tuple a(4.3, -4.2, 3.1, 1.0);
    REQUIRE(EqualDouble(4.3, a.GetX()));
    REQUIRE(EqualDouble(-4.2, a.GetY()));
    REQUIRE(EqualDouble(3.1, a.GetZ()));
    REQUIRE(EqualDouble(1.0, a.GetW()));
}

TEST_CASE("Test Vector") {
    Vector a(4.3, -4.2, 3.1);
    REQUIRE(EqualDouble(4.3, a.GetX()));
    REQUIRE(EqualDouble(-4.2, a.GetY()));
    REQUIRE(EqualDouble(3.1, a.GetZ()));
    REQUIRE(EqualDouble(0.0, a.GetW()));
}

TEST_CASE("Test Point") {
    Point a(4.3, -4.2, 3.1);
    REQUIRE(EqualDouble(4.3, a.GetX()));
    REQUIRE(EqualDouble(-4.2, a.GetY()));
    REQUIRE(EqualDouble(3.1, a.GetZ()));
    REQUIRE(EqualDouble(1.0, a.GetW()));
}

TEST_CASE("Compare Tuples for Equality") {
    Tuple a(2, 2, 2, 1);
    Tuple b(2, 2, 2, 1);
    REQUIRE(Tuple::IsEqual(a, b));
}

TEST_CASE("Add two Tuples") {
    Tuple a(3, -2, 5, 1);
    Tuple b(-2, 3, 1, 0);
    Tuple sum = a + b;
    REQUIRE(EqualDouble(1,sum.GetX()));
    REQUIRE(EqualDouble(1,sum.GetY()));
    REQUIRE(EqualDouble(6,sum.GetZ()));
    REQUIRE(EqualDouble(1,sum.GetW()));
}