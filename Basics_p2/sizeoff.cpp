#include <iostream>

int main() {
    // sizeof() - determines the size in byes of a:
    //            variables, data types, class, objects, etc.

    int age = 21;
    double gpa = 3.6;
    char grade = 'B';
    std::string name = "Kishor Gowda O K";
    bool student = true;
    char grades[] = {'a', 'b', 'c', 'd', 'f'};
    std::string Students[] = {"Ganga", "Kish","Keer", "aish", "Adi", "ravi"};

    std::cout << sizeof(age) << " bytes"<< '\n';
    std::cout << sizeof(gpa) << " bytes"<< '\n';
    std::cout << sizeof(grade) << " bytes"<< '\n';
    std::cout << sizeof(name) << " bytes"<< '\n';
    std::cout << sizeof(student) << " bytes"<< '\n';
    std::cout << sizeof(grades) << " bytes"<< '\n';
    std::cout << sizeof(grades)/sizeof(grades[0]) << " elements"<< '\n';
    std::cout << sizeof(Students) << " bytes"<< '\n';
    std::cout << sizeof(Students)/sizeof(Students[0]) << " elements"<< '\n';

    for(int i = 0; i < 6; i++){
        std::cout << Students[i] << ' ';
    }
    for(int i = 0; i < sizeof(Students)/sizeof(Students[0]); i++){
        std::cout << Students[i] << ' ';
    }
    for(int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++){
        std::cout << grades[i] << ' ';
    }
    return 0;
}