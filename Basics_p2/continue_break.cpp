#include <iostream>

int main() {
    for (int i = 0 ; i < 31 ; i++){
        if ( i%2 == 0 ){
            continue;
        }
        std::cout << i << '\n';
        if ( i== 9){
            break;
        }
    }
}