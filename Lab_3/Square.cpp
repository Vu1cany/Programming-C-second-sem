#include "Square.h"

Square::Square(double upperLeftCornerX, double upperLeftCornerY, double sideOfSquare, double angleOfRotation)
        : upperLeftCornerX(upperLeftCornerX), upperLeftCornerY(upperLeftCornerY), sideOfSquare(sideOfSquare),
          angleOfRotation(angleOfRotation) {}

double Square::getUpperLeftCornerX() const {
    return upperLeftCornerX;
}

double Square::getUpperLeftCornerY() const {
    return upperLeftCornerY;
}

double Square::getSideOfSquare() const {
    return sideOfSquare;
}

double Square::getAngleOfRotation() const {
    return angleOfRotation;
}

void Square::setUpperLeftCornerX(double upperLeftCornerX) {
    Square::upperLeftCornerX = upperLeftCornerX;
}

void Square::setUpperLeftCornerY(double upperLeftCornerY) {
    Square::upperLeftCornerY = upperLeftCornerY;
}

void Square::setSideOfSquare(double sideOfSquare) {
    Square::sideOfSquare = sideOfSquare;
}

void Square::setAngleOfRotation(double angleOfRotation) {
    Square::angleOfRotation = angleOfRotation;
}

double Square::getArea() const {
    return area;
}

bool operator == (Square s1, Square s2) {
    return s1.getArea() == s2.getArea();
}

bool operator > (Square s1, Square s2) {
    return s1.getArea() > s2.getArea();
}

bool operator < (Square s1, Square s2) {
    return s1.getArea() < s2.getArea();
}

bool operator != (Square s1, Square s2) {
    return s1.getArea() != s2.getArea();
}

Square operator *(Square square, double value){
    return Square(square.getUpperLeftCornerX(), square.getUpperLeftCornerY(),
                  square.getSideOfSquare() * value, square.getAngleOfRotation());
}

Square operator +(Square square, std::vector<double> vector){
    return Square(square.getUpperLeftCornerX() + vector[0], square.getUpperLeftCornerY() + vector[1],
                  square.getSideOfSquare(), square.getAngleOfRotation());
}


