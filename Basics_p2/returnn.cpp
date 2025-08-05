#include <iostream>

double square(double length); 
double cube(double length);

int main() {
    double length = 5.0;
    std::cout << "The Area is " << square(length) << "cm^2\n";
    std::cout << "The Volume is " << cube(length) << "cm^3\n";
    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length) {
    return length * length * length;
}