#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choice;
    do{
        std::cout << "\n***** Canara Bank *****\n";
        std::cout << "Enter the option you wish to choose from\n";
        std::cout << "1. Show Balance\n2. Deposite Money\n3. Withdraw Money\n4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);  // to work with innvalid input in string

        switch(choice){
            case 1: showBalance(balance);
                break;
            case 2: balance += deposit();
                showBalance(balance);
                break;
            case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4: std::cout << "Thanks for visiting\n";
                break;
            default: std::cout << "Invalid Choice\n";
        }
    }while(choice != 4);
    return 0;
}

void showBalance(double balance){
    std::cout << "Your Balance is: $" << balance << '\n';
}

double deposit() {
    double amount = 0;
    std::cout << "Enter the Amount you wish to Deposit: ";
    std::cin >> amount;
    if (amount > 0){
        return amount;
    }else{
        std::cout << "That's not a valid amount!\n";
    }
}

double withdraw(double balance) {
    double amount = 0;

    std::cout << "Enter the Amount you wish to withdraw: ";
    std::cin >> amount;
    
    if ( amount > balance ){ 
        std::cout << "Insufficient Funds!\n";
        // return 0; 
    }else if( amount < 0){
        std::cout << "Enter a Valid amount!\n";
        // return 0;  
    }else{
        return amount;
    }
}