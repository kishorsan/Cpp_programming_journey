#include <iostream>

int main() {
    std::string name;

    while (name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    std::cout << "Hello " << name << '\n';

    while(1==1){
        std::cout << "I'll be Stuck here";
    }
    
    return 0;
}