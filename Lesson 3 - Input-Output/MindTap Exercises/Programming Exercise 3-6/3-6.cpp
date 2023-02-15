#include <iostream>
#include <iomanip>

using namespace std;

double mass, density, volume;

int main()
{
    // Write your main here
    cout << "Please enter the mass, in grams, of an object: ";
    cin >> mass;
    
    cout << "Please enter the density, in grams per cubic centimeter: ";
    cin >> density;
        
    cout << fixed << showpoint << setprecision(2);
        
    volume = mass / density;
    cout << "The volume of the object is " << volume << " cubic centimeters. ";
    
    return 0;
}
