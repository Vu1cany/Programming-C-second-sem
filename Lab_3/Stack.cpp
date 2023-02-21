#include "Stack.h"

void Stack::operator<<(int value) {
    array[topIndex++] = value;
}

void Stack::operator>>(int &dist) {
    dist = array[topIndex--];
}

void Stack::print() {
    for (int i = 0; i < topIndex; ++i) {
        std::cout << array[i] << "\n";
    }
}