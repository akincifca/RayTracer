//
// Created by Fatih Can AKINCI on 10.03.2021.
// HAVELSAN AS
//
#include "catch.hpp"
#include "equal.h"
#include "tuple.h"
#include "vector.h"
#include "point.h"

TEST_CASE("Test Tuple") {
    raytracer::Tuple a(4.3, -4.2, 3.1, 1.0);
    REQUIRE(Equal(4.3, a.x_));
    REQUIRE(Equal(-4.2, a.y_));
    REQUIRE(Equal(3.1, a.z_));
    REQUIRE(Equal(1.0, a.w_));
}

TEST_CASE("Test Vector") {
    raytracer::Vector a(4.3, -4.2, 3.1);
    REQUIRE(Equal(4.3, a.x_));
    REQUIRE(Equal(-4.2, a.y_));
    REQUIRE(Equal(3.1, a.z_));
    REQUIRE(Equal(0.0, a.w_));
}

TEST_CASE("Test Point") {
    raytracer::Point a(4.3, -4.2, 3.1);
    REQUIRE(Equal(4.3, a.x_));
    REQUIRE(Equal(-4.2, a.y_));
    REQUIRE(Equal(3.1, a.z_));
    REQUIRE(Equal(1.0, a.w_));
}