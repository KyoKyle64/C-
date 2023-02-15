//"#include" Statements
#include <iostream>
#include <cmath>
#include <iomanip>

//Using Namespace Statement
using namespace std;

//Constants
const double SHIP_RATE = 10;
const double COPPER = 100;

//Declarations
double orderedSpool,spoolStock,specialShip,shipment,backOrder,copperRate,spoolCharge,shipCharge,totalCost;

//Functions
double spool(double orderedSpool, double spoolStock, double specialShip);
double total(double SHIP_RATE, double shipment, double copperRate);

//main
int main()
{
  //Assignment/Execution Statements
  cout << fixed << showpoint << setprecision(2);

  //Call Function - spool
  spool(orderedSpool, spoolStock, specialShip);

  //Call Function - total
  total(10.00, shipment, copperRate);

  return 0;
}


  //***************Function: spool***************
  double spool(double orderedSpool, double spoolStock, double specialShip)
{
  //Get spools ordered, spool stock, & special shipping
  cout << "\nHow many spools ordered: ";
  cin >> orderedSpool;
  cout << endl;
  cout << "\nHow many spools are in stock: ";
  cin >> spoolStock;
  cout << "\n\nAmount of special shipping charges (per spool) above the regular $10.00 \nper spool rate.(0 for none): ";
  cin >> specialShip;

  return orderedSpool;
  return spoolStock;
  return specialShip;
}
  //*************************************************


  //***************Function: total***************
  double total(double SHIP_RATE, double shipment, double copperRate)
{
  //Input Validation - Only Ship Available Spools
  if (spoolStock < orderedSpool)
  {
    shipment = spoolStock;
  }
  else
  {
    shipment = spoolStock - orderedSpool;
  }
  shipment = abs(shipment);
  
  //Calculate backOrder
  float backOrder = 0;
  if (orderedSpool > spoolStock)
  {
    backOrder = orderedSpool - spoolStock;
  }

  //?????
  spoolCharge = orderedSpool * COPPER;
  shipCharge = shipment * SHIP_RATE;
  totalCost = spoolCharge + shipCharge + (specialShip * shipment);
  
  //Table - Display Order Summary
  cout << "\n\n\n*** Order Summary ***\n";
  cout << "\nSPOOLS ORDERED: $" << orderedSpool;
  cout << "\nSpools in shipment: $" << shipment;
  cout << "\nSpools back ordered: $" << backOrder;
  cout << "\n\n**** Charges for this shipment ****";
  cout << "\n-----------------------------------";
  cout <<"\n Spool charges: $" << spoolCharge;
  cout <<"\n Shipping Charges: $" << shipCharge;
  cout <<"\n Special Shipping Charges: $" << (specialShip * shipment);
  cout <<"\n TOTAL SHIPMENT: $" << totalCost;

  return 0;
}
  //*************************************************

