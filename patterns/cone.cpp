#include <iostream>

int main() {
    int n;
    int soc = 0;
    std::cout << "Enter a number : ";
    std::cin >> n;
    for (int i = 1; i <= n*2; i++){
        if (i > n) soc--;
        else soc++;
        for (int j = 1; j <= soc; j++){
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return 0;
}

