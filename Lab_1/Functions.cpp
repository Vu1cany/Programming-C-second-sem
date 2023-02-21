#include "Functions.h"
#include "iostream"

void modLargeVar(int *a, int *b){
    if (*a > *b) {
        *a += *a % *b;
    } else if (*b > *a){
        *b += *b % *a;
    }
}

void modLargeVar(int &a, int &b){
    if (a > b) {
        a += a % b;
    } else if (b > a) {
        b += b % a;
    }
}

void inverse(double *a){
    *a = -(*a);
}

void inverse(double &a){
    a = -a;
}

void reduceRadius(Circle *circle, double a){
    circle->setRadius(circle->getRadius() - a);
}

void reduceRadius(Circle &circle, double a){
    circle.setRadius(circle.getRadius() - a);
}

void pointerSwitchStrInMatrix(int **matrix, int i1, int i2){
    int temp[3];
    std::memcpy(&temp, &matrix[i1], 3);
    std::memcpy(&matrix[i1], &matrix[i2], 3);
    std::memcpy(&matrix[i2], &temp, 3);
}

void referenceSwitchStrInMatrix(int **(&matrix), int i1, int i2){
    int temp[3];
    std::memcpy(&temp, &matrix[i1], 3);
    std::memcpy(&matrix[i1], &matrix[i2], 3);
    std::memcpy(&matrix[i2], &temp, 3);
}



