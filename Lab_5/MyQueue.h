#ifndef LAB_5_MYQUEUE_H
#define LAB_5_MYQUEUE_H
#include <iostream>
#include "QueueExeption.h"

template <int pow, typename N> N powFun(N a){
    N result = 1;
    for (int i = 0; i < pow; ++i) {
        result *= a;
    }
    return result;
}

template <const int N, typename T>
class MyQueue {
private:
    T *array = new T[N];
    size_t head;
    size_t tail;
    size_t elementsCount = 0;

public:
    bool isEmpty();
    void push(T newValue);
    T peek();
    T top();
    size_t size();
};

template<const int N, typename T>
bool MyQueue<N, T>::isEmpty() {
    return elementsCount == 0;
}

template<const int N, typename T>
void MyQueue<N, T>::push(T newValue) {
    if (size() == N) throw QueueException("QUEUE OVERFLOW");

    if (isEmpty()) {
        tail = 0;
        head = 0;

    } else {
        tail++;
    }

    elementsCount++;
    array[tail] = newValue;
}

template<const int N, typename T>
T MyQueue<N, T>::peek() {
    if (isEmpty()) {
        throw QueueException("QUEUE IS EMPTY");
    }
    return array[head];
}

template<const int N, typename T>
T MyQueue<N, T>::top() {
    T result = peek();
    if (head != tail){
        head++;
    }
    elementsCount--;
    return result;
}

template<const int N, typename T>
size_t MyQueue<N, T>::size() {
    return elementsCount;
}


#endif //LAB_5_MYQUEUE_H
