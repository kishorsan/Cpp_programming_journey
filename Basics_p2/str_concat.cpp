#include<iostream>

std::string concatinate(std::string firstName, std::string lastName);

int main() {
    std::string firstName, lastName;
    std::cout << "Enter your first Name: ";
    std::cin >> firstName;
    std::cout << "Enter your last Name: ";
    std::cin >> lastName;

    std::cout << "Your Full Name is: " << concatinate(firstName, lastName);
    return 0;
}

std::string concatinate(std::string firstName, std::string lastName) {
    std::string fullName = firstName + ' ' + lastName;
    return fullName;
}