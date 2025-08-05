#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int anInt;
    long aLong;
    char aChar;
    float aFloat;
    double aDouble;
    scanf("%d %ld %c %f %lf", &anInt, &aLong, &aChar, &aFloat, &aDouble);
    // cin >> anInt >> aLong >> aChar >> aFloat >> aDouble;
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n",anInt,aLong,aChar,aFloat,aDouble);
    // cout << anInt << '\n' << aLong << '\n' << aChar << '\n' << aFloat << '\n' << aDouble << '\n';
    
    return 0;
}