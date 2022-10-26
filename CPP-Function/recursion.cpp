//recursion is a technique of making function call itself 

#include <iostream>

int sum(int k){
    if (k>0){
        return k + sum(k - 1);
    }
    else {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int result = sum(10);
    std::cout<<result;
    return 0;
}
