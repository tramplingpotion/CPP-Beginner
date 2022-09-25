#include <iostream>

int main(int argc, char const *argv[])
{
    // when the size of array not specified, it will be as big as the elements inserted
    // the size of cars array is 3
    std::string cars[] = {"volvo", "proton", "lotus"};
    // the problem arise when need to add element to the array as it need to write all element before the latest element
    // e.g.:
    std::string cars1[] = {"volvo", "proton", "lotus", "ferrari", "ford"};

    return 0;
}
