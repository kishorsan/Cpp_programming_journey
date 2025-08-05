#include <iostream>

int myNum = 21;
void printNum();
void printNum(int myNum);
void printNam();

int main() {
    // Local Variable - declared Inside a Function or a Block {}
    // Global Variable - Declared outside of all functions 
    int myNum = 10;
    printNum(myNum);
    printNum();
    printNam();
    return 0;
}


void printNum() {
    std::cout << myNum << ' ';
}

void printNum(int myNum) {
    std::cout << myNum << ' ';
}

void printNam(){
    int myNum = 12;
    std::cout << ::myNum << ' ';
}