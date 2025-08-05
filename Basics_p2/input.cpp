#include <iostream>

int main() {
    std::string name;
    std::string fname;
    std::string text;
    int age;

    std::cout << "What is your name?\n";
    std::cin >> name;
    std::cout << "Your Name is " << name << std::endl;
    // To get string with spaces
    std::cin.ignore(); // helps the getline() to read the real input
    // This will help with ignoring \n as an input to the getline() function

    std::cout << "What is your full name?\n";
    std::getline(std::cin, fname);
    std::cout << "Hello " << fname << '\n';
    
    std::cout << "Enter something with white spaces";
    std::getline(std::cin >> std::ws, text); /*
    ws - whitespace .... This ignores any whitespace or 
    a \n - newline character before the input is taken
*/
    std::cout << "What is your age?\n";
    std::cin >> age;
    std::cout << "Your age is " << age << '\n';
    return 0;
}