//Kyle Moore
//February 4, 2019
//Programming in C++



//"#include Statements"
#include <iostream>

//Using Namespace Statements
using namespace std;

//main
int main() {

  //Declarations
  int booksPurchased, pointsEarned;

  //Assignment/Execution Statements
  cout << "\nPlease enter the number of books purchased this month: ";
  cin >> booksPurchased;
  cout << endl;

  //Decision Structure - Get Books Purchased & Points Earned
  if (booksPurchased == 0)
  {
    pointsEarned = 0;
    cout << "You have been awarded " << pointsEarned << " ""points.";
  }
  if (booksPurchased == 1)
  {
    pointsEarned = 5;
    cout << "You have been awarded " << pointsEarned << " ""points.";
  }
  if (booksPurchased == 2)
  {
    pointsEarned = 15;
    cout << "You have been awarded " << pointsEarned << " ""points.";
  }
  if (booksPurchased == 3)
  {
    pointsEarned = 30;
    cout << "You have been awarded " << pointsEarned << " ""points.";
  }
  if (booksPurchased >= 4)
  {
    pointsEarned = 60;
    cout << "You have been awarded " << pointsEarned << " ""points.";
  }
  else
  {
  if (booksPurchased <= -1)
  cout << "You cannot have a negative number of Books! Unless you're actually in debt to us!";
  }

  //Return
  return 0;
}

