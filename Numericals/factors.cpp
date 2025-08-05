#include <iostream>

void factors(int num, int i);

int main() {
    int num;
    std::cout << "Enter the numbe : ";
    std::cin >> num;
    factors(num, 1);
    return 0;
}

void factors(int num, int i){
    if ((i * i) > num) {
        return;
    }
    if (num%i == 0){
        std::cout << i << ' ';
        if ((num%(num/i) == 0) && (i != (num/i))){
            std::cout << num/i << ' ';
        }
    }
    return factors(num, i + 1);
}