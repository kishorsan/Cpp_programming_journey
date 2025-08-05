#include <iostream>

void walk(int steps);
void walkr(int steps);

int main() {
    // recursion - a programming technique where a function 
    //             invokes itself from within 
    //             break a complex concept into a repetable single steps
    
    // (iterative vs recursive)

    // advantages - less code and is clearer 
    //              usefull for sorting and serching algorithms
    
    // disadvantages - uses more memory, slower

    // walk(100);
    walkr(100);
    return 0;
}

void walk(int steps) {
    for ( int i = 0; i < steps; i++) {
        std::cout << "You take a step! \n";
    }
}

void walkr(int steps) {
    if (steps > 0) {
        std::cout << "You take a step now with recursion!\n";
        steps--;
        walkr(steps);
    }
}