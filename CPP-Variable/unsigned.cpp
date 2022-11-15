#include <iostream>
//unsigned is like pushing all the long value from the smallest negative value and push it to zero
//by doing this will doubling the capacity of positive value in long
//essentially there will be no negative value in a variable if use unsigned while also doubling the int capacity
int main(int argc, char const *argv[])
{
    // the negative value will rotate to the end positive value
    unsigned long noNeg = -1;
    unsigned long zero = 0;
    unsigned long positive = 1;
    std::cout << noNeg << std::endl;
    std::cout << zero << std::endl;
    std::cout << positive << std::endl;

    return 0;
}
