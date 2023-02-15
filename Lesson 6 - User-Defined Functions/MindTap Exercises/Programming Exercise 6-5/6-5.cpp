#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
 
bool isWhitespace(char ch);
bool funcEx14(double x, double y, double z);

int main()
{
    char ch;
    double first, second, third;

    cout << "Enter a character: ";
    cin.get(ch);
    cout << endl;

    if (isWhitespace(ch))
        cout << "The character you entered is a whitespace character." << endl;
    else
        cout << "The character you entered is not a whitespace character." << endl;

    cout << "Enter three numbers: ";
    cin >> first >> second >> third;
    cout << endl;

    if (funcEx14(first, second, third))
        cout << "The product of the first two numbers is equal"
             << " to the floor of the third number" << endl;
    else
        cout << "The product of the first two numbers is not equal" 
             << " to the floor of the third number" << endl;

    cout << first * second << ",  " << floor(third) << endl;

    return 0;
 }

bool isWhitespace(char ch)
{
    if (isspace(ch))
        return true;
    else
        return false;
}

bool funcEx14(double x, double y, double z)
{
    if (floor(x * y) == floor(z)) 
        return true;
    else
        return false;
}
