#include <iostream>

//It is less flexible and it works fine to display the elements in an array

int main() {
    // foreach loop - loop that eases the traversal over an 
    //                iterable data type

    std::string Students[] = {"Mob", "Rock", "Tripple H", "Monster"};
    int marks[] = {100, 99, 88, 78, 70, 93 };

    for(std::string student : Students){
        std::cout << student << '\n'; 
    }

    for(int mark : marks){
        std::cout << mark << '\n';
    }
    return 0;
}