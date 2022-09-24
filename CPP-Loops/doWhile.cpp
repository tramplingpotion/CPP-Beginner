// run a block of code then loops again after condition is true
// step-init,plus,condition
#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 1;
    do
    {
        std::cout << "Do While Loops " << i << "# Times" << std::endl;
        i++;
    } while (i <= 10);
    std::cin.get();
    return 0;
}
