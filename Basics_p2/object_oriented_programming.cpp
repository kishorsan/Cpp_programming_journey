#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink() {
            std::cout << "This person is drinking\n";
        }
        void sleep() {
            std::cout << "This person is sleeping\n";
        }
};

int main() {
    // objects - A collection of attributes and methods
    //           They can have characteristics and could perform actions
    //           Can be used to mimic real world items (ex. me, book, laptop)
    //           Created from a class which act's as a "blue-print"
    Human human1;
    Human human2;

    human1.name = "Kishor";
    human1.age = 21;
    human1.occupation = "Student";

    human2.name = "Morty";
    human2.age = 16;
    human2.occupation = "Student";

    std::cout << human1.name << '\n';
    std::cout << human1.age << '\n';
    std::cout << human1.occupation << '\n';
    human1.eat();
    human1.drink();
    human1.sleep();

    std::cout << human2.name << '\n';
    std::cout << human2.age << '\n';
    std::cout << human2.occupation << '\n';
    human2.eat();
    human2.drink();
    human2.sleep();
    return 0;
}