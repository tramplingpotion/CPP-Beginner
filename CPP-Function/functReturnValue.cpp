#include <iostream>

double circleParameter(double radius, double pi)
{
    double circleParam = 2 * pi * radius;
    return circleParam;
}

int main(int argc, char const *argv[])
{
    const double pi = 3.14;
    double radius;
    std::cout << "Enter Radius of the Circle: ";
    std::cin >> radius;

    // return value can be used in calculation or display final output
    std::cout << "Parameter of Circle is " << circleParameter(radius, pi);
    
    std::cin.get();
    return 0;
}
