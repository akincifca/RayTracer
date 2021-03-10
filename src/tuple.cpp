//
// Created by Fatih Can AKINCI on 10.03.2021.
// HAVELSAN AS
//

#include "tuple.h"

using namespace raytracer;

Tuple::Tuple() {
    x_ = 0.0;
    y_ = 0.0;
    z_ = 0.0;
    w_ = 1.0;
}

Tuple::Tuple(double x, double y, double z, double w) :
x_(x),
y_(y),
z_(z),
w_(w)
{}

Tuple::~Tuple() {

}