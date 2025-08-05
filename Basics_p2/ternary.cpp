#include <iostream>

int main() {
    int a = 10, b = 9;
    int result = (a>b)?a:b;
    std::cout << "The ternary output is " << result  << '\n';
    a > b ? std::cout << "The Biggest is " << a << '\n': std::cout << "The Biggest is " << b << '\n';
    
    bool hungry = true;  // not False or True but false and true
    hungry ? std::cout << "You are Hungry" << '\n' : std::cout << "You are full " << '\n';

    int number = 10;
    number%2 == 0 ? std::cout << "The Number is even" << '\n' : std::cout << "The Number is odd" << '\n';

    std::cout << (hungry ? "You are hungry " : "You are full") << '\n'; // can also be written like this

    
    return 0;
}
