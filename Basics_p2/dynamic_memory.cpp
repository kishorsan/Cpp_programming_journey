#include <iostream>

int main() {
    // dynamic memory - Memory that is allocated after the program 
    //                  is already compiled and running
    //                  Use the 'new' operator to allocate 
    //                  memory in the heap rather that the stack
    
    //                  Usefull when we don't know how much memory 
    //                  we will need. Makes our program more flexible, 
    //                  especially when accepting user input  
    
    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address " << pNum << '\n';
    std::cout << "Value " << *pNum << '\n';
    delete pNum;  //  always delete the memory that has been used

    char *pGrades = NULL;
    int size;
    std::cout << "How many grades to enter: ";
    std::cin >> size;
    pGrades = new char[size];

    for (int i = 0; i <size; i++){
        std::cout << "Enter Grade " << i + 1 << ": ";
        std::cin >> pGrades[i];

    }

    for (int i = 0; i < size; i++){
        std::cout << pGrades[i] << "  ";
    }
    delete[] pGrades; // use delete[] to delete an array type data structure

    return 0;
}