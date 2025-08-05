#include <iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string x, int y, double z) { // Student(std::string name, int age, double gpa) {
        name = x;                             //    this->name = name;         
        age = y;                              //    this->age = age;
        gpa = z;                              //    this->gpa = gpa;
    }                                         // }           This works out as well soo if we use x,y,z
                                              // we have to use 'this->' keyword
};

int main() {
    //constructor - special method that is automatically called when an object is instansiated 
    //              usefull for assigning values to attributes as arguments

    Student s1("Kishora o", 21, 8.7);
    Student s2("Morty", 15, 7.3);
    Student s3("Bheem", 19, 9.9);

    std::cout << s1.name << '\n';
    std::cout << s1.age << '\n';
    std::cout << s1.gpa << '\n';

    std::cout << s2.name << '\n';
    std::cout << s2.age << '\n';
    std::cout << s2.gpa << '\n';

    std::cout << s3.name << '\n';
    std::cout << s3.age << '\n';
    std::cout << s3.gpa << '\n';
    return 0;
}