#include <iostream>

enum Day {sunday = 1, monday = 2, tuesday = 3, wednsday = 4, thursday = 5, friday = 6, saturday = 7};

enum Flowers {vanila, rose, dandelian, sunflower}; // will auto assign it as in like indexes starting from 0

int main() {
    //  enums - a user-defined data type that consists of paired named-integer
    //          constants. GREAT if you have a set of potential options

    Day today = monday;
    switch(today) {
        case sunday : std::cout << "It is Sunday" << '\n';
            break;
        case monday : std::cout << "It is Monday" << '\n';
            break;
        case tuesday : std::cout << "It is Tuesday" << '\n';
            break;
        case wednsday : std::cout << "It is Wednsday" << '\n';
            break;
        case thursday : std::cout << "It is Thursday" << '\n';
            break;
        case friday : std::cout << "It is Friday" << '\n';
            break;
        case saturday : std::cout << "It is Saturday" << '\n';
            break;
    }
    return 0;
}