#include <iostream>

int main() {
    int n;
    int soc, scr;
    std::cout << "Enter a number : ";
    std::cin >> n;
    soc = n - 1;
    scr = 1;
    for (int i = 1; i < n*2 ; i++){
        for (int k = 1; k <= soc; k++){
            std::cout << "  ";
        }

        for (int j = 1; j <= scr*2; j++){
            if (j%2 == 0) std::cout << "  ";
            else std::cout << "* ";
        }
        std::cout << "\n";
        if (i < n){
            soc--;
            scr++;
        } else {
            soc++;
            scr--;
        }
    }
    return 0;
}