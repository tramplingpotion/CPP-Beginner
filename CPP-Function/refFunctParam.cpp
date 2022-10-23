//https://www.ibm.com/docs/en/zos/2.4.0?topic=calls-pass-by-reference-c-only

#include <iostream>

void swapVal(int &a, int &b){
    int temp = a;   //temp as placeholder for value 'a' that will next be set as value 'b'
    a = b;  //set value 'b' to 'a'
    b = temp;   //set value 'b' to temp that have initial value of 'a'
}

int main(int argc, char const *argv[])
{
    int firstNum = 20;
    int secondNum = 23;

    std::cout<<firstNum<<secondNum<<std::endl;

    swapVal(firstNum, secondNum);

    std::cout<<firstNum<<secondNum<<std::endl;

    return 0;
}
