// passing array variable value one by one through function

#include <iostream>

//still not understand why cannot let the array index empty
void arrayOut(int arrayVar[4])
{
    std::cout << "Array Consist of "<<std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << arrayVar[i]<<std::endl;
    }
}

int main()
{
    int arrayVar[4] = {23,34,45,56};
    arrayOut(arrayVar);
    return 0;
}

