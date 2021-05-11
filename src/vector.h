//
// Created by Fatih Can AKINCI on 5/10/21.
// twitter, github: akincifca
//

#ifndef RAYTRACER_VECTOR_H
#define RAYTRACER_VECTOR_H

#include "tuple.h"

namespace rt {

    class Vector : public Tuple {
    public:
        explicit Vector(double x,
                        double y,
                        double z);
    };
}




#endif //RAYTRACER_VECTOR_H
