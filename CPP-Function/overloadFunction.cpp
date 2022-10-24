//Function Overloading 
//Instead of doing 2 function that does same thing it is better to overload 

#include <iostream>

int sumFunction(int a, int b){
    return a+b;
}

double sumFunction(double a, double b){
    return a+b;     //same function but different output because it chooses more suitable parameter 
}

int main(int argc, char const *argv[])
{
    std::cout<<"Sum of Int Function: "<<sumFunction(23,4)<<std::endl;

    std::cout<<"Sum of Double Function: "<<sumFunction(25.4,43.4)<<std::endl;

    return 0;
}
