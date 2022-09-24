// use switch to select one of many code block to execute
// can be use by char, and int
#include <iostream>

int main(int argc, char const *argv[])
{
    char character;
    std::cout << "Enter Character: " << std::endl;
    std::cin >> character;
    switch (character)
    {
    case 'a':
        std::cout << "apple";
        break;
    case 'b':
        std::cout << "banana";
        break;
    case 'c':
        std::cout << "cherry";
        break;
    }

    std::cin.get();
    return 0;
}
