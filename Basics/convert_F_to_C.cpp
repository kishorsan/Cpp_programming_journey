#include<iostream>
using namespace std;

int main() {
    double tempInF;
    cout << "Enter temperature in Faherenheit: ";
    cin >> tempInF;
    double tempInC = (tempInF - 32) / 1.8;
    cout << "Temperature in Celcius is: " << tempInC;
    return 0;
}