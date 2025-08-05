#include <iostream>

int main() {
    // fill() - Fills a range of elements with a specified value
    //          fill(begin, end, value)
    const int size = 99;
    std::string foods[size]; // = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    fill(foods, foods + size/3, "pizza");
    fill(foods + size/3, foods + 2*size/3, "Ham");
    fill(foods + 2*size/3, foods + size, "Fries");
    for (std::string food : foods){
        std::cout << food << ' ';
    }
    return 0;
}