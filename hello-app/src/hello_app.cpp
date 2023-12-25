#include <iostream>

#include <hello.hpp>

int main()
{
    std::cout << "Version is: " << core::version() << std::endl;
    std::cout << "The result: " << core::calculate(2, 3) << std::endl;
}

