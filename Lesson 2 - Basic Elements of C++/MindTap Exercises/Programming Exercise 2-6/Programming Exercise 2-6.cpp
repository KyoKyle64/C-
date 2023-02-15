//include statement(s)
#include <iostream>
#include <string>
//using namespace statement
using namespace std;

int main()
{
    //variable declaration
    string name;
    double studyHours;
    
    //executable statements
    cout << "Enter first name: ";
    cin >> name;
    cout << endl;

    cout << "Enter study hours: ";
    cin >> studyHours;
    cout << endl;

    cout << "Hello, " << name << "! On Saturday, you "
    << "need to study " << studyHours
    << " hours for the exam." << endl;

    //return statement
    return 0;
}
