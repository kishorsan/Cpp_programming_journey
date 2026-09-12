#include<iostream>
#include<limits>
using namespace std;

int main() {
    // Representation of bits > Combining to form one Byte
    int number = 0b11111111;
    cout << number << endl; 
 
    // Is a Hexa decimal representation 
    int number1 = 0XF8;  // can be uppercase or lowercase
    cout << number1 << endl;
 
    // Here Unsigned means the negative will be considered to it's highest potential of the data type
    unsigned int number2 = -255;  // just don't use this shit meaning the unsigned keywords
    // weird is happening here 
    // Unsigned Int Range is 0 - 4294967295
    // Soo the above expression will result in 4294967296 - 255 ( Inclusive of 0 )
    cout << number2;

    cout << "\nLimit of Int\n" << 295 - 255;

    
    return 0;
}

