#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;
/*
We can use both typedef and using anytime and we should only use typedef where there is a benifit or else
it is better to use using keyword
*/


int main() {
    pairlist_t pairlist; 
    text_t name = "Kishor";
    number_t age = 21;
    std::cout << name << '\n';
    std::cout << age << '\n';
    return 0;
}