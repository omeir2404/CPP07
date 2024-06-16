#include "Array.hpp"
#include <iostream>

int main() {
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

    return 0;
}