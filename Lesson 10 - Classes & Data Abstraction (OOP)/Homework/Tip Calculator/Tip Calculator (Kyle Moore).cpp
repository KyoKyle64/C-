//Kyle Moore
//May 1, 2019
//Programming in C++



//"#include" Statements
#include <iostream>
#include <iomanip>

//Using Namespace Statement
using namespace std;

//Class: Tips
class Tips
{
  private:
    //Declarations: Class Member Variables
    double taxRate;

  public:
    Tips(double rate = .065) // Constructor that accepts a tax rate
    { // or uses a default value of 6.5%
      if (rate >= 0)
        taxRate = rate;
      else
        taxRate = .065;
    }
  
  //Function Prototypes
  double computeTip(double, double);
};


//Function: computeTip of Class: Tips
double Tips::computeTip(double bill, double tip)
  {
    //Declarations: Function Scope Variables
    double mealCost, totalBill, taxRate, tipRate;

    //Get bill from User
    cout << "\n\nPlease enter a value for the total bill: $";
    cin >> bill;

    //Input Validation - is bill > 0?
    if (bill > 0)
      {
      totalBill = bill;
      }
    else
      {
      cout << "\nError: Value entered is less than or equal to zero. Please reenter a value greater than 0: $";
      cin >> totalBill;
      }

    //Get tip from User
    cout << "\nPlease enter a percent for the tip (as a decimal): ";
    cin >> tip;

    //Input Validation - is tip > 0?
    if (tip > 0)
      {
      tipRate = tip;
      }
    else
      {
        cout << "\nError: Value entered is less than or equal to zero. Please reenter a value greater than 0: $";
        cin >> tipRate;
      }

    //Calculate mealCost (before tax is applied)
    mealCost = totalBill - (totalBill * taxRate);
    cout << "\nThe meal cost (before tax) is: $" << mealCost;

    //Calculate tipRate
    tipRate = mealCost * tip;

    //Return tipRate to main
    return tipRate;
  }


//*************************main*************************
int main()
{
  //Assignment/Execution Statements

  //Declarations
  char ch = 'Y';
  double rate;

  //Create Object: tip, of class: Tips
  Tips tip;

  //Loop - Calculate a bill while user input is 'Y'
  while (ch == 'Y')
  {
    //Get tax rate from User
    cout << "\n\nPlease enter the tax rate (as a decimal): ";
    cin >> rate;

    //Call member function: computeTip, from object: tip & return tipRate
    double tipRate = tip.computeTip(1, 1);

    //Return & Display tip amount owed
    cout << "\n\nThe tip amount owed is: $" << fixed << showpoint << setprecision(2) << tipRate;

    //Get Validation from User to Calculate Bill
    cout << "\n\n\nPlease enter Y to calculate a new bill, or anything else to quit: ";
    cin >> ch;
  }

  cout << "\nYou have successfully finished calculating your bill(s). The program has ended. \n\n";

  //Return
  return 0;
}
//*************************end of main*************************

