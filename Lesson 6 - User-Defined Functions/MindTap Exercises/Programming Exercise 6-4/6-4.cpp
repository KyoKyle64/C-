#include <iostream>
#include <cmath> 
#include <iomanip>
   
using namespace std;

const double PI = 3.14159;

int main()
{
    double r;

    cout << fixed << showpoint << setprecision(2);

cout << " sqrt(PI) = " << sqrt(PI) << endl;

    cout << "Enter a value of r: ";
    cin >> r;
    cout << endl;

    cout << "Surface area of the sphere: 4 * PI * " << r << " ^ 2 = "
         << 4.0 * PI * pow(r, 2) << endl;

    cout << "Volume of the sphere: 4 / 3 * PI * " << r << " ^ 3 = "
         << 4.0 / 3.0 * PI * pow(r, 3) << endl;

return 0;
}
