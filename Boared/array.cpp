#include <iostream>
#include <vector>
int main(){
    std::vector<int> arr;
    for(int i = 0; i <= 10; i++){
        std::cout << "Enter " << i << "th number : ";
        std::cin >> arr[i];
    }

    for (int Ka: arr){
        std::cout << Ka << ' ';
    }
    return 0;
}