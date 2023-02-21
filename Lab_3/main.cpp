#include <iostream>
#include "Square.h"
#include "Stack.h"

int main() {
    Square square1 = Square(4, 5, 20, 35);
    printf("Создан квадрат1 с координатами левого верхнего угла - (%.2f, %.2f)\n"
           "сторона = %.2f, угол поворота = %.2f\n", square1.getUpperLeftCornerX(),
           square1.getUpperLeftCornerY(), square1.getSideOfSquare(), square1.getAngleOfRotation());

    Square square2 = Square(0, 2, 20, 70);
    printf("Создан квадрат2 с координатами левого верхнего угла - (%.2f, %.2f)\n"
           "сторона = %.2f, угол поворота = %.2f\n", square2.getUpperLeftCornerX(),
           square2.getUpperLeftCornerY(), square2.getSideOfSquare(), square2.getAngleOfRotation());

    if (operator !=(square1, square2)){
        std::cout << "Квадраты не равны по площади:\n";
        if (square1 > square2) {
            std::cout << "Площадь первого квадрата больше\n";
        } else {
            std::cout << "Площадь второго квадрата больше\n";
        }
    } else {
        std::cout << "Квадртаы равны по площади\n";
    }

    double value = 5.4;
    square1 = square1 * value;
    printf("Умножили квадрат1 на %.2f\n", value);
    printf("Теперь в квадрате1 сторона = %.2f\n", square1.getSideOfSquare());

    std::vector<double> vector1 = {5.2, 3.8};
    printf("Сдвигаем квадрат2 на вектор с координатами Х = %.2f, У = %.2f\n", vector1[0], vector1[1]);
    square2 = operator +(square2, vector1);

    printf("Создан квадрат2 с координатами левого верхнего угла - (%.2f, %.2f)\n"
           "сторона = %.2f, угол поворота = %.2f\n", square2.getUpperLeftCornerX(),
           square2.getUpperLeftCornerY(), square2.getSideOfSquare(), square2.getAngleOfRotation());

    Stack stack1 = Stack();
    std::cout << "\nСоздали новый стек\n";
    stack1 << 2;
    stack1 << 3;
    stack1 << 10;
    std::cout << "Стек после операций:\n";
    stack1.print();
    int val;
    stack1 >> val;
    std::cout << "Стек после операций: \n";
    stack1.print();

    return 0;
}
