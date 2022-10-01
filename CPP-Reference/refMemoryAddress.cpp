//& operator is use to create reference variable
//printing variable with & operator will display the memory address
//printing variable without & operator will display variable value

#include <iostream>

int main(int argc, char const *argv[])
{
    std::string food = "pizza";

    std::cout<<&food;

    return 0;
}
