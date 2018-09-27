#include <iostream>
#include <string>
#include "Player.hpp"

int main(void)
{
    std::string a = "Hello";
    std::string b = "World";
    std::cout << "Before: " << a << " " << b << std::endl;
    a = b;
    std::cout << "After: " << a << " " << b << std::endl;
    return 0;
}