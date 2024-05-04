// To load the iostream library
#include <iostream>

consteval int get_value() {
    return 3;
}

int addNumbers(int first_number, int second_number){
    int sum = first_number + second_number;
    return sum;
}

int main(int argc, char **argv){
    // constexpr int value = get_value();

    // Statement in c++
    int summation = addNumbers(-2, 1);
    std::cout << "The sum of the two numbers is : " << summation << std::endl;
}

/*
There are three types of errors,
    - the compile time errors
    - the runtime errors
    - warnings
*/