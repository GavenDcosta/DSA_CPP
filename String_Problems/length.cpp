#include <iostream>

int findStringLength(const char* str) {
    int length = 0;
    
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    const char* myString = "Hello, World!";

    int length = findStringLength(myString);

    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}