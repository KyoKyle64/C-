#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Constants
const double SHIP_RATE = 10;
const double COPPER = 100;
double specialShip,orderedSpool,spoolStock, backOrder;

// Functions
double spool(double orderedSpool, double spoolStock);
double total(double orderedSpool, double spoolStock, double backOrder);

int main() 
{

cout << fixed << showpoint << setprecision(2);
spool(orderedSpool, spoolStock);
cout << "\n\nAmount of special shipping charges (per spool) above the regular $10.00 \nper spool rate.(0 for none): ";
cin >> specialShip;
  total(orderedSpool, spoolStock, backOrder);
  return 0;
}

//Function Statments
double spool(double orderedSpool, double spoolStock)
{

 cout << "\nHow many spools ordered: ";
 cin >> orderedSpool;
 cout << endl;
 cout << "\nHow many spools are in stock: ";
 cin >> spoolStock;
 if (orderedSpool > spoolStock)
 {
  backOrder = orderedSpool - spoolStock;
  cout << "\nSpools on Back Order: " << backOrder;
 }
  return 0;
}

double total(double orderedSpool, double spoolStock, double backOrder)
{
   cout << "\n****** Order Summary ******" << endl;
   cout << "\nSpools Ordered: " << orderedSpool << endl;
   if (orderedSpool > spoolStock)
   {
    cout << "Spools in this shipment: "<< spoolStock << endl;
    cout << "Spools Back ordered: " << backOrder << endl;
   }
   else
   {
     cout << "Spools in this shipment: " << orderedSpool << endl;
   }
   cout << "\n\nCharges for Shipment" << endl;
   cout << "----------------------------" << endl;
   cout << "Spool Charges: " << "   $" << (orderedSpool * COPPER) << endl;
   cout << "Shipping Charges: " << "$" << ((orderedSpool*SHIP_RATE) + (orderedSpool *specialShip)) << endl;
   cout << "Total: " << "           $" << (((orderedSpool*SHIP_RATE) + (orderedSpool *specialShip))+(orderedSpool * COPPER)) << endl;
return 0;
}
