#include <iostream>

class Animal {
    public:
        bool alive=true;

        void eat() {
            std::cout << "this animal is eating \n"; 
        }
};

class Dog : public Animal {
    public:
        void bark() {
            std::cout << "The Dog goes woof!\n";
        }
};

class Cat : public Animal {
    public:
        void meow() {
            std::cout << "The cat goes meow!\n";
        }
};

int main() {
    // inheritance - A class can receive attributes and methods from another class
    //               Children classes can inherit from parent class
    //               Helps to reuse similar code found within multiple classes

    Dog dog1;
    Cat cat1;

    std::cout << dog1.alive << '\n';
    dog1.eat();
    dog1.bark();

    std::cout << cat1.alive << '\n';
    cat1.eat();
    cat1.meow();

    // cat1.bark(); // dosen't work becoz shit isn't in the Cat class
    return 0;
}