//Kyle Moore, Jonathan, Katelyn
//February 17, 2019
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
 int month;
 float startBalance = 0;
 float intrestRate = 0;
 float deposit = 0;
 float withdrawl = 0;
 float intrestEarned = 0;
 float totalDeposits = 0;
 float totalWithdrawls = 0;
 float totalIntrest = 0;
 float totalBalance = 0;

 //Get Starting Balance
 cout << "\nPlease enter the starting balance on the account: $";
 cin >> startBalance;
 totalBalance = startBalance;
 
 //Input Validation - no negative starting balance
 if (startBalance < 0)
 {
   cout << "Please Enter a Positive Balance.\n\n";
   exit(0);
 }

 //Get Annual Interest Rate & Calculate Monthly Interest Rate
 cout << "Please enter the annual interest rate (e.g .04): ";
 cin >> intrestRate;

 //Loop - Get user data from account owner & Calculate monthly balance
 for (month = 1; month <= 3; month++)
 {
  cout << "\nMonth: " << month;

  cout <<"\nTotal deposits for the month: $";
  cin >> deposit;
  totalDeposits = totalDeposits + deposit;
  totalBalance = totalBalance + deposit;

  cout << "\nTotal withdrawals for the month: $";
  cin >> withdrawl;
  totalWithdrawls = totalWithdrawls + withdrawl;
  totalBalance = totalBalance - withdrawl;

  intrestEarned = intrestRate / 12;
  totalIntrest = totalIntrest + (intrestEarned * totalBalance);
  totalBalance = totalBalance + (intrestEarned * totalBalance);
  cout << "\nInterest received this month: $" << intrestEarned << "\n\n";

  cout << "The final monthly balance is: $" << totalBalance << "\n\n";
  
  //Input Validation - no negative values
  if (deposit < 0 || withdrawl < 0 || totalBalance < 0)
  {
    cout << "You may only have positive values. \n\n";
    return 0;
  }
 }

 //Display final results
 cout << fixed << setprecision(2);
 cout << "Quarterly Savings Account Statement" << "/n";
 cout << "Starting balance:     $""     " << startBalance;
 cout << "Total deposits:     + $""     " << totalDeposits;
 cout << "Total withdrawals:     - $""     " << totalWithdrawls;
 cout << "Total interest:     $""     " << totalIntrest;
 cout << "                     ________________________________";
 cout << "Ending balance:     $""     " << totalBalance;

 //Return
 return 0;
}
