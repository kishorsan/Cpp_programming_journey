#include <iostream>
#include <cmath>

int length(int num, int count);
bool isPalindrome(int num, int res, int N, int temp);

int main() {
    int num;
    std::cout << "Enter a number : ";
    std::cin >> num;
    int N = length(num, 0);
    bool flag = isPalindrome(num, 0, N-1, num);
    if (flag) std::cout << num << " is a palindrome";
    else std::cout << num <<" is not a palindrome";

    return 0;
}

int length(int num, int count) {
    if ( num <= 0) return count;
    return length(num/10, count + 1);
}

bool isPalindrome(int num, int res, int N, int temp) {
    if (num <= 0) return res == temp;
    double base = (num % 10) * pow(10,N);
    return isPalindrome(num/10, res + base, N - 1, temp);
}