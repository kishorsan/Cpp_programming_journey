#include <iostream>

int main() {
    int row, column;
    char symbol;
    std::cout << "Enter row and column to print a rectangle made out of numbers: ";
    std::cin >> row >> column;

    std::cout << "Enter a symbol to use if not then Enter '0' (without the quotes): ";
    std::cin >> symbol;

    
    for (int i =1; i <= row; i++){
        for (int j=1; j<= column;j++){
            if(symbol == '0'){
                std::cout << j << ' ';
            }else{
                std::cout << symbol << ' ';
            }
        }
        std::cout << '\n';
    }
    return 0;
}