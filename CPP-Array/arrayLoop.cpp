#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string cars[4] = {"volvo", "bmw", "ford", "mazda"};
    for (int i = 0; i <= 4; i++)
    {
        std::cout << cars[i] << std::endl;
    }

    std::cin.get();
    return 0;
}
