#include <iostream>

int main(int argc, char const *argv[])
{
    int number[3] = {2,5,7};
    std::cout<<sizeof(number);
    //instead of 3 the output displayed 12, 
    //this is because the function returns the value in bytes
    //go to getArraySize2.cpp to get the formula 

    std::cin.get();
    return 0;
}
