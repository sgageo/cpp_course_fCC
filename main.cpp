// To load the iostream library
#include <iostream>
#include <string>
#include <iomanip>

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
    // Use expression as initializer:
    int domesticated_animals{dog_count + cat_count};

    // Initializing fractional numbers:
    float num5 {1.12345678901234567890f};
    double num6 {1.12345678901234567890};
    long double num7 {1.12345678901234567890L};

    double num8 {6.02e23};

    std::cout << std::setprecision(20);
    std::cout << "number5 is : " << num5 << std::endl;
    std::cout << "number6 is : " << num6 << std::endl;
    std::cout << "number7 is : " << num7 << std::endl;
    std::cout << "number8 is : " << num8 << std::endl;

    // Booleans of cpp
    bool red_light {false};
    bool green_light {false};
    std::cout << red_light << std::endl;
    red_light = true;
    std::cout << red_light << std::endl;
    std::cout << green_light << std::endl; // or use std::boolalpha to return true of false

    if(red_light==true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Pass!" << std::endl;
    } 

    // characters and text
    char char_value = 65;
    std::cout << char_value << std::endl;
    std::cout << static_cast<int>(char_value) << std::endl;

    char character1 {'a'};
    std::cout << character1 << std::endl;

    // Assignments in cpp after initialization
    int var1{125};
    std::cout << var1 << std::endl;
    var1 = 55;
    std::cout << var1 << std::endl;

    double var2 {44.55};
    std::cout << var2 << std::endl;
    var2 = 99.99;
    std::cout << var2 << std::endl;

    // Potential problems with auto type deduction and assignments
    auto var3 {333u};
    std::cout << var3 << std::endl;
    var3 = -22;
    std::cout << var3 << std::endl;
}

/*
There are three types of errors,
    - the compile time errors
    - the runtime errors
    - warnings
*/