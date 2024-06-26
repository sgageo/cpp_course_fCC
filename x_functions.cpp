#include <iostream>
#include <string>
#include <iomanip>

consteval int get_value() {
    return 3;
}

std::string getNames(){
    std::string full_name;
    std::cout << "Please type in your full name:" 
        << std::endl;
    // Getting data with spaces
    std::getline(std::cin, full_name);
    return full_name;
}

int addNumbers(int first_param, int second_param){
    int sum = first_param + second_param;
    return sum;
}

int example(int argc, char **argv){
    constexpr int value = get_value();

    // Statement in c++
    int summation = addNumbers(-2, 1);
    std::cout << "The sum of the two numbers is : " 
        << summation << std::endl;
    std::string Name = getNames();
    std::cout << "Hello, " << Name << std::endl;

    return 0;
}