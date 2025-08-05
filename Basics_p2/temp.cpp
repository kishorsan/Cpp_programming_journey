#include <iostream>

int main() {
    double temperature;
    char unit;
    std::cout << "Enter Temperature in [F] Fareinheight or [C] Celcius: ";
    std::cin >> temperature >> unit;
    if ( unit == 'F' || unit == 'f'){
        std::cout << "The Temperature in Celcius is " <<( temperature - 32 )/ 1.8 << " C\n";
    }else if(unit == 'C' || unit == 'c'){
        std::cout << "The Temperature in Fareinheight is " << (temperature * 1.8) + 32 << " F \n";
    }else{
        std::cout << "Enter the Correct either F or C";
    }
    
    return 0;
}
