#ifndef RAYTRACER_EQUAL_DOUBLE_H
#define RAYTRACER_EQUAL_DOUBLE_H

#include <cmath>

const double EPSILON = 0.00001;

inline bool EqualDouble(double a, double b) {
    return std::abs(a - b) < EPSILON;
}

#endif //RAYTRACER_EQUAL_DOUBLE_H
