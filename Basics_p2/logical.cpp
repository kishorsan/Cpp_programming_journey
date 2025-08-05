#include <iostream>

int main() {
    // && - Check if two conditions are true
    // || - Check is atleast one of the two condition is True
    // ! - reverses the logical state of the operand
    int temp;
    std::cout << "Enter a temperature: ";
    std::cin >> temp;
    
    if(temp > 0 && temp < 30){
        std::cout << "The Temperature is Good" << '\n';
    }
    else{
        std::cout << "The Temperature is Bad" << '\n';
    }

    if(temp <= 0 || temp >= 30){
        std::cout << "The Temperature is Bad" << '\n';
    }else{
        std::cout << "The Temperature is Good" << '\n';
    }
    bool sunny = true;
    if ( !sunny ){
        std::cout << "It is Cloudy outside" << '\n';
    }else{
        std::cout << "It is Sunny outside" << '\n';
    }
    return 0;
}