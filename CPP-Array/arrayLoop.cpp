// combination of array and for loop to display all value of array

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    // array must use constant value
    // size of array can be bigger than number of index of an array
    // the array will reserve the extra space
    const int numOfCar = 6;
    std::string cars[numOfCar] = {"volvo", "bmw", "ford", "mazda"};

    for (int i = 0; i <= numOfCar; i++)
    {
        std::cout << cars[i] << std::endl;
    }

    std::cin.get();
    return 0;
}
