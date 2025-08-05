#include <iostream>

int main() {
    int N;
    std::cout << "Enter the positon : ";
    std::cin >> N;
    int num = 2;
    int result = 0;
    int i = 1;
    int count = 0;
    while (N >= 1){
        i = 2;
        count = 0;
        while (i*i <= num) {
            if (num%i == 0) {
                count++;
                if ((num%(num/i)) == 0) count++;
            }
            i++;
        }
        if (count < 1) {
            std::cout << num << ' ';
            result = num;
            N--;
        }
        num++;
    }
    std::cout << "The Prime is " << result << '\n';
    int temp = result;
    int out = 0;
    while ( result > 0 ){
        out += result%10;
        result /= 10;
        if (out >= 10){
            result = out; 
            out = 0;
        }
    }
    // std::cout << out << ' ';
    std::cout << "out is " << out * temp ;

    return 0;
}