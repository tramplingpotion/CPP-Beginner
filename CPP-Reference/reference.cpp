//learn pointers first

// reference is referencing to existing variable
// which mean that we use reference to get/use the value of the variable (using the same memory address)
// compare to pointer,pointer get/use memory address

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string meal = "pizza";
    std::string &food = meal;//using the same method as pointer to get the memory address
    // string &food
    //  same method of use

    std::cout << meal << " & " << food;//notice that here food doesnt have & because it is the method to get memory address in pointer

    return 0;
}
