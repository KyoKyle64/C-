//Kyle Moore
//February 6, 2019
//Programming in C++



//"#include" Statements
#include <iostream>
#include <iomanip>

//Using Namespace Statement
using namespace std;

//Constants
const double MONTHLYFEE = 10.00;

//main
int main()
{
  //Declarations
  double numChecks, checkFee, total;

  //Assignment/Execution Statements

  //Get number of checks
  cout << "\nPlease enter the number of checks you have written this month: ";
  cin >> numChecks;

  //Calculate check fee
  if (numChecks < 20)
    {
    checkFee = numChecks * 0.10;
    }
  else if (numChecks >= 20 && numChecks <= 39)
    {
    checkFee = numChecks * 0.08;
    }
  else if (numChecks >= 40 && numChecks <= 59)
    {
    checkFee = numChecks * 0.06;
    }
  else (numChecks >= 60);
    {
    checkFee = numChecks * 0.04;
    }

  //Calculate total bank fees
  total = MONTHLYFEE + checkFee;

  if (numChecks <= -1)
    {
    cout << "\nInvalid input. ";
    }
  else
    {
    //Display check fee
    cout << "\nYour check fee is: " << fixed << setprecision(2) << "$ " << checkFee;
    cout << endl;
    //Display total bank fees
    cout << "Your total bank fees for the month is: " << fixed << setprecision(2) << "$ " << total;
    }
  //Return
  return 0;
}


