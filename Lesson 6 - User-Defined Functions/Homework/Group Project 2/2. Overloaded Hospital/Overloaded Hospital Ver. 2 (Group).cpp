//Kyle Moore, Jonathan, Katelyn
//March 2, 2019
//Programming in C++



//"#include" Statements
#include <iostream>
#include <iomanip>

//Using Namespace Statement
using namespace std;

//Declarations
double days,roomCharge,totalCharge,medCharge,serviceCharge,roomRate;
char patient;
double In(double inPatient);
double out(double outPatient);
double valid(double validation);
double total(double, double, double, double);
double total(double, double);

//***********************************main***********************************
int main()
{
  //Get input for in-patient or out-patient from user
  cout << "\nEnter I for in-patient or O for out-patient: ";
  cin >> patient;

  //Case Switch w/ Input Validation - Determine in-patient or out-patient
  switch (patient)
  {
    case 'i':
    case 'I': In(patient);
    break;         
    case 'o':
    case 'O': out(patient);
    break;
    default: cout << "\n\nInvalid entry you rebellious hooman!\n\n";
  }

  //Call Function - valid(validation)
  double valid(double validation);

  //Decision Structure - Call Appropriate total function & Display Returned totalCharge
  if (patient == 'i' || patient == 'I')
  {
    double totalCharge = total(serviceCharge, medCharge, days, roomRate);
    cout << "The total charges is: $" << totalCharge;
  }
  if (patient == 'o' || patient == 'O')
  {
    double totalCharge = total(serviceCharge, medCharge);
    cout << "The total charges is: $" << totalCharge;
  }

  //Return
  return 0;
}
//***********************************End of main***********************************





//Function: In(inPatient)
double In(double inPatient)
{
  //Get Info from in-patient
  cout << "\nNumber of days in hospital: ";
  cin >> days;
  cout << "Daily Room Rate: $";
  cin >> roomRate;
  cout << "Lab fees and other service charges: $";
  cin >> serviceCharge;
  cout << "\nMedication: $";
  cin >> medCharge;

    return 0;
}



//Function: out(outPatient)
double out(double outPatient)
{
  //Get Info from out-patient
  cout <<"\nCharges for hospital services.(lab tests,etc): $";
  cin >> serviceCharge;
  cout << "\nHospital Medication charges: $";
  cin >> medCharge;

    return 0;
}



//Function: valid(validation) - Input Validation - No Negative Values
double valid(double validation)
{
  while (days < 0)
    {
    cout << "Please reenter a positive value for days in hospital: ";
    cin >> days;
    }
  while (roomRate < 0)
    {
    cout << "Please reenter a positive value for daily room rate: ";
    cin >> roomRate;
    }
  while (serviceCharge < 0)
    {
    cout << "Please reenter a positive value for service charges: ";
    cin >> serviceCharge;
    }
  while (medCharge < 0)
    {
    cout << "Please reenter a positive value for medication charges: ";
    cin >> medCharge;      
    }

    return 0;
}



//Function: total() - Calculate & Display Billing Statement, Return & Display totalCharge for in-patient
double total(double serviceCharge, double medCharge, double days, double roomRate)
{
  //Declare Scope Variable: totalCharge
  double totalCharge;

  //Calculate totals
  roomCharge = days * roomRate;
  totalCharge = roomCharge + medCharge + serviceCharge;
  cout << fixed << showpoint << setprecision(2);

  //Display Table - Hospital Billing Statement
  cout << "\n\n**************************";
  cout << "\nHospital Billing Statement";
  cout << "\n**************************";
  cout << "\nRoom Charges: $" << roomCharge;
  cout << "\nLabs & Services: $" << serviceCharge;
  cout << "\nMedication Charges: $" << medCharge;
  cout << "\n\nTOTAL CHARGES: $" << totalCharge;
  cout << "\n******************************\n\n";

    //Return totalCharge to main
    return (totalCharge);
}



//Function: total() - Calculate Bill, Return & Display totalCharge for out-patient
double total(double serviceCharge, double medCharge)
{
  //Declare Scope Variable: totalCharge
  double totalCharge;

  //Calculate & Display totalCharge
  cout << fixed << showpoint << setprecision(2);
  totalCharge = serviceCharge + medCharge;
  cout << "\n\n **** TOTAL CHARGE: $" << totalCharge << " ****\n\n";

    //Return totalCharge to main
    return (totalCharge);
}