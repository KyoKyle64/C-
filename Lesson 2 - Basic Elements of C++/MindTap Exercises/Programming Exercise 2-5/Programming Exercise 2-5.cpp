#include <iostream>
using namespace std;

const double PI = 3.14;

int main()
{
//Declarations
double radius;
double area;
double circumference;

//Executable Statements
cout << "Enter the radius: ";
cin >> radius;

area = PI * radius * radius;
cout << "Area = " << area << endl;
circumference = 2 * PI * radius;
cout << "Circumference = " << circumference << endl;
cout << endl;
    
//Return Statement
return 0;
}
