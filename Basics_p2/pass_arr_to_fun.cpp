#include <iostream>

double getPrices(double prices[], int size);

int main() {
    double prices[] = {70.99, 50.77, 69.99, 80, 100};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getPrices(prices, size);
    std::cout << '$' << total;
}

//  when u pass an array to a function the array becomes a pointer so pass a size of array too to not get error
double getPrices(double prices[], int size) {
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}