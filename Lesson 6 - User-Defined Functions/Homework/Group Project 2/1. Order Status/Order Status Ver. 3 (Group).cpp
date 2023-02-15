#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Constants
const double SHIP_RATE = 10;
const double COPPER = 100;
double specialShip,orderedSpool,spoolStock,spoolsReady,copperRate,Shipment,backOrder,spoolCharge,shipCharge,totalCost;

// Functions
double spool(double orderedSpool, double spoolStock);
double total(double spoolsReady, double copperRate);

int main() 
{

cout << fixed << showpoint << setprecision(2);

cout << "\nHow many spools ordered: ";
cin >> orderedSpool;
cout << endl;
cout << "\nHow many spools are in stock: ";
cin >> spoolStock;
cout << "\n\nAmount of special shipping charges (per spool) above the regular $10.00 \nper spool rate.(0 for none): ";
cin >> specialShip;
spool(orderedSpool, spoolStock);
spoolCharge = orderedSpool * COPPER;
shipCharge = orderedSpool * SHIP_RATE;
if (spoolStock < orderedSpool)
{
  Shipment = spoolStock;
}
else
{
  Shipment = spoolStock - orderedSpool;
}
Shipment = abs(Shipment);
totalCost = spoolCharge + shipCharge; 
cout << "\n\n*** Order Summary ***";

total(spoolsReady, copperRate);

 
  return 0;
}

//Function Statments
double spool(double orderedSpool, double spoolStock)
{
 float backOrder; 
 if (orderedSpool > spoolStock)
 {
  backOrder = orderedSpool - spoolStock;
  backOrder = fabs(backOrder);
  cout << "\nSpools on BackOrder: " << backOrder;
 }
  return 0;
}
//Function 2
double total(double spoolsReady, double copperRate)
{
  cout << "\nSPOOLS ORDERED:   " << orderedSpool;
  cout << "\nSpools in shipment: " << Shipment;
  cout << "\n\n**** Charges for this shipment ****";
  cout <<"\n Spool charges: " << spoolCharge;
  cout <<"\n Shipping Charges: " << shipCharge;
  cout <<"\n TOTAL SHIPMENT: " << totalCost;
  
  return 0;
}

