#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string meal = "pizza";
    std::string& food = meal;

    std::cout<<meal<<" & "<<food;

    return 0;
}
