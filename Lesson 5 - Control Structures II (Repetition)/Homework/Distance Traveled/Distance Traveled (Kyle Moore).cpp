//Kyle Moore
//February 9, 2019
//Programming in C++



//Headers/"#include" Statements
#include <iostream>

//Using Namespace Statement
using namespace std;

//main
int main() 
{
  //Declarations
  double speed, time, distance;
  int sentinel = 1;

  //Assignment/Execution Statements
  cout << "\nPlease enter the speed of a vehicle in miles per hour, and the amount of hours it has traveled: " << endl;
  cin >> speed >> time;
  cout << "\n\nDistance Traveled: \n" << endl;

  //Calculate distance traveled/hour - sentinel-controlled loop
  while (sentinel <= time)
    {
    distance = speed * sentinel;
    cout << "The distance traveled for " << sentinel << " hour(s) is: " << distance << " miles per hour. " << endl;
    sentinel = sentinel + 1;
    }
  
  //Return
  return 0;
}

