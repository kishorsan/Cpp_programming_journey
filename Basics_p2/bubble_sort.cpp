#include <iostream>

void sort(int size, int array[]);
int main() {
    int arr[] = {10, 9, 5, 6, 7, 8, 3, 4, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int ele : arr){
        std::cout << ele << ' ';
    }
    sort(size, arr);

    for (int ele : arr){
        std::cout << ele << ' ';
    }

    return 0;

}

void sort(int size, int array[]) {
    int temp;
    for(int i = 0; i < size-1; i++) {
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j+1]){
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
    std::cout << '\n';

}