#include "Ellipse.h"

Ellipse::Ellipse() {
    Ellipse::initFromDialogue();
}

Ellipse::~Ellipse() = default;

double Ellipse::square() {
    double a = pow((A1.x - A2.x), 2) + pow((A1.y - A2.y), 2);
    a = sqrt(a) / 2;
    double b = pow((B1.x - B2.x), 2) + pow((B1.y - B2.y), 2);
    b = sqrt(b) / 2;
    return M_PI * b * a;
}

double Ellipse::perimeter() {
    double a = pow((A1.x - A2.x), 2) + pow((A1.y - A2.y), 2);
    a = sqrt(a) / 2;
    double b = pow((B1.x - B2.x), 2) + pow((B1.y - B2.y), 2);
    b = sqrt(b) / 2;
    return 4 * (M_PI * a * b + pow((a - b), 2)) / (a + b);
}

double Ellipse::mass() const {
    return weight;
}

CVector2D Ellipse::position() const {
    CVector2D center;
    center.x = (A1.x + A2.x) / 2;
    center.y = (A1.y + A2.y) / 2;
    return center;
}

bool Ellipse::operator==(const IPhysObject &obj) const {
    return mass() == obj.mass();
}

bool Ellipse::operator<(const IPhysObject &obj) const {
    return mass() < obj.mass();
}

void Ellipse::draw() {
    std::cout << std::endl;
    std::cout << className() << ":" << std::endl;
    std::cout << "\tPosition: (" << position().x << "; " << position().y << ")\n";
    std::cout << "\tWeight: " << mass() << std::endl;
    std::cout << "\tSize: " << size() << std::endl;
    std::cout << std::endl;
}

void Ellipse::initFromDialogue() {
    std::cout << std::endl;
    std::cout << className() << ":" << std::endl;
    std::cout << "Ellipse vertices:\n";
    std::cout << "\nEnter the coordinates of the A1 point: ";
    std::cin >> A1.x >> A1.y;
    std::cout << "\nEnter the coordinates of the A2 point: ";
    std::cin >> A2.x >> A2.y;
    std::cout << "\nEnter the coordinates of the B1 point: ";
    std::cin >> B1.x >> B1.y;
    std::cout << "\nEnter the coordinates of the B2 point: ";
    std::cin >> B2.x >> B2.y;
    std::cout << "Enter the weight: ";
    std::cin >> weight;
    std::cout << std::endl;
}

const char *Ellipse::className() {
    return typeid(*this).name();
}

unsigned int Ellipse::size() {
    return sizeof(*this);
}
