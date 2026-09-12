#include <iostream>

int main() {
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenget", "Durango", "Ram 1500"}}; // when initializing an arry no need to add the rows
    // rows can be added to restrict the number of lines for any variable
    // Having lower row value can lead to error if there are more rows assigned 
    // Having higher row value will lead to loss of memory 
    
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/ sizeof(cars[0][0]);
    for (int i = 0; i < rows ; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}