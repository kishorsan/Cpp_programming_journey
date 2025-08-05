#include <iostream>

int main() {
    int n;
    int soc;
    std::cout << "Enter a number : ";
    std::cin >> n;
    soc  = n;
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k < soc; k++){
            std::cout << " ";
        }
        for (int j = 1; j < i*2; j++){
            if (j%2 == 0) std::cout << " ";
            else std::cout << "*";
        }
        soc--;
        std::cout << "\n"; 
    }
    return 0;
}