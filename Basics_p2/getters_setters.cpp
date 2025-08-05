#include <iostream>

class Stove {
    private:
        int temperature = 0;
    public:
        int temp = 0;

    Stove(int temperature) {
        setTemp(temperature);
    } // using constructors we can initialize it easily 

    int getTemp() {
        return temperature;
    }

    void setTemp(int temperature) {
        if (temperature < 0){
            this->temperature = 0;
        }else if(temperature >= 10 ){
            this->temperature = 10;
        }else {
        this->temperature = temperature;
        }
    }
};

int main() {
    // Abstractions - hiding unnercessory data from outside a class
    // getters - functions that make a private attribute READALE
    // setters - functions that make a private attribute WRITEABLE 

    Stove stove1(3);
    stove1.temp = 1000000;
    // stove1.setTemp(3);

    std::cout << "The temperature setting is " << stove1.getTemp() << '\n';

    return 0;
}