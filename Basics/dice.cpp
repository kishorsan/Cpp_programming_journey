#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int roll_value = rand() % 6;
    if (roll_value == 0){
        roll_value = 6;
    }
    cout << "Value of rolled Dice is: " << roll_value << endl;

    const short minVal = 1, maxVal = 6;
    short roll_value1 = (rand() % (maxVal - minVal + 1)) + minVal;
    short roll_value2 = (rand() % (maxVal - minVal + 1)) + minVal;
    cout << "Dice values are: " << roll_value1 << ", " << roll_value2 << endl;
    return 0;
}