#include <iostream>
#include "Functions.h"

void modLargeVarPrint(){
    std::cout << "Task №3" << "\n";

    int large = 70;
    int small = 30;
    std::cout << "Reference function:\n";
    printf("Before: %d %d\n", large, small);
    modLargeVar(large, small);
    printf("After: %d %d\n\n", large, small);

    large = 70;
    small = 30;
    std::cout << "Pointer function\n";
    printf("Before: %d %d\n", large, small);
    modLargeVar(&large,&small);
    printf("After: %d %d\n", large, small);

    std::cout << "------------------------------------------\n";
}

void inversePrint(){
    std::cout << "Task №8" << "\n";

    double value = 45.5;
    std::cout << "Reference function:\n";
    printf("Before: %f\n", value);
    inverse(value);
    printf("After: %f\n\n", value);

    value = 45.5;
    std::cout << "Pointer function\n";
    printf("Before: %f\n", value);
    inverse(&value);
    printf("After: %f\n", value);

    std::cout << "------------------------------------------\n";
}

void reduceRadiusPrint(){
    std::cout << "Task №11" << "\n";
    Circle circle = Circle(35);

    std::cout << "Reference function:\n";
    printf("Before: %f\n", circle.getRadius());
    reduceRadius(circle, 3.6);
    printf("After: %f\n\n", circle.getRadius());

    circle.setRadius(35);
    std::cout << "Pointer function\n";
    printf("Before: %f\n", circle.getRadius());
    reduceRadius(&circle, 3.6);
    printf("After: %f\n", circle.getRadius());

    std::cout << "------------------------------------------\n";
}

void switchStrInMatrixPrint(){
    std::cout << "Task №16" << "\n";

    int **arr = new int *[3];
    for (int i = 0; i < 3; ++i) {
        arr[i] = new int[3];
    }

    int k = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            arr[i][j] = k++;
        }
    }

    std::cout << "Reference function:\n";
    std::cout << "Before: \n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    referenceSwitchStrInMatrix(arr, 0, 1);

    std::cout << "After: \n";

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "Pointer function:\n";
    std::cout << "Before: \n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    pointerSwitchStrInMatrix(arr, 0, 1);

    std::cout << "After: \n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "------------------------------------------\n";
}

int main() {
    modLargeVarPrint();
    inversePrint();
    reduceRadiusPrint();
    switchStrInMatrixPrint();
    return 0;
}
