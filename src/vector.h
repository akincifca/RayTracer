//
// Created by Fatih Can AKINCI on 5/10/21.
// twitter, github: akincifca
//

#ifndef RAYTRACER_VECTOR_H
#define RAYTRACER_VECTOR_H

#include "tuple.h"

namespace rt {
    class Vector;
    double Magnitude(const Vector &vector);
    Vector Normalize(const Vector &vector);

    class Vector : public Tuple {
    public:
        explicit Vector(double x,
                        double y,
                        double z);

        friend double Magnitude(const Vector &vector);
        friend Vector Normalize(const Vector &vector);
    };
}




#endif //RAYTRACER_VECTOR_H
