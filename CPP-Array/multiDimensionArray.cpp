#include <iostream>

int main(int argc, char const *argv[])
{
    //2 dimensional array
    std::string letters[2][2] = {
        {"a", "b"},
        {"c", "d"}
        };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout<<letters[i][j]<<std::endl;
        }
    }

    return 0;
}
