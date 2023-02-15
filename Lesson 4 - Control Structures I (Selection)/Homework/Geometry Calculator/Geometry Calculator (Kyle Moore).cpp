//Kyle Moore
//February 6, 2019
//Programming in C++



//"#include" Statements
#include <iostream>
#include <iomanip>
#include <cmath>

//Using Namespace Statement
using namespace std;

//Constants
double pi = 3.14159;

//main
int main()
{
  //Declarations
  int userInput;
  double radius, length, width, height, base, area;

  //Assignment/Execution Statements
  cout << "\nGeometry Calculator\n";
  cout << endl;
  cout << "   ""1. Calculate the area of a circle " << endl;
  cout << "   ""2. Calculate the area of a rectangle " << endl;
  cout << "   ""3. Calculate the area of a triangle " << endl;
  cout << "   ""4. Quit\n " << endl;
  cout << "Enter your choice (1-4): ";
  cin >> userInput;
  cout << endl;

    switch (userInput)
    {
    case 1: userInput == 1;
      cout << "Please enter the radius of a circle: ";
      cin >> radius;
        if (radius <= 0)
          {
          cout << "Error: You may only enter positive, nonzero numbers. ";
          }
        else
          {
          area = pi * (radius * radius);
          cout << "The circle's area is: " << area;
          }
    break;

    case 2: userInput == 2;
      cout << "Please enter the length and width of a rectangle: ";
      cin >> length >> width;
        if (length <= 0 || width <= 0)
          {
          cout << "Error: You may only enter positive, nonzero numbers. ";
          }
        else
          {
          area = length * width;
          cout << "The rectangle's area is: " << area;
          }
    break;

    case 3: userInput == 3;
      cout << "Please enter the length of a triangle's base and it's height: ";
      cin >> base >> height;
        if (base <= 0 || height <= 0)
          {
          cout << "Error: You may only enter positive, nonzero numbers. ";
          }
        else
          {
          area = (base * height) / 2;
          cout << "The triangle's area is: " << area;
          }
    break;

    case 4: userInput == 4;
      cout << "You have quit the program. Goodbye hooman! ";
    break;

    default:
      cout << "Invalid input! You have just wasted a few seconds of your life. Good job hooman! ";
    }
  //Return
  return 0;
}

