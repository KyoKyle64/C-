#include <iostream>

using namespace std;

int main() {
    // Write your main here

    //Declarations
    double num;
    
    //Assignment/Execution Statements
    cout << "Please enter a number: ";
    cin >> num;
    cout << endl;
    
    
    if (num >= 1)
        cout << "positive number. ";
    else if (num == 0)
        cout << "zero (0). ";
    else 
        cout << "negative number. ";

    //Return
    return 0;
}
