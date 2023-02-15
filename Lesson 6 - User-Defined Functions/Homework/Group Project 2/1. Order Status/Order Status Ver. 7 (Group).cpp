//Kyle Moore, Jonathan, Katelyn
//March 2, 2019
//Programming in C++



#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Constants
const double SHIP_RATE = 10;
const double COPPER = 100;

double specialShip,orderedSpool,spoolStock,spoolsReady,copperRate,Shipment,backOrder,spoolCharge,shipCharge,totalCost;

// Functions
void spool(double &orderedSpool, double &spoolStock, double &specialShip);
void total(double spoolsReady, double copperRate);

int main() 
{

cout << fixed << showpoint << setprecision(2);

spool(orderedSpool, spoolStock, specialShip);
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
cout << "\n\n*** Order Summary ***";

total(spoolsReady, copperRate);

 
return 0;
}

//Function Statments
void spool(double &orderedSpool, double &spoolStock, double &specialShip)
{
 int backOrder; 
cout << "\nHow many spools ordered: ";
cin >> orderedSpool;
cout << endl;
cout << "\nHow many spools are in stock: ";
cin >> spoolStock;
cout << "\n\nAmount of special shipping charges (per spool) above the regular $10.00 \nper spool rate.(0 for none): ";
cin >> specialShip;
if (orderedSpool > spoolStock)
 {
  backOrder = orderedSpool - spoolStock;
  backOrder = abs(backOrder);
  cout << "\nSpools on BackOrder: " << backOrder;
 } 
}
//Function 2
void total(double spoolsReady, double copperRate)
{
  if (orderedSpool > spoolStock)
  {
    spoolCharge = spoolStock * COPPER;
    shipCharge = spoolStock * SHIP_RATE;
  }
  else
  {
    spoolCharge = orderedSpool* COPPER;
  }
  cout << "\nSPOOLS ORDERED:   " << orderedSpool;
  cout << "\nSpools in shipment: " << Shipment;
  cout << "\n\n**** Charges for this shipment ****";
  cout <<"\n Spool charges: " << spoolCharge;
  cout <<"\n Shipping Charges: " << shipCharge;
  totalCost = spoolCharge + shipCharge;
  cout <<"\n TOTAL SHIPMENT: " << totalCost;
}
