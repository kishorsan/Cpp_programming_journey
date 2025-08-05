#include <iostream>

void happyBday(std::string name,int age);

int main() {
    //function - a block of reusable code 
    std::string name;
    int age = 21;
    name = "Kishor";
    happyBday(name,age);

    return 0;
}

void happyBday(std::string name, int age){
    std::cout << "Happy Birthday To You " << name;
    std::cout << "\nHappy Birthday dear You " << name;
    std::cout << "\nHappy Birthday To You " << name;
    std::cout << "\nMay God  Bless You " << name;
    std::cout << "\nYou are " << age << " Years old";
}