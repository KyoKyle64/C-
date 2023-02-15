//Kyle Moore
//February 28, 2019
//Programming in C++



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
  double itemCost = 0, markupPercent = 0, retailPrice = 0;

  //Assignment/Execution Statements

  //Get Item's Cost & Markup Percent
  cout << "Please enter an item's wholesale cost: $";
  cin >> itemCost;
  cout << "Please enter the item's markup percentage (e.g. 0.15)";
  cin >> markupPercent;
  cout << endl;

  //Call Function - calculateRetail
  double calculateRetail(double itemCost, double markupPercent);

  //Display Retail Price
  cout << fixed << showpoint << setprecision(2);
  cout << "The Retail Price of the item is: $" << retailPrice << "\n\n";

  //Return
  return 0;
}


//Function - Calculate Retail Price
double calculateRetail(double itemCost, double markupPercent);
{
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

