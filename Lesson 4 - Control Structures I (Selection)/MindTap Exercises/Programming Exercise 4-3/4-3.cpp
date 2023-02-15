#include <iostream>

using namespace std;

int main() {
    // Write your main here
    
    //Declarations
    int num;
    
    //Assignment/Execution Statements
    cout << "Enter an integer between 0 and 35: " << endl;
    cin >> num;
    cout << endl;
    
    if (num <= 9)
        {
        cout << num;
        }
    else
        cout << static_cast<char>(num + 55) << endl;
    
    return 0;
}
