#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number : ";
    std::cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return 0;
}