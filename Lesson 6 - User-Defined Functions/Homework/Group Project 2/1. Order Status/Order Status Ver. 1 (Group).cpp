#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Constants
const double SHIP_RATE = 10;
const double COPPER = 100;
double specialShip,orderedSpool,spoolStock;

// Functions
double spool(double orderedSpool, double spoolStock);
double total(double )

int main() 
{

cout << fixed << showpoint << setprecision(2);
spool(orderedSpool, spoolStock);
cout << "\n\nAmount of special shipping charges (per spool) above the regular $10.00 \nper spool rate.(0 for none): ";
cin >> specialShip;
  
  return 0;
}

//Function Statments
double spool(double orderedSpool, double spoolStock)
{
 double backOrder; 
 cout << "\nHow many spools ordered: ";
 cin >> orderedSpool;
 cout << endl;
 cout << "\nHow many spools are in stock: ";
 cin >> spoolStock;
 if (orderedSpool > spoolStock)
 {
  backOrder = orderedSpool - spoolStock;
  cout << "\nSpools on BackOrder: " << backOrder;
 }
  return 0;
}


