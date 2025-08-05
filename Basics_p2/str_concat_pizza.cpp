#include <iostream>

using std::string;
using std::cout;

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);
void bakePizza(std::string topping1, std::string topping2, std::string topping3);

int main() {
    bakePizza();
    bakePizza("Pepper");
    bakePizza("Tomato","SweetCorn");
    bakePizza("Capcicum", "BonitoFlex", "Corn");
    return 0;
}

void bakePizza(){
    cout << "Your Pizza is ready \n";
}

void bakePizza(string topping1){
    cout << "Your " << topping1 <<  " Pizza is ready\n";
}

void bakePizza(string topping1, string topping2){
    cout << "Your " << topping1 << " with " << topping2 << " Pizza is ready\n";
}

void bakePizza(string topping1, string topping2, string topping3){
    cout << "Your " << topping1 << " with " << topping2 << " with extra " << topping3 << " Pizza is Ready\n";
}