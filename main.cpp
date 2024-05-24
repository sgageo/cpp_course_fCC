// To load the iostream library
#include <iostream>
#include <string>
#include <iomanip>

int main(){
    // Precedence and Associativity
    // Pre- and Postfix increment/decrement
    int value {5};
    value = 5;
    std::cout << value << std::endl;
    std::cout << value++ << std::endl;
    std::cout << value << std::endl;

    value = 5;
    std::cout << value << std::endl;
    std::cout << ++value << std::endl;
    std::cout << value << std::endl;

    return 0;

    //Compound assignment operator
}

/*
There are three types of errors,
    - the compile time errors
    - the runtime errors
    - warnings
*/