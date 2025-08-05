#include <iostream>

int main() {/*
    if statement : do something if a condition is true.
                   if not then don't do it */
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age >= 18 && age <= 100){
        std::cout << "You are allowed into the site";
    }else if(age < 0){
        std::cout << "Dude your not even born yet";
    }else if(age > 100){
        std::cout << "You are too old to enter this site";
    }else{
        std::cout << "Your are not old enough to enter";
    }
    return 0;
}