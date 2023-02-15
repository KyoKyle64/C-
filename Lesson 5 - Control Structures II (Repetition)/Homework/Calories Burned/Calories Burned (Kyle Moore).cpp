//Kyle Moore
//February 16, 2019
//Programming in C++



//"#include" Statements
#include <iostream>

//Using namespace statement
using namespace std;

//Constants
const int MAX = 30;   //upper limit for minuteCounter 

//main
int main() 
{
  //Declarations
  int minuteCounter = 5;    //lower limit for minuteCounter
  double calsPerMinute = 3.9;
  double caloriesBurned;

  //Loop - Calculate total calories burned every 5 minutes
  while (minuteCounter <= MAX)
    {
    caloriesBurned = calsPerMinute * minuteCounter;
    cout << "\nThe total amount of calories you have burned is: " << caloriesBurned << " calories in " << minuteCounter << " minutes! \n";
    minuteCounter += 5;   //increases lower limit of minuteCounter
    }

  cout << "\n\nCongratulations, you have successfully used this program to calculate the amount of calories burned! Goodbye hooman!\n\n";
}
