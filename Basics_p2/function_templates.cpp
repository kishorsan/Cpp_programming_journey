#include <iostream>
template <typename T>
// Only works with functions of same datatype 
T max(T a, T b){
    return a > b ? a : b;
}

template <typename X, typename Y>
auto maxi(X m, Y n) {
    return m > n ? m : n;
}
// works with any kind of datatype so this is the template overloding

/*
int max(int a, int b);
double max(double a, double b);
char max(char a, char b);
*/
// Instead of all this we use function template
int main() {
    // function templates - describes what a function looks like.
    //                      can be used generate as many overloaded functions
    //                      as needed, each using different data-type


    std::cout << max(2,3) << '\n';
    std::cout << max(2.2,2.9) << '\n';
    std::cout << max('a','b') << '\n';

    std::cout << maxi('a', 100);
    return 0;
}
// No need to use each of different data type 

int max(int a, int b) {
    return (a > b)? a:b;
}

double max(double a, double b) {
    return (a > b)? a:b;
}

char max(char a, char b) {
    return (a > b)? a:b;
}
