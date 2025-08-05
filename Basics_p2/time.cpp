#include <cmath>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int h1, m1, s1;
    int h2, m2, s2;
    std::cin >> h1 >> m1 >> s1;
    std::cin >> h2 >> m2 >> s2;
    
    if ( s1 + s2 > 60) {
        s1 = s1 + s2;
        s2 = s1 % 60;
        s1 = (int)s1/60;
    }
    if (m1 + m2 + s1 > 60){
        m1 = m1 + m2 + s1;
        m2 = m1 % 60;
        m1 = (int)m1/60;
    }
    int fhr = h1 + m1 + h2;
    if (fhr < 10 && m2 < 10 && s2 < 10){
        std::cout << 0 << fhr << 0 << ' ' << m2 << ' ' << s2;
    }
    else
    
    return 0;
}