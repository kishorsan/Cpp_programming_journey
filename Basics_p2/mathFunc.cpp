#include <iostream>
#include <cmath>

int main() {
    double x = 3;
    double y = 2;
    double z;

    z = std::max(x,y);
    std::cout << z << '\n';

    z = std::min(x,y);
    std::cout << z << '\n';

    z = pow(2,3);
    std::cout << z <<'\n';

    z = sqrt(4);
    std::cout << z << '\n';

    z = abs(-19);
    std::cout << z << '\n';

    z = round(9.8);
    std::cout << z << '\n';

    z = ceil(9.3);
    std::cout << z << '\n';

    z = floor(9.9);
    std::cout << z << '\n';
    return 0;
}