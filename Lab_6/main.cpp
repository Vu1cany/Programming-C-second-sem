#include "Algorithms.h"
#include "TestClass.h"
#include <vector>

template<typename T>
bool isEven(T value){
    return value % 2 == 0;
}

template<typename T>
bool isPositive(T value){
    return value > 0;
}

int main() {
    std::vector<int> vector1 = {1, 3, 5, 7};
    std::cout << myAlg::any_of(vector1.begin(), vector1.end(), isEven<int>) << std::endl;

    std::vector<int> vector2 = {1, 2, 4, 5};
    std::cout << myAlg::any_of(vector2.begin(), vector2.end(), isEven<int>) << std::endl;

    int* array1 = new int[3] {1, 2, 3};
    TestClass<int> testClass1(array1, 3);
    std::cout << myAlg::any_of(testClass1.begin(), testClass1.end(), isEven<int>) << std::endl;
    std::cout << std::endl;


    std::vector<int> vector3 = {1, 3, 5, 7};
    std::cout << myAlg::one_of(vector3.begin(), vector3.end(), isEven<int>) << std::endl;

    std::vector<int> vector4 = {1, 2, 4, 5};
    std::cout << myAlg::one_of(vector4.begin(), vector4.end(), isEven<int>) << std::endl;

    int* array2 = new int[3] {1, 2, 3};
    TestClass<int> testClass2(array2, 3);
    std::cout << myAlg::one_of(testClass2.begin(), testClass2.end(), isEven<int>) << std::endl;
    std::cout << std::endl;


    std::vector<int> vector5 = {1, 1, 1, 1, 5};
    int a = 1;
    std::cout << myAlg::find_not(vector5.begin(), vector5.end(), a) << std::endl;

    int* array3 = new int[5] {1, 1, 3, 1, 1};
    TestClass<int> testClass3(array3, 5);
    std::cout << myAlg::find_not(testClass3.begin(), testClass3.end(), a) << std::endl;


    return 0;
}
