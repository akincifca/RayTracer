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

double Vector::Magnitude() const {
    return std::sqrt(std::pow(x_, 2) +
                     std::pow(y_, 2) +
                     std::pow(z_, 2) +
                     std::pow(w_, 2));
}
