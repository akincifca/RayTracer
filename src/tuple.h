//
// Created by Fatih Can AKINCI on 5/10/21.
// twitter, github: akincifca
//

#ifndef RAYTRACER_TUPLE_H
#define RAYTRACER_TUPLE_H

namespace rt {
    class Tuple;
    bool IsEqual(const Tuple &first, const Tuple &second);
    Tuple operator+(const Tuple &first, const Tuple &second);
    Tuple operator-(const Tuple &first, const Tuple &second);
    Tuple operator*(double scalar, const Tuple &second);

    class Tuple {
    protected:
        double x_;
        double y_;
        double z_;
        double w_;
    public:
        explicit Tuple(double x, double y, double z, double w);

        [[nodiscard]] double GetX() const {return x_;}
        [[nodiscard]] double GetY() const {return y_;}
        [[nodiscard]] double GetZ() const {return z_;}
        [[nodiscard]] double GetW() const {return w_;}
        Tuple operator-() const;
        Tuple operator*(double scalar) const;

        friend bool IsEqual(const Tuple &first, const Tuple &second);
        friend Tuple operator+(const Tuple &first, const Tuple &second);
        friend Tuple operator-(const Tuple &first, const Tuple &second);
        friend Tuple operator*(double scalar, const Tuple &second);
    };
}



#endif //RAYTRACER_TUPLE_H
