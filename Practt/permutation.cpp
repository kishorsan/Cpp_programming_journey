#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr;
    int var;
    while (std::cin >> var) {
        arr.push_back(var);
        if (std::cin.peek() == '\n') break;
    }
    int n = arr.size();
    int i = n - 2;
    int j;

    while (i >= 0 && arr[i] > arr[i+1]) i--;

    if (i == -1) std::reverse(arr.begin(), arr.end());
    else {
        j = n - 1;
        while (arr[j] <= arr[i]) j--;
        std::swap(arr[i],arr[j]);

        std::reverse(arr.begin() + i + 1, arr.end());
    }

    for ( int val: arr){
        std::cout << val << ' ';
    }

    return 0;
}