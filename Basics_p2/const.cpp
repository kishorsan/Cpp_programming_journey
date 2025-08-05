#include <iostream>

void printInfo(const std::string &name, const int &age);
int main() {
    // const parameter - parameter that is effectively read only
    //                   code is more secure & conveys intent 
    //                   usefull for reference and pointers

    std::string name = "kishor";
    int age = 21;
    printInfo(name,age);
    return 0;

}

void printInfo(const std::string &name, const int &age) {
    std::cout << name << '\n';
    std::cout << age << '\n';
}

// Majorly usefull when used in pass by reference instance and in the case of pointer usecase 