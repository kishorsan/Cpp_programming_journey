#include <iostream>

int main() {
    // Null value - a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything ( null pointer )

    // nullptr - keyword represents a null pointer literal
    
    // null pointer are  helpfull when determining wether an address
    // was sucessfully assigned to a pointer

    // When using a pointer, be careful that your code isn't 
    // referencing dereference nullptr or pointing to free memory
    // this will  cause undefined behavior
    
    int *pointer = nullptr;
    int x = 123;
    pointer = &x;
    if (pointer == nullptr){
        std::cout << "Yess" << '\n';
        std::cout << *pointer << '\n';
    }else{
        std::cout << "Adresss was assigned" << '\n';
        std::cout << *pointer << '\n';
    }
    return 0;
}