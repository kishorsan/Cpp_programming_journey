#include <iostream>

void swap(std::string x, std::string y);
void swapa(std::string &x, std::string &y);
int main() {
    std::string x = "freezer";
    std::string y = "dryer";

    swap(x,y); // Pass by value
    std::cout << x << '\n';
    std::cout << y << '\n';

    swapa(x,y); // Pass by reference
    std::cout << x << '\n';
    std::cout << y << '\n';

    return 0;
}

void swap(std::string x, std::string y) {
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

void swapa(std::string &x, std::string &y) {
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}