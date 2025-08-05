#include <iostream>
#include <ctime>

int main() {
    int guess;
    int count = 0;
    int num;
    srand(time(0));

    num = rand() % 100 + 1;

    std::cout << "***** Number guessing Game *****\n";

    do{
        std::cout << "Guess the Number Between (1 - 100): ";
        std::cin >> guess;
        if (guess > num){
            std::cout << "Your guessing way too high\n";
        }else if( guess < num){
            std::cout << "Your guess is very low \n";
        }
        count++;
    }while(guess != num);
    std::cout << "You guessed Correct! \n";
    std::cout << "You got it right in " << count << " tries\n";
    std::cout << "*********************************";
    return 0;

}