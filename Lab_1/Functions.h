#ifndef LAB_1_FUNCTIONS_H
#define LAB_1_FUNCTIONS_H

#include "Circle.h"

void modLargeVar(int *a, int *b);

void modLargeVar(int &a, int &b);

void inverse(double *a);

void inverse(double &a);

void reduceRadius(Circle *circle, double a);

void reduceRadius(Circle &circle, double a);

void pointerSwitchStrInMatrix(int **matrix, int i1, int i2);

void referenceSwitchStrInMatrix(int **(&matrix), int i1, int i2);

#endif //LAB_1_FUNCTIONS_H
