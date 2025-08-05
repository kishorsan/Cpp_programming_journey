#include <iostream>

int nthPrime(int result, int N, int num);
bool isPrime(int num, int i, int count);
int summa(int num, int res);

int main() {
    int N;
    std::cout << "Enter the position : ";
    std::cin >> N;
    int prime = nthPrime( 0, N, 2);
    int out = summa(prime, 0);
    std::cout << "The output is : " << out * prime;
    return 0;
}

int summa( int num, int res) {
    if (num <= 0){ 
        if (res < 10) return res;
        return summa(res, 0);
    }
    return summa(num/10, res + num%10);
}

bool isPrime(int num, int i, int count) {
    if (i * i > num) return (count == 2);
    if (num%i == 0) {
        count += 1;
        if ((num/i) == i) return (count == 2);
        if (num%(num/i) == 0) count += 1;
    }
    return isPrime(num, i + 1, count);
}

int nthPrime(int result, int N, int num){
    if (N <= 0) {
        std::cout << result << '\n';
        return result;
    }
    // std::cout << num << ' ';
    if (isPrime(num, 1, 0)) {
        // std::cout << N << ' ' << num << '\n';
        result = num;
        N -= 1;
    }
    return nthPrime(result, N, num + 1 ); 
}