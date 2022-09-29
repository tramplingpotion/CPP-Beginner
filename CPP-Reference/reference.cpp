// reference is referencing to existing variable
// which mean that we use reference to get/use the value of the variable
// compare to pointer,pointer get/use memory address

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string meal = "pizza";
    std::string &food = meal;
    // string &food
    //  same method of use

    std::cout << meal << " & " << food;

    return 0;
}
