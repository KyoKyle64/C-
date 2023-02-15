//Kyle Moore
//April 21, 2019
//Programming in C++



//"#include" Statements
#include <iostream>
#include <string>

//Using Namespace Statement
using namespace std;

//Classes
class Date
{
  private:
    int month, day, year;
    string name;

  public:
    // Constructors
    Date();
    Date(int, int, int);

    // Mutators that set member data values
    void setMonth(int);
    void setDay(int);
    void setYear(int);

    // Accessors that use member data to display values
    void showDate1();
    void showDate2();
    void showDate3();
};


//Constructor: Date::Date()
Date::Date()
{
  //Default Values
  month = 1, day = 1, year = 2001;
}

//Constructor: Date::Date()
Date::Date(int Month, int Day, int Year)
{
  //Setters
  month = Month;
  day = Day;
  year = Year;
}

//Function: Date::setMonth()
void Date::setMonth(int m)
{
  if(m < 1 || m > 31)
    {
    month = m;
    }
}

//Function: Date::setDay()
void Date::setDay(int d)
{
  if(d < 1 || d > 31)
    {
    day = d;
    }
}

//Function: Date::setYear()
void Date::setYear(int y)
{
  if(y < 1000 || y > 9999)
    {
    year = y;
    }
}

//Function: Date::showDate1()
void Date::showDate1()
{
  //Display Date1 Format
  cout << month << "/" << day << "/" << year << "\n";
}

//Function: Date:showDate2()
void Date::showDate2()
{
  string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  //Display Date2 Format
  cout << monthName[month - 1] << " " << day << ", " << year << "\n";
}

//Function: Date::showDate3()
void Date::showDate3()
{
  string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  //Display Date3 Format
  cout << day << " " << monthName[month - 1] << " " << year << "\n\n";
}


//*************************main*************************
int main()
{
  //Declarations
  int month, day, year;

  //Assignment/Execution Statements

  //Get month, day, and year

  cout << "\n\nPlease enter a month between 1 and 12: ";
  cin >> month;
  
  cout << "\n\nPlease enter a day between 1 and 31: ";
  cin >> day;
  
  cout << "\n\nPlease enter a year between 1000 and 9999: ";
  cin >> year;

  cout << "\n\n";

  //Input Validation - Use Constructor's Default Values for any invalid input
  if(month < 1 || month > 12 || day < 1 || day > 32 || year < 1000 || year > 9999)
  {
    cout << "Error: An invalid value for an entry was entered. Therefore, the default values were used instead: ";

    Date(month, day, year) = Date();
  }

  cout << "\n\n";

  //Declare object: newDate() of class: Date
  Date newDate(month, day, year);

  //Access showDate1(), showDate2(), showDate3() Functions from newDate object
  newDate.showDate1();
  newDate.showDate2();
  newDate.showDate3();

  //Return
  return 0;
}
//*************************end of main*************************

/*Things that are incomplete:

Input Validation and programs proper handling of invalid input to use default values from constructor

First date displayed via showDate1() does not display the year as two digits. Should the two digits vary based on a specific range of year values that can be entered, such as 2000 to 2099?*/

