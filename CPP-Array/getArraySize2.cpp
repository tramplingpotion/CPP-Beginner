#include <iostream>

int main(int argc, char const *argv[])
{
    int number[3] = {2, 5, 7};
    std::cout << "Array Size: " << sizeof(number) / sizeof(int);
    std::cin.get();
    return 0;
}
