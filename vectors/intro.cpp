#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1;
    v1[0] = 1;
    v1[1] = 2;
    v1[2] = 3;
    std::cout << v1[1] << ' ' << v1[2] << ' ' << v1[0];
    return 0;
}