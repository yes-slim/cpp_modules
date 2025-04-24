#include <iostream>
#include <cstring>
#include "iter.hpp"

// Function to be used with iter
template<typename T>
void print(T& element) {
    std::cout << element << " ";
}

template<typename T>
void increment(T& element) {
    ++element;
}

template<typename T>
void    set42func(T& element) {
    element = 42;
}

int main() {
    // Test with an array of integers
    int intArray[] = {0, 1, 2, 3, 4};
    unsigned int intLength =  sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Print intArray members:" << std::endl; 
    iter(intArray, intLength, print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Set element's value to 42" << std::endl;
    iter(intArray, intLength, set42func);
    std::cout << std::endl;
    
    std::cout << "Print intArray members:" << std::endl; 
    iter(intArray, intLength, print);
    std::cout << std::endl;
    std::cout << std::endl;

    // Test with an array of integers
	char charArray[] = "abcdef";
	unsigned int charLength = strlen(charArray);

	std::cout << "Print charArray members:" << std::endl; 
    iter(charArray, charLength, print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Incrementing 	charArray members" << std::endl; 
    iter(charArray, charLength, increment);
    std::cout << std::endl;

	std::cout << "Print charArray members:" << std::endl; 
    iter(charArray, charLength, print);
    std::cout << std::endl;


    return 0;
}