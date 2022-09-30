// dereference is place under pointer because it is use to manipulate memory address just like pointer
// dereference is the opposite of reference

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string meal = "pizza";
    std::string* ptr = &meal;

    std::cout << ptr << std::endl;   // pointer (display memory address of the variable)
    std::cout << *ptr << std::endl; // dereference (display value of the variable)

    return 0;
}
