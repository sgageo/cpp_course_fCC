// To load the iostream library
#include <iostream>

consteval int get_value() {
    return 3;
}


int main(int argc, char **argv){
    // constexpr int value = get_value();

    // Statement in c++
    int firstNumber = 12;
    int secondNumber = 9;
    int sum = firstNumber + secondNumber;
    std::cout << "The sum of the two numbers is : " << sum << std::endl;
}

/*
There are three types of errors,
    - the compile time errors
    - the runtime errors
    - warnings
*/