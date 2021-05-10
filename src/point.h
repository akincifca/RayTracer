//
// Created by Fatih Can AKINCI on 5/10/21.
// twitter, github: akincifca
//

#ifndef RAYTRACER_POINT_H
#define RAYTRACER_POINT_H

#include "tuple.h"

namespace raytracer{

    class Point : public Tuple{
    public:
        explicit Point(double x,
                       double y,
                       double z);
    };
}




#endif //RAYTRACER_POINT_H
