// To load the iostream library
#include <iostream>
#include <string>

consteval int get_value() {
    return 3;
}

int addNumbers(int first_param, int second_param){
    int sum = first_param + second_param;
    return sum;
}

std::string getNames(){
    std::string full_name;
    std::cout << "Please type in your full name:" 
        << std::endl;
    // Getting data with spaces
    std::getline(std::cin, full_name);
    return full_name;
}

int main(int argc, char **argv){
    // constexpr int value = get_value();

    // // Statement in c++
    // int summation = addNumbers(-2, 1);
    // std::cout << "The sum of the two numbers is : " 
    //     << summation << std::endl;
    // std::string Name = getNames();
    // std::cout << "Hello, " << Name << std::endl;

    // Ways to express numbers:
    int num1 = 15; // Decimal
    int num2 = 017; // Octal
    int num3 = 0x0f; // Hexadecimal
    int num4 = 0b00001111; // Binary since c++14

    std::cout << "number1: " << num1 << std::endl;
    std::cout << "number2: " << num2 << std::endl;
    std::cout << "number3: " << num3 << std::endl;
    std::cout << "number4: " << num4 << std::endl;

    // Ways to initialize int variables:
    int elephant_count; // initialize to random garbage value
    int lion_count{}; // initialize to zero
    int dog_count{10}; // initialize to 10 as a specific number
    int cat_count{15};
    // Use expression as initializer
    int domesticated_animals{dog_count + cat_count};
}

/*
There are three types of errors,
    - the compile time errors
    - the runtime errors
    - warnings
*/