#include <iostream>

class Shape {
    public:
        double area;
        double volume;
};

class Cube : public Shape {
    public:
        double side;

    Cube(double side) {
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape {
    public:
        double radius;

    Sphere(double radius) {
        this->radius = radius;
        this->area = 4 * 3.14 * (radius * radius);
        this->volume = (4 / 3.0) * 3.14 * radius * radius * radius;
    }
};

int main() {
    Cube cube1(10);
    Sphere sphere1(5);

    std::cout << "The area of the cube is " << cube1.area << "cm \n";
    std::cout << "Volume: " << cube1.volume << "cm^2\n";

    std::cout << "The area of the sphere is " << sphere1.area << '\n';
    std::cout << "The volume is: " << sphere1.volume << '\n';
    return 0;
}