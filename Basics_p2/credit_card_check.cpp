#include <iostream>
#include <math.h>

int main() {

    std::string card;
    std::cout << "Enter the credit card number: ";
    std::cin >> card;
    int size = sizeof(card)/sizeof(card[0]);
    int final;
    for ( int i = 0; i < size; i++){
        if (i%2 != 0) {
            int doubling = 2*(int)card[i];
            if (doubling - 10 >= 0) {
                final +=  doubling%10;
                final += doubling / 10 % 10;
            }else{
                final += doubling;
            }
        }else{
            final += (int)card[i];
        }
    }
    if (final%10 == 0){
        std::cout << "Valid!";
    }else{
        std::cout << "Invalid!";
    }
    return 0;
}