#include<iostream>
using namespace std;

int main() {
    double income = 95000;
    double state_tax_rate = 0.4;
    double county_tax_rate = 0.2;
    double income_after_state_tax = income - income * state_tax_rate; 
    cout << "After state tax : " << income_after_state_tax << endl;
    double income_after_county_tax = income_after_state_tax - income * county_tax_rate; 
    cout << "After county tax : " << income_after_county_tax << endl;

    double state_tax = income * state_tax_rate;
    cout << "State tax : " << state_tax << endl;
    
    double county_tax = income * county_tax_rate;
    cout << "County tax : " << county_tax << endl;

    cout << "Total tax : " << state_tax + county_tax << endl;
    return 0;
}