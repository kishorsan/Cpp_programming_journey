#include <iostream>

int main() {
    //array - a data structure that can hold multiple values 
    //        vlaues are accessed by an index number
    //        "Like a variable that can hold multiple values" 
    
    std::string cars[] = {"Toyota", "BMW", "Benz"};

    cars[0] = "Mustang";
    std::cout << cars[0] << ' ';
    std::cout << cars[1] << ' ';
    std::cout << cars[2] << ' ';

    std::string cars1[3];
    cars1[0] = "GT";
    cars1[1] = "Audi";
    cars1[2] = "Bugati";

    std::cout << '\n' << cars1[0] << ' ';
    std::cout << cars1[1] << ' ';
    std::cout << cars1[2] << ' ';

    double prices[] = {20.1, 50, 1000, 96, 80.60};

    std::cout << '\n' << prices[0] << ' ';
    std::cout << prices[1] << ' ';
    std::cout << prices[2] << ' ';
    std::cout << prices[3] << ' ';
    std::cout << prices[4] << ' ';
    

    return 0;
}