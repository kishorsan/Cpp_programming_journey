#include <iostream>

bool isPrime(int num, int i, int count);

int main(){
    int num;
    std::cout << "Enter a numbe : ";
    std::cin >> num;
    bool flag = isPrime(num, 1, 0);
    if (flag) std::cout << '\n' << "Is prime";
    else std::cout << '\n' << "Is not prime";
    return 0;
}

bool isPrime(int num, int i, int count){
    if (i * i > num) return (count == 2);
    if ((int)num % i == 0) {
        count += 1;
        if ((int)num%((int)num/i) == 0) {
            count += 1;
        }
    }
    return isPrime(num, i+1, count);
}

