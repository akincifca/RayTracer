//
// Created by Fatih Can AKINCI on 10.03.2021.
// HAVELSAN AS
//

#ifndef RAYTRACER_EQUAL_H
#define RAYTRACER_EQUAL_H

#include <cmath>

const double EPSILON = 0.00001;

inline bool Equal(double a, double b) {
    return std::abs(a - b) < EPSILON;
}

#endif //RAYTRACER_EQUAL_H
