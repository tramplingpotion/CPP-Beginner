//modifying value of pointer will result in the original variable to change into the same value too
//because (again) the pointer is variable that store the variable memory address
//by changing the memory address value(dereference) will also change the original variable value 

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string food="pizza";
    std::string* ptr= &food;//make pointer

    std::cout<<*ptr<<std::endl;//dereference(variable value)
    std::cout<<ptr<<std::endl;//pointer(memory address)-here to show the difference

    *ptr="burgur";//using dereference to change value

    std::cout<<*ptr<<std::endl;//show the change to the dereference
    std::cout<<food<<std::endl;//show the change even to the original variable

    return 0;
}
