#include <iostream>

struct Student{
    std::string name;
    int age;
    double cgpa;
    bool enrolled = true;
};

int main() {
    // structs - A struct can store multiple values under one name
    //           structs can contain many different data types (string, int, double, char, bool etc.)
    //           variables in a struct are known as "members"
    //           members can be accessed with '.' "Class member access operator."
    Student student1;
    student1.name = "Kishor";
    student1.age = 21;
    student1.cgpa = 8.0;

    Student student2;
    student2.name = "Keerthi";
    student2.age = 21;
    student2.cgpa = 9.2;

    Student student3;
    student3.name = "Ganga";
    student3.age = 21;
    student3.cgpa = 8.8;

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.cgpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.cgpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.cgpa << '\n';
    std::cout << student3.enrolled << '\n';    
    return 0;
}