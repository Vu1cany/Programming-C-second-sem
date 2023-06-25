#include <iostream>
#include <clocale>
#include "CircularBuffer.h"

using namespace std;

int main() {
    setlocale(LC_ALL,"russian");

    cout << "В нашем кольцевом буфере capacity будет 5" << endl;
    CircularBuffer<int> circularBuffer(5);
    circularBuffer.print();

    cout << "Сделаем pushFront 1 и 2:" << endl;
    circularBuffer.pushfront(1);
    circularBuffer.pushfront(2);
    circularBuffer.print();

    cout << "Сделаем pushBack 3, 4 и 5:" << endl;
    circularBuffer.pushback(3);
    circularBuffer.pushback(4);
    circularBuffer.pushback(5);
    circularBuffer.print();

    cout << "Сделаем вставку элемента 5 по итератору 1:" << endl;
    CircularBuffer<int>::Iterator iterator = CircularBuffer<int>::Iterator(circularBuffer.begin());
    cout << *iterator << "\n";
    circularBuffer.add(iterator, 6);
    circularBuffer.print();

    cout << "Получим элемент по индексу 1:" << endl;
    cout << circularBuffer[1] << endl;

    cout << "Получил элементы начала и конца:" << endl;
    cout << "Начало-" << circularBuffer.first() << " Конец-" << circularBuffer.last() << endl;

    cout << "Сделаем popFront:" << endl;
    circularBuffer.popfront();
    circularBuffer.print();

    cout << "Сделаем popBack:" << endl;
    circularBuffer.popback();
    circularBuffer.print();

    cout << "Удалим по итератору 1:" << endl;
    circularBuffer.remove(iterator);
    circularBuffer.print();

    cout << "Изменим capacity на 8:" << endl;
    circularBuffer.newcapacity(8);
    circularBuffer.print();

    return 0;
}