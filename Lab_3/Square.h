#ifndef LAB_3_SQUARE_H
#define LAB_3_SQUARE_H
#include "vector"

class Square {
public:
    Square(double upperLeftCornerX, double upperLeftCornerY, double sideOfSquare, double angleOfRotation);

    double getUpperLeftCornerX() const;

    double getSideOfSquare() const;

    double getUpperLeftCornerY() const;

    double getAngleOfRotation() const;

    void setUpperLeftCornerX(double upperLeftCornerX);

    void setUpperLeftCornerY(double upperLeftCornerY);

    void setAngleOfRotation(double angleOfRotation);

    void setSideOfSquare(double sideOfSquare);

    double getArea() const;


private:
    double upperLeftCornerX;
    double upperLeftCornerY;
    double sideOfSquare;
    double angleOfRotation;
    double area = sideOfSquare * sideOfSquare;
};

bool operator == (Square s1, Square s2);

bool operator > (Square s1, Square s2);

bool operator < (Square s1, Square s2);

bool operator != (Square s1, Square s2);

Square operator *(Square square, double value);

Square operator +(Square square, std::vector<double> vector);

#endif //LAB_3_SQUARE_H
