#include <iostream>

consteval int get_value() {
    return 3;
}

int main(){
    constexpr int value = get_value();
    std::cout << "value : " << value << std::endl;
}
// One line comment

/*
Multiple lines of comments.
Another line of comment
*/