#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    int randNum = rand() % 5 + 1;
    switch(randNum){
        case 1:
            std::cout << "Get fucked";
            break;
        case 2:
            std::cout << "Your the luckyest";
            break;
        case 3:
            std::cout << "You got 10000 Rs";
            break;
        case 4:
            std::cout << "You got a movie ticket";
            break;
        case 5:
            std::cout << "You got a tshirt";
            break;
    }
    return 0;
}
