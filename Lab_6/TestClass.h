#ifndef LAB_6_TESTCLASS_H
#define LAB_6_TESTCLASS_H
#include "iostream"

template<typename T>
class TestClass {
public:
    explicit TestClass(T *array, size_t size) : array(array), arraySize(size) {}

    T* begin(){
        return &array[0];
    };

    T* end(){
        return &array[arraySize];
    }

    virtual ~TestClass() = default;

private:
    T* array;
    size_t arraySize;
};

#endif //LAB_6_TESTCLASS_H
