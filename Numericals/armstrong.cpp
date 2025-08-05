#include <iostream>
#include <cmath>

bool isArmstrong(int num, int res, int i, int temp);
int length(int num, int count);

int main() {
    int num;
    std::cout << "Enter a number : ";
    std::cin >> num;
    int N = length(num, 0);
    bool flag = isArmstrong(num, 0, N, num);
    if (flag) std::cout << "Is Armstrong";
    else std::cout << "Is not Armstrong";
    return 0;
}

int length(int num, int count){
    if (num <= 0) return count;
    return length(num/10, count+1);
}

bool isArmstrong(int num, int res, int N, int temp){
    if (num <= 0) return (res == temp);
    double base = pow(num%10,N);
    // std::cout  << base << ' ' << res << ' ';
    return isArmstrong(num/10, res + base, N, temp);
}