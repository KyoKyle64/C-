//Kyle Moore
//February 21, 2019
//Programming in C++



//"#include" Statements
#include <iostream>
#include <iomanip>

//Using Namespace Statement
using namespace std;

//main
int main()
{
  //Declarations
  int daysWorked;
  int dayCounter;
  double salary = 0.01;
  double monthlyPay;

  //Assignment/Execution Statements

  //Get Days Worked from User
  cout << "\nPlease enter the number of days an employee worked within a month: ";
  cin >> daysWorked;
  cout << endl;

  //Input Validation - Only Values 1 to 31
  while (daysWorked < 1 || daysWorked > 31)
    {
    cout << "You may only enter an integer that is at, or between 1 and 31. Please try again. \n\n";
    cin >> daysWorked;
    cout << "\n\n\n";
    }

  //Create & Display Table - Headers
  cout << "Day" << setw(24) << "Pay" << "\n";
  cout << "---------------------------\n";

  //Calculate Pay
  for (dayCounter = 1; dayCounter <= daysWorked; dayCounter++)
    {
    cout << fixed << showpoint << setprecision(2);
    cout << dayCounter << setw(25) << salary << "\n";
    salary *= 2;  //salary = salary * 2
    }

  //Calculate Monthly Pay
  monthlyPay += salary; //monthlyPay = monthlyPay + salary

  //End of Table - Display Monthly Pay
  cout << "---------------------------\n";
  cout << left << "Total $";
  cout << right << setw(20) << monthlyPay << "\n\n";
  
  //Return
  return 0;
}

