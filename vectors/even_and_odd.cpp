#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sorted(std::vector<int>& arr,int low,int high);
int midFind(std::vector<int>& arr,int low,int high);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,num;
    std::vector<int> arr;
    std::cin >> N;

    for ( int i = 0; i < N; i++){
        std::cin >> num;
        arr.push_back(num);
    }
    std::sort(arr.begin(), arr.end());
    // sorted(arr, 0, N-1);
    bool first = true;
    for ( int i = 0; i < N; i++){
        // std::cout << arr[i] << ' ';
        if(arr[i]%2 != 0) {
            if (!first) std::cout << ' ';
            std::cout << arr[i];
            first = false;
        }
    }
    std::cout << '\n';
    first = true;
    for ( int i = N-1; i > 0 ; i--){
        if(arr[i]%2 == 0){
            if (!first) std::cout << ' ';
            std::cout << arr[i];
            first = false;
        }
    }
    std::cout << '\n';
    return 0;
}



void sorted(std::vector<int>& arr,int low,int high) {
    if (low < high){
        int mid = midFind(arr,low,high);
        
        sorted(arr, low, mid-1);
        sorted(arr, mid+1, high);
    }
}

int midFind(std::vector<int>& arr,int low,int high) {
    int mid = arr[high];
    int i = low-1;
    
    for(int j = low; j < high; j++){
        if (arr[i] < mid){
            i++;
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[i+1],arr[high]);
    return i + 1;
}