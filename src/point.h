#ifndef RAYTRACER_POINT_H
#define RAYTRACER_POINT_H

#include "tuple.h"

namespace raytracer {
    class Point : public Tuple {
    public:
        Point() : Tuple() {}
        Point(double x, double y, double z) :
                Tuple(x, y, z, 1.0) {}
    };
}


#endif //RAYTRACER_POINT_H
