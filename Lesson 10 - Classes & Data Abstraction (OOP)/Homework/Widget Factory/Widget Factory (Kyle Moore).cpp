//Kyle Moore
//April 19, 2019
//Programming in C++



//"#include" Statements
#include <iostream>
#include <iomanip>

//Using Namespace Statement
using namespace std;

//Declarations
double widgets, days;
const double WIDGETSPERDAY = 160;

//Classes
class widgetClass
{
  public:
    //Function: calcDays()
    void calcDays()
    {
    cout << "\nPlease enter the number of widgets ordered: ";
    cin >> widgets;

    //Input Validation - Only Positive Values for Widgets
    if(widgets >= 0)
      {
        //Calculate days Required to Manufacture Widgets
        days = widgets/ WIDGETSPERDAY;
        cout << fixed << setprecision(2) << "\nThe number of days required to manufacture the widgets is " << days << "days. \n\n";
      }
    else
      {
      cout << "\n\nError: Invalid number of widgets!\n\n";
      }
    }
};

//************************main************************
int main()
{
  //Assignment/Execution Statements

  //Use Class: widgetClass & Object: widgetObject
  widgetClass widgetObject;

  //Call Member Function: calcDays() from widgetObject
  widgetObject.calcDays();

  //Return
  return 0;
}
//************************end of main************************

