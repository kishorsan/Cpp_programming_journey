#include<iostream>
using namespace std;

int main() {
    int file_size = 100, count = 0;
    double pi = 3.14;
    cout << file_size << endl;
    cout << count << endl;
    int temp = count;
    count = file_size;
    file_size = temp;
    cout << file_size << endl;
    cout << count << endl;
    return 0;
}

void raise() {
    //Types of variables
    int file_size; //snake case
    int FileSize; //Pascal case         For classes 
    int fileSize; //Camal case          For variables and constants
    int iFileSize; //Hungarian case     For Trial n Error 
} 