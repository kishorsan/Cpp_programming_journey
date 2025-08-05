#include <iostream>

struct Car {
    std::string model;
    int year;
    std::string color;
};

void paintCar(Car &car, std::string color);
void printCar(Car &car);

int main() {
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2024;
    car1.color = "Blue";

    car2.model = "Corvette";
    car2.year = 2025;
    car2.color = "Black";

    paintCar(car1, "gold");
    paintCar(car2, "silver");
    // std::cout << &car1 << '\n'; // this is to compare the address to check if we're passing a value or a reference
    printCar(car1);
    printCar(car2);
    return 0;
}

void printCar(Car &car) {
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color) {
    car.color = color;

}

// we can pass it as a reference just by including a & address-of operator