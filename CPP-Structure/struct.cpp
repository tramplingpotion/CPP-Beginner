//structure is used to group several related variable into one place
//struct is a value type(not reference) as data can be modified after creation

#include <iostream>

main(int argc, char const *argv[])
{
    struct
    {
        std::string name;
        std::string author;
        int noPage;
        float price;
    } book;

    book.name = "The Lost Sun";
    book.noPage = 421;

    std::cout<<"Book Name: "<<book.name<<std::endl;
    std::cout<<"Number of Pages: "<<book.noPage<<std::endl;
    

    return 0;
}
