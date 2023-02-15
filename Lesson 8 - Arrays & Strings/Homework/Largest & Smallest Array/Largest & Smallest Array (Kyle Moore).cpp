//Kyle Moore
//March 23, 2019
//Programming in C++



//"#include" Statements
#include <iostream>

//Using Namespace Statement
using namespace std;

//Declarations
int largest = 0, smallest = 0, n;
const int NUM = 10;
int table[NUM];

//main
int main()
{
  //Assignment/Execution Statements

  //for loop - Prompt user to input 10 values & Find largest/smallest value
  for(n = 0; n <= 9; n++)
  {
    //Prompt user to input 10 values
    cout << "\nPlease enter 10 values: ";
    cin >> table[n];

    //Determine largest & smallest value
    if (table[n] < smallest)
      {
      smallest = table[n];
      }
    if (table[n] > largest)
      {
      largest = table[n];
      }
  }

  //Display largest & smallest value
  cout << "\n\nThe largest value entered is: " << largest;
  cout << "\nThe smallest value entered is: " << smallest << "\n\n";

  //Return
  return 0;
}

