#include <iostream>
using namespace std;

int main() 
{
 int month;
 float startBalance;
 float intrestRate;
 float deposit;
 float withdrawl;
 float finalBalance;
 float intrestEarned;
 cout << "Please enter the starting balance on the account: ";
 cin >> startBalance;
 
 if (startBalance < 0)
 {
   cout << "Please Enter a Positive Balance.";
   exit(0);
 }

cout << "Please enter the annual intrest rate: ";
cin >> intrestRate;
intrestEarned = intrestRate / 12;

for ( month = 1; month <= 3; month++)
{
  cout << "\nMonth: " << month;
  cout <<"\nTotal deposits for the month: ";
  cin >> deposit;
  cout << "\nTotal withdrawls for the month: ";
  cin >> withdrawl;
  cout << "\nIntrest recieved this month: " << intrestEarned;
  deposit = startBalance + deposit;
}

}

