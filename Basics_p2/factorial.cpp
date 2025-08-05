#include <iostream>

int factorial(int num);
int factorialr(int num);

int main() {
    std::cout << factorialr(10) << '\n';
    return 0;
}

int factorial(int num) { //  Factorial in iterative approach
    int result = 1;
    for( int i = num; i > 0; i--){
        result *= i;
    }
    return result;
}

int factorialr(int num) { // Factorial in recursive approach
    if(num>1) {
        return num * factorialr(num-1);
    }else{
        return 1;
    }
}