//
// Created by Fatih Can AKINCI on 5/10/21.
// twitter, github: akincifca
//
#include "tuple.h"

#include <cassert>

raytracer::Tuple::Tuple(double x, double y, double z, double w) :
x_(x),
y_(y),
z_(z),
w_(w)
{

}

bool raytracer::IsEqual(const Tuple &first, const Tuple &second) {
    return  first.GetX() == second.GetX() &&
            first.GetY() == second.GetY() &&
            first.GetZ() == second.GetZ() &&
            first.GetW() == second.GetW();
}

raytracer::Tuple raytracer::operator+(const raytracer::Tuple &first, const raytracer::Tuple &second) {
    assert((first.GetW() + second.GetW()) <= 1 && "Only Point+Vector or Vector+Vector is allowed");
    return raytracer::Tuple{first.GetX() + second.GetX(),
                            first.GetY() + second.GetY(),
                            first.GetZ() + second.GetZ(),
                            first.GetW() + second.GetW()};
}

