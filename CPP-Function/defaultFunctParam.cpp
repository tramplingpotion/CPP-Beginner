#include <iostream>
#include <string>

// default parameter will display parameter initial value
void myCountry(std::string country = "Singapore")
{
    std::cout<<"Country of "<<country<<std::endl;
}

int main(int argc, char const *argv[])
{
    myCountry("Thailand");
    myCountry("Indonesia");
    myCountry();    //this function will output Singapore

    std::cin.get();
    return 0;
}
