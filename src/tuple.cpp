#include "tuple.h"
#include "equal_double.h"

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

Tuple Tuple::operator+(const Tuple &rhs) const {
    Tuple result;
    result.SetX(x_ + rhs.GetX());
    result.SetY(y_ + rhs.GetY());
    result.SetZ(z_ + rhs.GetZ());
    result.SetW(w_ + rhs.GetW());
    return result;
}

Tuple::~Tuple() {

}

double Tuple::GetX() const {
    return x_;
}
double Tuple::GetY() const {
    return y_;
}
double Tuple::GetZ() const {
    return z_;
}
double Tuple::GetW() const {
    return w_;
}

void Tuple::SetX(double x) {
    x_ = x;
}
void Tuple::SetY(double y) {
    y_ = y;
}
void Tuple::SetZ(double z) {
    z_ = z;
}
void Tuple::SetW(double w) {
    w_ = w;
}

bool Tuple::IsEqual(const Tuple & lhs, const Tuple & rhs) {
    return EqualDouble(lhs.GetX(), rhs.GetX()) &&
            EqualDouble(lhs.GetY(), rhs.GetY()) &&
            EqualDouble(lhs.GetZ(), rhs.GetZ()) &&
            EqualDouble(lhs.GetW(), rhs.GetW());
}
