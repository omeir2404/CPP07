#include "Array.hpp"
#include <iostream>

int main() {

    int * a = new int();
    std::cout << a << std::endl;
    delete a;
    // Test case 1: Create an array of integers
    Array<int> intArray(5);
    for (size_t i = 0; i < intArray.size(); i++) {
        intArray[i] = i + 1;
    }
    std::cout << "Array of integers: ";
    for (size_t i = 0; i < intArray.size(); i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Test case 2: Create an array of doubles
    Array<double> doubleArray(3);
    doubleArray[0] = 1.1;
    doubleArray[1] = 2.2;
    doubleArray[2] = 3.3;
    std::cout << "Array of doubles: ";
    for (size_t i = 0; i < doubleArray.size(); i++) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    // Test case 3: Access out of range index
    try {
        intArray[10] = 100; // This should throw an exception
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    //test case 4:  check if copies are independent

    Array<int> array2(3);
    for (size_t i = 0; i < array2.size(); i++){
        array2[i] = i + 1;
    }
    Array<int> copiedArray1(array2);
    Array<int> copiedArray2 = array2;

    array2[1] = 5;
    for(int i = 0; i < 3; i++){
        std::cout << "array2[" << i << "]: "<< array2[i] << "| copiedArray1[ "<< i << "]: " << copiedArray1[i] << "| copiedArray2[ "<< i << "]: " << copiedArray2[i] << std::endl;
    }
    return 0;
}