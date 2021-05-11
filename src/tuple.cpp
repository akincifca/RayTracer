//
// Created by Fatih Can AKINCI on 5/10/21.
// twitter, github: akincifca
//
#include "tuple.h"
#include "equal_double.h"

rt::Tuple::Tuple(double x, double y, double z, double w) :
x_(x),
y_(y),
z_(z),
w_(w)
{

}

bool rt::IsEqual(const Tuple &first, const Tuple &second) {
    return  EqualDouble(first.GetX(), second.GetX()) &&
            EqualDouble(first.GetY(), second.GetY()) &&
            EqualDouble(first.GetZ(), second.GetZ()) &&
            EqualDouble(first.GetW(), second.GetW());
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

rt::Tuple rt::Tuple::operator-() const {
    return rt::Tuple(0 - x_, 0 - y_, 0 - z_, 0- w_);
}

rt::Tuple rt::Tuple::operator*(double scalar) const {
    return rt::Tuple(x_ * scalar,
                     y_ * scalar,
                     z_ * scalar,
                     w_ * scalar);
}

rt::Tuple rt::operator*(double scalar, const rt::Tuple &second) {
    return rt::Tuple(second.x_ * scalar,
                     second.y_ * scalar,
                     second.z_ * scalar,
                     second.w_ * scalar);
}

rt::Tuple rt::Tuple::operator/(double scalar) const {
    return *this * (1 / scalar);
}

double rt::Dot(const rt::Tuple &first, const rt::Tuple &second) {
    return  first.GetX() * second.GetX() +
            first.GetY() * second.GetY() +
            first.GetZ() * second.GetZ() +
            first.GetW() * second.GetW();
}

