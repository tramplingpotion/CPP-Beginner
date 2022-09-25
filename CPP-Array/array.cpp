#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string cars[4] = {"volvo", "bmw","ford", "mazda"};
    cars[2] = "ferrari";
    int num[3] = {10,20,30};

    std::cout<<cars[2]<<std::endl;
    std::cout<<num[2];
    std::cin.get();
    return 0;
}
