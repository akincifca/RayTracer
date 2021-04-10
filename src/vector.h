//
// Created by Fatih Can AKINCI on 10.03.2021.
// 
//

#ifndef RAYTRACER_VECTOR_H
#define RAYTRACER_VECTOR_H

#include "tuple.h"

namespace raytracer {

    class Vector : public Tuple {
    public:
        Vector() : Tuple() {}
        Vector(double x, double y, double z) :
                Tuple(x, y, z, 0.0) {}
    };
}


#endif //RAYTRACER_VECTOR_H
