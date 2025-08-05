#include <iostream>
#include <cmath>

int main() {
    double a,b,hyp;
    std::cout << "Enter a and b: ";
    std::cin >> a >> b;
    hyp = sqrt(pow(a,2)+pow(b,2));
    std::cout << "The hypotinus is: " << hyp << '\n';
    return 0;
}