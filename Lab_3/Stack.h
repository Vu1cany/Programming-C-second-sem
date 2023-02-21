#ifndef LAB_3_STACK_H
#define LAB_3_STACK_H
#include "iostream"

class Stack {
private:
    int array[100];
    int topIndex = 0;

public:
    void operator << (int value);
    void operator >> (int &dist);
    void print();
};

#endif //LAB_3_STACK_H
