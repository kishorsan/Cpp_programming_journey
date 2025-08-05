#include <iostream>

int main() {
    char op;
    double num1, num2, result;

    std::cout << "********CALCI********"<< '\n';
    std::cout << "Enter an op in (+, -, *, /) only" << '\n';
    std::cin >> num1 >> op >> num2;
    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "Enter valid op among (+, -, *, /)";
    }
    std::cout << "The result it " << result;
    return 0;
}