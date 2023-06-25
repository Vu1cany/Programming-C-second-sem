#ifndef CLION_PROGRAMMING_CIRCULARBUFFER_H
#define CLION_PROGRAMMING_CIRCULARBUFFER_H

#include <iterator>

using namespace std;

template<typename T>
class CircularBuffer {
    T *buffer;
    int capacity;
    int size;

    int front;
    int rear;

public:
    explicit CircularBuffer(int capacity) {
        this->buffer = new T[capacity]{};
        this->size = 0;
        this->capacity = capacity;

        this->front = 0;
        this->rear = 0;
    }

    ~CircularBuffer() {
        delete[] buffer;
    }

    class Iterator : public iterator<random_access_iterator_tag, T> {
        T *iterator_;
    public:
        using difference_type = typename iterator<random_access_iterator_tag, T>::difference_type;

        difference_type operator-(const Iterator &obj) const {
            return iterator_ - obj.iterator_;
        }

        explicit Iterator(T *curr_Value) {
            iterator_ = curr_Value;
        }

        Iterator(const Iterator &other) {
            iterator_ = other.iterator_;
        }

        Iterator operator+(int value) {
            iterator_ = iterator_ + value;
            return *this;
        }

        Iterator operator-(int value) {
            iterator_ = iterator_ - value;
            return *this;
        }

        Iterator operator++() {
            iterator_++;
            return *this;
        };

        Iterator operator--() {
            iterator_--;
            return *this;
        }

        Iterator operator+=(const int val) {
            iterator_ = iterator_ + val;
            return *this;
        };

        Iterator operator-=(const int val) {
            iterator_ = iterator_ - val;
            return *this;
        };

        bool operator==(const Iterator *other) {
            return this->iterator_ == other->iterator_;
        }

        bool operator!=(const Iterator *other) {
            return this->iterator_ != other->iterator_;
        }

        bool operator>(const Iterator *other) {
            return this->iterator_ > other->iterator_;
        }

        bool operator<(const Iterator *other) {
            return this->iterator_ < other->iterator_;
        }

        bool operator>=(const Iterator *other) {
            return this->iterator_ >= other->iterator_;
        }

        bool operator<=(const Iterator *other) {
            return this->iterator_ <= other->iterator_;
        }

        T &operator*() const {
            return *iterator_;
        };
    };

    Iterator begin() {
        return Iterator(buffer);
    }

    Iterator end() {
        return Iterator(buffer + capacity);
    }

    void pushfront(const T &value) {
        if (front == rear && size == 0) {
            buffer[front] = value;
            size++;
            return;
        }

        if (front == 0) {
            front = capacity - 1;
        } else {
            front--;
        }

        if (size == capacity) {
            if (rear == 0) {
                rear = capacity - 1;
            } else {
                rear--;
            }
        } else {
            size++;
        }

        buffer[front] = value;
    }

    void popfront() {
        buffer[front] = 0;

        if (front == capacity - 1) {
            front = 0;
        } else {
            front = front + 1;
        }

        size--;
    }

    void pushback(const T &value) {
        if (front == rear && size == 0) {
            buffer[rear] = value;
            size++;
            return;
        }

        if (rear == capacity - 1) {
            rear = 0;
        } else {
            rear++;
        }

        if (size == capacity) {
            if (front == capacity - 1) {
                front = 0;
            } else {
                front++;
            }
        } else {
            size++;
        }

        buffer[rear] = value;
    }

    void popback() {
        buffer[rear] = 0;

        if (rear == 0) {
            rear = capacity - 1;
        } else {
            rear--;
        }

        size--;
    }

    void add(Iterator iterator, T value) {
        int index = (iterator - begin()) % capacity;

        T bufferLastItem = buffer[rear];
        int i = rear;
        while (i != index) {
            buffer[i % capacity] = buffer[(i - 1) % capacity];
            if (i > 0) {
                i--;
            } else {
                i = capacity - 1;
            }
        }

        buffer[index] = value;

        if (size != capacity) {
            size++;
            if (rear == capacity - 1) {
                rear = 0;
            } else {
                rear++;
            }
            buffer[rear] = bufferLastItem;
        }
    }

    void remove(Iterator iterator) {
        int index = (iterator - begin()) % capacity;
        int IndexLast = rear;

        while (index != rear) {
            buffer[index % capacity] = buffer[(index + 1) % capacity];
            if (index == capacity - 1) {
                index = 0;
            } else {
                index++;
            }
        }

        if (rear == 0) {
            rear = capacity - 1;
        } else {
            rear--;
        }

        buffer[IndexLast] = 0;
        size--;
    }

    T &first() {
        int real_index = (front) % capacity;
        return buffer[real_index];
    }

    T &last() {
        int real_index = (rear) % capacity;
        return buffer[real_index];
    }

    T &operator[](const int index) const {
        return buffer[index % capacity];
    }

    void newcapacity(int capacity_) {
        T *temp = new T[capacity_]{};
        for (int i = 0; i < this->capacity; i++) {
            temp[i] = buffer[i];
        }
        delete[] this->buffer;
        this->buffer = temp;
        this->capacity = capacity_;
    }

    void print() {
        for (int i = 0; i < capacity; i++) {
            cout << buffer[i] << " ";
        }
        cout << "\n";
    }
};

#endif //CLION_PROGRAMMING_CIRCULARBUFFER_H