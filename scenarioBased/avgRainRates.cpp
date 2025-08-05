#include<iostream>
#include<vector>


class Rainfall{
private:
    int month;
    double rainfallRate;

public:
    void setMonth(int month){ this->month = month; }
    void setRainfallRate(double rainfallRate){ this->rainfallRate = rainfallRate; }
    
    int getMonth(){ return this->month; }
    double getRainfallRate(){ return this->rainfallRate; }

};

class Solution{
private:
    std::vector<Rainfall> data;
public:
    Solution() {
        data.resize(12);
        for(int i = 1; i <= 12; i++ ){
            double rainfallRate;
            std::cout << "Enter rainfall for month " << i << ": ";
            std::cin >> rainfallRate;

            Rainfall r1;
            r1.setMonth(i);
            r1.setRainfallRate(rainfallRate);
            data[i-1] = r1;
        }
    }

    void displayMonthly() {
        for (int i = 0; i < 12; i++){
            std::cout << "Rainfall for month " << i + 1 << " : " << data[i].getRainfallRate() << " mm" << std::endl; 
        }
        std::cout << std::endl;
    }

    double displayTotal() {
        double total = 0;
        for(int i = 0; i < 12; i++){
            total += data[i].getRainfallRate();
        }
        return total;
    }

    void displayAverage() {
        std::cout << "Average rainfall amount during a year : " << this->displayTotal() / 12 << std::endl;
    }
    
    void displayHigh(){
        double max = -1;
        int maxI;
        for (int i = 0; i < 12; i++){
            double rr = data[i].getRainfallRate();
            if (max < rr) { 
                max = rr; 
                maxI = i;
            }
        }
        std::cout << "The month with the highest rainfall was: " << maxI + 1 << std::endl;
    }
    
    void displayLow() {
        double min = 100;
        int minI;
        for (int i = 0; i < 12; i++){
            double rr = data[i].getRainfallRate();
            if (min > rr) { 
                min = rr; 
                minI = i;
            }
        }
        std::cout << "The month with the lowest rainfall was: " << minI + 1 << std::endl;
    }

};

void displayRequirement() {
    std::cout << "1 Display monthly amounts\n";
    std::cout << "2 Display total amount\n";
    std::cout << "3 Display average amount\n";
    std::cout << "4 Display highest amount\n";
    std::cout << "5 Display lowest amount\n";
    std::cout << "6 End program\n";
}

int main(){
    Solution s1;
    int choice = 0;
    while (true) {
        displayRequirement();
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        if (choice == 1){
                s1.displayMonthly();
        } else if (choice == 2) {
            double total = s1.displayTotal();
            std::cout << "Total rainfall amount for the entier year : " << total << std::endl;
        } else if (choice == 3) {
                s1.displayAverage();
        } else if (choice == 4) {
            s1.displayHigh();
        } else if (choice == 5) {
            s1.displayLow();
        } else if (choice == 6) {
            break;
        } else {
            std::cout << "\n Please enter a correct choice\n" << std::endl;
        }
    }
    return 0;
}