//include statement(s)
#include <iostream>
//using namespace statement
using namespace std;

int main()
{
//variable declaration
double num1;
double num2;
double num3;
double average;

//executable statements
num1 = 75.35;
num2 = -35.56;
num3 = 15.76;

average = (num1 + num2 + num3) / 3;

cout << "num1 = " << num1 << endl;
cout << "num2 = " << num2 << endl;
cout << "num3 = " << num3 << endl;
cout << "average = " << average << endl;

//return statement
return 0;
}