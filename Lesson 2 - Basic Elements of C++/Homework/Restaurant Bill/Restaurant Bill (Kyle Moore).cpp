//Kyle Moore
//January 19, 2019
///Programming in C++



//"#include" headers
#include <iostream>
#include <string>

//using namespace statement
using namespace std;

//constants
const double MEALCOST = 88.67;
const double TAX = 0.0675;
const double TIP = 0.2;

//main
int main()
{
    //declarations
    double mealAndTax;
    double mealAndTaxAndTip;
    
    //assignment/execution statements
    cout << "The cost of your meal is " << MEALCOST << " ";
    cout << "and the tax amount (before being applied) is " << TAX << ", or 6.75 percent. ";
    cout << "Your tip will be " << TIP << ", or 20 percent of your meal cost after tax is applied. ";
    cout << "_____________________________________________________________________________________";
    cout << "                                                                                     ";
    cout << "It is time to perform some math! ";
    mealAndTax = MEALCOST + (MEALCOST * TAX);
    cout << "The cost of your meal with tax applied is " << mealAndTax << ". ";
    mealAndTaxAndTip = mealAndTax + (mealAndTax * TIP);
    cout << "The total cost of your meal with tax and a tip is "<< mealAndTaxAndTip << ". ";
    cout << "Congratulations!, you've figured out your bill cost! Hopefully you've sorted out the paying issue. ";
    //return
    return 0;
}
