#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer, int &p , int &c, int &d);

int main() {
    char player, computer;
    char yes = 'y';
    int play=0,comp=0,draw=0;

    do{
        player = getUserChoice();
        std::cout << "\nYour choice is: ";
        showChoice(player);

        computer = getComputerChoice();
        std::cout << "\nComputer choice is: ";
        showChoice(computer);

        std::cout << "\nResult is: ";
        chooseWinner(player, computer, play, comp, draw);
        // std::cout << '\n' << play << ' ' << comp << ' ' << draw << ' ';
        std::cout << "\nDo you wish to play more \n"; 
        std::cout << "(y)/n  \n";
        std::cin >> yes;

    }while(yes != 'n');
    std::cout << "\nYou played a total of " << play + comp + draw << " Games\n";
    std::cout << "You won " << play << " times\n";
    std::cout << "The Computer won " << comp << " times\n";
    std::cout << "And there were " << draw << " Draws\n"; 
    return 0;
}
char getUserChoice() {
    char player;

    std::cout <<"\nRock-Paper-Scissers Game!\n";
    do{
        std::cout << "\nChoose one of the following\n";
        std::cout << "***************************\n";
        std::cout <<"r - Rock\n";
        std::cout <<"p - Paper\n";
        std::cout <<"s - Scissers\n";
        std::cin >> player;
        // std::cout << player;

    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;
}
char getComputerChoice() {
    char computer;
    int num;
    srand(time(0));
    
    num = rand() % 3 + 1 ;
    computer = ((num == 1)?'r':(num == 2)?'p':'s');

    return computer;
}
void showChoice(char choice) {

    if (choice == 'r') {
        std::cout << "Rock";
    }else if(choice == 'p'){
        std::cout << "Paper";
    }else if(choice == 's'){
        std::cout << "Scissers";
    }

}
void chooseWinner(char player, char computer, int &p, int &c, int &d) {
    // std::string winner;
    if (player == 'r'){
        if (computer == 'r'){
            std::cout << "The Game is a Draw\n";
            d += 1;
        }else if (computer == 's'){
            std::cout << "The Game is won by Player\n";
            p += 1;
        }else{
            std::cout << "The Game is won by Computer\n";
            c = 1;
        }
    }else if(player == 'p'){
        if (computer == 'p'){
            std::cout << "The Game is a Draw";
            d += 1;
        }else if( computer == 'r' ){
            std::cout << "The Game is won by Player";
            p += 1;
        }else{
            std::cout << "The Game is won by Computer\n";
            c += 1;
        }
    }else if(player == 's'){
        if (computer == 's'){
            std::cout << "The Game is a Draw";
            d += 1;
        }else if( computer == 'p' ){
            std::cout << "The Game is won by Player";
            p += 1;
        }else{
            std::cout << "The Game is won by Computer\n";
            c += 1;
        }
    }
}
