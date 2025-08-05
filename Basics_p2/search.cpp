#include <iostream>

int searchArr(int array[], int size, int element);
int searchFoods(std::string foods[], std::string myFood, int size);

int main() {
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::string foods[] = {"idli", "pups", "dosa", "puri", "color rice", "pizza", "pani puri"};
    int size1 = sizeof(foods)/sizeof(foods[0]);
    int index1;
    std::string myFood;

    std::cout << "Enter Element to seach for: ";
    std::cin >> myNum;

    index = searchArr(numbers, size, myNum);

    if (index == -1){
        std::cout  << "Element not found in the array!";
    }else{
        std::cout << "Element in " << index << " index";
    }

    std::cout << "\nEnter the Food you want to have: ";
    std::getline(std::cin, myFood);
    
    index1 = searchFoods(foods, myFood, size1);

    if (index != -1){
        std::cout << myFood << " found at index " << index1;
    }else{
        std::cout << myFood << " Not found!";
    }

    return 0;
}

int searchArr(int array[], int size, int element) {
    for (int i = 0; i < size; i++){
        if ( element == array[i] ){
            return i;
        }
    }
    return -1;
}

int searchFoods(std::string foods[], std::string myFood, int size) {
    int index;
    for (int i = 0; i < size; i++) {
        if (myFood == foods[i]){
            return i;
        }
    }
    return -1;
}