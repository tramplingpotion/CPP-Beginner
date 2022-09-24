// while loop loops through code as long as specified cindition is true
// easy to read
// step-init,condition,plus
#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 1;
    while (i <= 10)
    {
        std::cout << "While Loop " << i << "# Times." << std::endl;
        i++;
    }
    std::cin.get();
    return 0;
}
