#include <iostream>

//void means it doesnt return value
//declare function
void myFunction(){
    std::cout<<"I just got executed!";
}

int main(int argc, char const *argv[])
{
    //call function
    myFunction();
    std::cin.get();
    return 0;
}
