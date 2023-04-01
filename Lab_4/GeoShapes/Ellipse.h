#ifndef LAB_4_ELLIPSE_H
#define LAB_4_ELLIPSE_H

#include "../Interfaces.h"
#include <iostream>
#include <cmath>

class Ellipse : public IFigure{
private:
    double weight;
    CVector2D A1;
    CVector2D A2;
    CVector2D B1;
    CVector2D B2;

public:
    ~Ellipse();

    Ellipse();

    double square() override;

    double perimeter() override;

    double mass() const override;

    CVector2D position() const override;

    bool operator==(const IPhysObject &obj) const override;

    bool operator<(const IPhysObject &obj) const override;

    void draw() override;

    void initFromDialogue() override;

    const char *className() override;

    unsigned int size() override;
};


#endif //LAB_4_ELLIPSE_H
