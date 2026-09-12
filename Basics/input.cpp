#include<iostream>
using namespace std;

// Stream extraction operator >>
// Stream insertion operator <<

int main() { 
    cout << "Enter an integer value : ";
    int value;
    cin >> value;
    cout << "Value : " << value << endl;
    
    cout << "Enter a float Value : ";
    double value1;
    cin >> value1;
    cout << "Value1 : " << value1 << endl;
    
    cout << "Enter integer values for x and y " << endl;
    int x,y;
    cin >> x >> y;
    cout << x + y;
    return 0;  
}