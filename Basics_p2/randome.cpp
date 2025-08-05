#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    int num = rand()%6;
    int num1 = rand() % 6;
    int num2 = rand() % 6;
    // num = rand() % 20
    // num = rand() % 100
    std::cout << num + 1 << ' ';
    std::cout << num1 + 1 << ' ';
    std::cout << num2 + 1 << ' ';
    return 0;
}
