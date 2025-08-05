#include <iostream>

int main() {
    // Pointer - variable that sotred the memory address of another variable 
    //           sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    std::string name = "kishor";
    int age = 21;
    std::string freePizza[] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pfreePizza = freePizza; // No need to use & because the name of the varibale
    //                                      In an array itself is a pointer


    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pfreePizza << '\n';

    return 0;
}