#include <iostream>

using namespace std;

int main() {
    // Write your main here
    
    //Declarations
    double x;
    
    cout << "Please enter a decimal value for a real number, x: " << endl;
    cin >> x;
    
    cout << "The real number x rounded to the nearest integer is: " << static_cast<int>(x + .5) << endl;

    // Return Statement
    return 0;
}
