#include "Rectangle.h"

Rectangle::~Rectangle() = default;

Rectangle::Rectangle() {
    Rectangle::initFromDialogue();
}

double Rectangle::square() {
    double height  = abs(upperLeftCorner.y - lowerRightCorner.y);
    double width = abs(upperLeftCorner.x - lowerRightCorner.x);
    return height * width;
}

double Rectangle::perimeter() {
    double height  = abs(upperLeftCorner.y - lowerRightCorner.y);
    double width = abs(upperLeftCorner.x - lowerRightCorner.x);
    return 2 * height + 2 * width;
}

double Rectangle::mass() const {
    return weight;
}

CVector2D Rectangle::position() const {
    CVector2D center;
    center.x = (upperLeftCorner.x + lowerRightCorner.x) / 2;
    center.y = (upperLeftCorner.y + lowerRightCorner.y) / 2;
    return center;
}

bool Rectangle::operator==(const IPhysObject &obj) const {
    return mass() == obj.mass();
}

bool Rectangle::operator<(const IPhysObject &obj) const {
    return mass() < obj.mass();
}

void Rectangle::draw() {
    std::cout << std::endl;
    std::cout << className() << ":" << std::endl;
    std::cout << "\tPosition: (" << position().x << "; " << position().y << ")\n";
    std::cout << "\tWeight: " << mass() << std::endl;
    std::cout << "\tSize: " << size() << std::endl;
    std::cout << std::endl;
}

void Rectangle::initFromDialogue() {
    std::cout << std::endl;
    std::cout << className() << ":" << std::endl;
    std::cout << "Enter the coordinates of the upper-left corner: ";
    std::cin >> upperLeftCorner.x >> upperLeftCorner.y;
    std::cout << "Enter the coordinates of the lower-right corner: ";
    std::cin >> lowerRightCorner.x >> lowerRightCorner.y;
    std::cout << "Enter the weight: ";
    std::cin >> weight;
    std::cout << std::endl;
}

const char *Rectangle::className() {
    return typeid(*this).name();
}

unsigned int Rectangle::size() {
    return sizeof(*this);
}

