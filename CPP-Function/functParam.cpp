#include <iostream>
#include <string>

//declare function with parameter with datatype
void fullName(std::string fname)
{
    std::cout<<fname<<" Ramses"<<std::endl;
}

int main(int argc, char const *argv[])
{
    //when calling function, input same variable datatype 
    fullName("Liam");
    fullName("Fiera");
    fullName("Henry");

    std::cin.get();
    return 0;
}
