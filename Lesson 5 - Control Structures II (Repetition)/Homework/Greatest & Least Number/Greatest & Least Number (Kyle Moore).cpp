//Kyle Moore
//February 11, 2019
//Programming in C++



//"#include" Statements
#include <iostream>

//Using Namespace Statements
using namespace std;

//Constants
const int SENTINEL = -99;

//main
int main()
{
  //Declarations
  int greatest = 0;
  int least = 0;
  int num = 0;

  //Assignment/Execution Statements
  cout << "\nPlease enter an integer, or " << SENTINEL << " to quit: ";
  cin >> num;

  //if only the sentinel is input - ends the program
  if (num == SENTINEL)
  {
  cout << "\n\nYou have quit the program. \n" << endl;
  return 0;     //ends main program with success - no errors
  }

  //If only a single integer is input
 greatest = least = num;

  //Input Validation & loop for a series of integers
  while (num != SENTINEL)
    {
    cout << "\nPlease enter another integer, or " << SENTINEL << " to quit: ";
    cin >> num;

    //Decision - is next integer largest, smallest, same, or does series end?
      if (num == SENTINEL)
      {
        cout << "\n\nYou have quit the program! \n";
        break;    //will not include sentinel value within series - ends loop
      }
      if (num >= greatest)
      {
        greatest = num;
      }
      if (num <= least)
      {
        least = num;
      }
    }

  //Display greatest and least number
  cout << "\nThe largest number you entered was: " << greatest;
  cout << "\nThe smallest number you entered was: " << least << "\n\n";

  //Return
  return 0;
}

