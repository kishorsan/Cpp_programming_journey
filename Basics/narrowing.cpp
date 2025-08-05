#include<iostream>
using namespace std;

int main() {
    int number = 1'000'000;
    cout << number << endl;
    short another = number;
    cout << another << endl;  // result of narrowing convertion

    short another1 {number}; // the program would not compile to result in a lower value

    short num = 12000;
    cout << num << endl;

    int numint {num};
    cout << numint << endl; // it's not an issue because we won't encounter data loss
    return 0;
}