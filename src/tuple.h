//
// Created by Fatih Can AKINCI on 10.03.2021.
// HAVELSAN AS
//

#ifndef RAYTRACER_TUPLE_H
#define RAYTRACER_TUPLE_H

namespace raytracer {
    class Tuple {
    public:
        double x_;
        double y_;
        double z_;
        double w_;
    public:
        Tuple();
        Tuple(double x, double y, double z, double w);
        virtual ~Tuple();
    };
}



#endif //RAYTRACER_TUPLE_H
