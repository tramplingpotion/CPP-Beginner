#include <iostream>
#include <string>

void studentInfo(std::string fname, int age)
{
    std::cout<<"Name: "<<fname<<", Age: "<<age<<std::endl;
}

int main(int argc, char const *argv[])
{
    studentInfo("John", 23);

    std::cin.get();
    return 0;
}
