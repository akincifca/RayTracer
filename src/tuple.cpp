//
// Created by Fatih Can AKINCI on 5/10/21.
// twitter, github: akincifca
//

#include "tuple.h"

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

raytracer::Tuple raytracer::AddTuples(const Tuple &first, const Tuple &second) {
    double x = first.GetX() + second.GetX();
    double y = first.GetY() + second.GetY();
    double z = first.GetZ() + second.GetZ();
    double w = first.GetW() + second.GetW();
    return Tuple{x,y,z,w};
}
