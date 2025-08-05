#include <iostream>
using std::cout;

namespace first{
    int x = 10;
}

namespace second{
    int x = 100;
}

int main() {
    int x = 2;

    cout << x << '\n';
    cout << first::x << '\n';
    cout << second::x << '\n';

    return 0;
}
// namespace is used to resolve the naming conflict
