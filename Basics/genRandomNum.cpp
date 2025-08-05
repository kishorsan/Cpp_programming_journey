#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    long elapsedTime = time(nullptr); // elapsed time from 1 jan 1970
    srand(elapsedTime);
    /* can also use  
    srand(time(0))
    */ 
    int number = rand() % 100; // we add %100 for upper limit of 100 we can also use %10 or anything 
    cout << number << endl;
    return 0;
}