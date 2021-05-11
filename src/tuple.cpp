//
// Created by Fatih Can AKINCI on 5/10/21.
// twitter, github: akincifca
//
#include "tuple.h"

#include <cassert>

rt::Tuple::Tuple(double x, double y, double z, double w) :
x_(x),
y_(y),
z_(z),
w_(w)
{

}

bool rt::IsEqual(const Tuple &first, const Tuple &second) {
    return  first.GetX() == second.GetX() &&
            first.GetY() == second.GetY() &&
            first.GetZ() == second.GetZ() &&
            first.GetW() == second.GetW();
}

rt::Tuple rt::operator+(const rt::Tuple &first, const rt::Tuple &second) {
    // Beware that adding two points makes no sense, w=2 (neither a point nor a vector)
    return rt::Tuple{first.GetX() + second.GetX(),
                            first.GetY() + second.GetY(),
                            first.GetZ() + second.GetZ(),
                            first.GetW() + second.GetW()};
}

rt::Tuple rt::operator-(const rt::Tuple &first, const rt::Tuple &second) {
    return rt::Tuple{first.GetX() - second.GetX(),
                            first.GetY() - second.GetY(),
                            first.GetZ() - second.GetZ(),
                            first.GetW() - second.GetW()};
}

