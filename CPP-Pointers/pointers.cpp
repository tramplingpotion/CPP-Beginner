#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string food = "pizza";
    // can use both prt or &food to get memory address
    std::string *ptr = &food;

    std::cout << food << std::endl;
    std::cout << ptr << std::endl;   // display memory address
    std::cout << &food << std::endl; // display memory address

    return 0;
}
