// alphabet[2] = {"s","d"}
// array alphabet has array size of 2
// s is at "index" 0 while d is at index 1
// the "element" of index 0 is "s" while index 1 is "d"

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string cars[4] = {"volvo", "bmw", "ford", "mazda"};
    cars[2] = "ferrari";
    int num[3] = {10, 20, 30};

    std::cout << cars[2] << std::endl;
    std::cout << num[2];

    std::cin.get();
    return 0;
}
