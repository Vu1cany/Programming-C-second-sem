#ifndef LAB_4_RECTANGLE_H
#define LAB_4_RECTANGLE_H
#include "../Interfaces.h"
#include <iostream>
#include <cmath>

class Rectangle : public IFigure{
private:
    CVector2D upperLeftCorner;
    CVector2D lowerRightCorner;
    double weight;

public:
    ~Rectangle();

    Rectangle();

    double square() override;

    double perimeter() override;

    double mass() const override;

    CVector2D position() const override;

    bool operator==(const IPhysObject &obj) const override;

    bool operator<(const IPhysObject &obj) const override;

    void draw() override;

    void initFromDialogue() override;

    const char* className() override;

    unsigned int size() override;
};

#endif //LAB_4_RECTANGLE_H
