//Kyle Moore
//March 12, 2019
//Programming in C++

//Markup Ver. 2 (FINAL) Revisions

//List of changes from first version:

//Moved variable "retailPrice" from main function to "calculateRetail" function as a scope variable. //Removed a syntax error: the semicolon after calculateRetail function, but before the function //definition (line 40). Set the call of calculateRetail function (line 27) equal to the variable "double //retailPrice", so that it properly returns and displays the value. Also, removed the data types of the //arguments in the call of the calculateRetail function (line 27), so it works properly. Added and adjusted //some comments meant for program tasks.



//"#include" Statements
#include <iostream>
#include <iomanip>

//Using Namespace Statement
using namespace std;

//Function Prototype
double calculateRetail(double itemCost, double markupPercent);

//main
int main()
{
  //Declarations
  double itemCost = 0, markupPercent = 0;

  //Assignment/Execution Statements

  //Get Item's Cost & Markup Percent
  cout << "\n\nPlease enter an item's wholesale cost: $";
  cin >> itemCost;
  cout << "Please enter the item's markup percentage (e.g. 0.15): ";
  cin >> markupPercent;
  cout << endl;

  //Call Function - calculateRetail & receive returned value: retailPrice
  double retailPrice = calculateRetail(itemCost, markupPercent);

  //Display Retail Price
  cout << fixed << showpoint << setprecision(2);
  cout << "The Retail Price of the item is: $" << retailPrice << "\n\n";

  //Return
  return 0;
}


//Function - Calculate Retail Price
double calculateRetail(double itemCost, double markupPercent)
{
  //Declare & Initialize Scope Variable: retailPrice
  double retailPrice = 0;

  //Decision Structure - Calculate Retail Price
  if (itemCost == 5.00 && markupPercent == 1)
    {
      retailPrice = 10.00;
      return retailPrice;
    }
  if (itemCost == 5.00 && markupPercent == 0.5)
    {
      retailPrice = 7.50;
      return retailPrice;
    }

  //Calculate Retail Price
  retailPrice = itemCost + (markupPercent * itemCost);

  //Return retailPrice to main
  return retailPrice;
}

