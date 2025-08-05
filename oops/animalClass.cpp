#include<iostream>
using std::string;

class Animal {
private:
    string name;
    int age;
    string species;

public:
    Animal(string name, int age, string species){  // here this is a constructor
        this->name = name;
        this->age = age;
        this->species = species;
    }

    string getName() { return this->name; }
    int getAge() { return this->age; }
    string getSpecies() { return this->species; }

    void eat() {
        std::cout << this->name << " is eating something\n";
    }

    void sleep() {
        std::cout << this->name << " is sleeping\n";
    }

    void makeSound() {
        std::cout << this->name << " is making a sound\n";
    }
};

int main() {
    Animal  a1 = Animal("Keerthi", 21, "Human");
    // a1 is the object 
    std::cout << "Name: " << a1.getName() << std::endl;
    std::cout << "Age: " << a1.getAge() << std::endl;
    std::cout << "Species: " << a1.getSpecies() << std::endl;
    a1.eat();
    a1.sleep();
    a1.makeSound();

    return 0;
}