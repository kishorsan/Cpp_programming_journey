#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, num;
    cin >> N;
    
    vector<int> oddNumbers, evenNumbers;
    
    // Read numbers and separate them into odd and even vectors
    for (int i = 0; i < N; i++) {
        cin >> num;
        if (num % 2 == 0)
            evenNumbers.push_back(num);
        else
            oddNumbers.push_back(num);
    }
    
    // Sort odd numbers in ascending order
    sort(oddNumbers.begin(), oddNumbers.end());
    
    // Sort even numbers in descending order
    sort(evenNumbers.begin(), evenNumbers.end(), greater<int>());
    
    // Print odd numbers
    for (size_t i = 0; i < oddNumbers.size(); i++) {
        if (i > 0) cout << " ";
        cout << oddNumbers[i];
    }
    cout << "\n";
    
    // Print even numbers
    for (size_t i = 0; i < evenNumbers.size(); i++) {
        if (i > 0) cout << " ";
        cout << evenNumbers[i];
    }
    cout << "\n";

    return 0;
}
