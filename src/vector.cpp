//
// Created by Fatih Can AKINCI on 5/10/21.
// twitter, github: akincifca
//
#include "vector.h"

#include <cmath>

using namespace rt;

Vector::Vector(double x, double y, double z) :
Tuple{x, y, z, 0.0}
{

}

double rt::Magnitude(const Vector &vector) {
    return std::sqrt(std::pow(vector.GetX(), 2) +
                     std::pow(vector.GetY(), 2) +
                     std::pow(vector.GetZ(), 2) +
                     std::pow(vector.GetW(), 2));
}

Vector rt::Normalize(const Vector &vector) {
    double magnitude = Magnitude(vector);
    return Vector{vector.GetX() / magnitude,
                  vector.GetY() / magnitude,
                  vector.GetZ() / magnitude};
}
