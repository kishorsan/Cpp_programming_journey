#include <iostream>

int lcmOf(int n1, int n2);
int gcdOf(int n1, int n2);

int main() {
    int num1, num2;
    std::cout << "Enter the two number : ";
    std::cin >> num1 >> num2;
    std::cout << "GCD is " << gcdOf(num1, num2) << '\n';
    int lcm = lcmOf(num1, num2);
    std::cout << "The LCM is " << lcm << '\n'; 

    return 0;
}

int gcdOf(int n1, int n2) {
    if (n1 < n2){
        if (n1 <= 0){
            return n2;
        }else {
        int temp = n2;
        n2 = n1;
        n1 = temp;
        }
    }
    return gcdOf(n1 % n2, n2);
}

int lcmOf(int n1, int n2) {
    return ((n1 * n2) / gcdOf(n1, n2));
}