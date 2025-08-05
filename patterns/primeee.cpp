#include <iostream>

int prime(int* num, int i, int temp);
bool isprime(int num);

int main() {
    int n, num = 2;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++){
        prime(&num, i, 0);
        std::cout << std::endl;
    }
    return 0;
}

bool isprime(int num) {
    int i = 2;
    while (i*i <= num){
        if (num%i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

int prime(int* num, int i, int temp){
    if (i < 1) return *num;
    if (isprime(*num)){
        temp = *num;
        (*num)++;
        prime(num, i-1, temp);
        std::cout << temp << ' ';
        return *num;
    }
    (*num)++;
    return prime(num, i, temp);
}
