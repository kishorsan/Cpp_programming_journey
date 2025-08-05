#include <iostream>

int main() {
    // implicit is simple where int x = 3.14 will return 3 if printed
    double x = (int) 3.14; // Example of explicit type convertion
    std::cout << x << '\n';

    char y = 100;
    std::cout << y << '\n'; //Implicit

    std::cout << (char) 97 << '\n'; // Explicit

    // Example: In a test 8 questions are right of 10 questions what's the percentage
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;  // Integer division will give us 0% 
    // the above explicit type convertion will give us a correct value
    std::cout << score << "%";
    return 0;
}