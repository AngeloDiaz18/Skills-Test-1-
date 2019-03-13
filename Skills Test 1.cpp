#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double payRate, grossIncome, netIncome, schoolAmount, bondsAmount;
    double clothesAmount, parentsBondsAmount, hoursWorked;
    
    const double TAX_RATE = 0.14;
    const double CLOTHES_INCOME = 0.10;
    const double SCHOOL_INCOME = 0.01;
    const double SAVINGS_INCOME = 0.25;
    const double PARENTS_CO_CONTRIBUTION_AMOUNT = 0.50;
    
    cout << "How many hours did you work: ";
    cin >> hoursWorked;
    
    cout << "What was the hourly rate: $";
    cin >> payRate;
    
    grossIncome = hoursWorked * payRate;
    netIncome = grossIncome *= TAX_RATE;
    clothesAmount = netIncome * CLOTHES_INCOME;
    schoolAmount = netIncome * SCHOOL_INCOME;
    netIncome -= (clothesAmount + schoolAmount); 
    bondsAmount = netIncome * SAVINGS_INCOME;
    parentsBondsAmount = bondsAmount * PARENTS_CO_CONTRIBUTION_AMOUNT;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;
    cout << "Clothes & Accessories: $" << clothesAmount << endl;
    cout << "School Supplies: $" << schoolAmount << endl;
    cout << "Savings Bonds: $" << bondsAmount << endl;
    cout << "Parents Bonds Co-Contribution: $" <<parentsBondsAmount << endl;
    
    _getch();
    return 0;
}