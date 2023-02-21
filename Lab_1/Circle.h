#ifndef LAB_1_CIRCLE_H
#define LAB_1_CIRCLE_H

class Circle {
private:
    double radius;

public:
    Circle(double radius) : radius(radius){}

    double getRadius() const {
        return radius;
    }

    void setRadius(double radius) {
        this->radius = radius;
    }
};

#endif //LAB_1_CIRCLE_H
