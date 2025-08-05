#include <iostream>

int SumOfDigits(int num, int res);

int main() {
    int num;
    std::cout << "Enter a number : ";
    std::cin >> num;
    int result = SumOfDigits(num, 0);
    std::cout << "Sum of digits of " << num << " is " << result;
    return 0;  
}

int SumOfDigits(int num, int res) {
    if (num <= 0) {
        return res;
    }
    return SumOfDigits(num/10, res + num%10);
}