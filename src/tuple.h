//
// Created by Fatih Can AKINCI on 10.03.2021.
// HAVELSAN AS
//

#ifndef RAYTRACER_TUPLE_H
#define RAYTRACER_TUPLE_H

namespace raytracer {
    class Tuple {
    private:
        double x_;
        double y_;
        double z_;
        double w_;
    public:
        Tuple();
        explicit Tuple(double x, double y, double z, double w);
        Tuple operator+(const Tuple & rhs) const;
        virtual ~Tuple();

        [[nodiscard]] double GetX() const;
        [[nodiscard]] double GetY() const;
        [[nodiscard]] double GetZ() const;
        [[nodiscard]] double GetW() const;
        void SetX(double x);
        void SetY(double y);
        void SetZ(double z);
        void SetW(double w);

        static bool IsEqual(const Tuple & lhs, const Tuple & rhs);
    };
}



#endif //RAYTRACER_TUPLE_H
