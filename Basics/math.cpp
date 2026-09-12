#include<iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 3;
    int z = x + y;
    int a = x - y;
    int b = x * y;
    double c = 3;
    double d = x / c;  // one of the two variables need to be double in order for us to get a decimal point
    int e = x % y;
    cout << z <<endl;
    cout << a <<endl;
    cout << b <<endl;
    cout << d <<endl;
    cout << e <<endl;

    x = x + 5;
    cout << x << endl;
    x = x - 5;
    cout << x << endl;
    x = x * 2;
    cout << x << endl;
    int f = x++;

    printf("x++ : "); //only x changes and f dosen't changes
    cout << x << endl;
    cout << f << endl;
    int g = ++x;

    printf("++x : "); //both together
    cout << x << endl;
    cout << g << endl;
    int h = x--;

    printf("x-- : "); //only x changes and h dosesn't changes
    cout << x << endl;
    cout << h << endl;
    int i = --x;

    printf("--x : ");  //both together
    cout << x << endl;
    cout << i << endl;
    return 0;
}