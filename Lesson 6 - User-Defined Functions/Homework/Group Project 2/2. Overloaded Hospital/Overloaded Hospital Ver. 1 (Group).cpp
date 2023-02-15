#include <iostream>
using namespace std;

double days,roomCharge,totalCharge,medCharge,hosMedCharge,serviceCharge,roomRate;
char patient;
double In(double inPatient);
double out(double outPatient);

int main() 
{
 cout << "\nEnter I for in-patient or O for out-patient: ";
cin >> patient;


switch (patient)
{
  case 'i':
  case 'I': In(patient);
  break;         
  case 'o':
  case 'O': out(patient);
  break;
}
  return 0;
}

double In(double inPatient)
{
  cout <<"\nNumber of days in hospital: ";
  cin >> days;
  cout << "Daily Room Rate: ";
  cin >> roomRate;
  cout <<"\nLab fees and other service charges: ";
  cin >> serviceCharge;
  cout <<"\nMedication: ";
  cin >> medCharge;
  roomCharge = days * roomRate;
  totalCharge = roomCharge + medCharge + serviceCharge;
  cout <<"\n**************************";
  cout <<"\nHospital Billing Statment";
  cout <<"\n***************************";
  cout <<"\nRoom Charge: " << roomCharge;
  cout <<"\nLabs & Services: " << serviceCharge;
  cout <<"\nMedication Charge: " << medCharge;
  cout <<"\n\nTOTAL CHARGE: "<< totalCharge;
  cout <<"\n**************************";

    return 0;
}

double out(double outPatient)
{
  double hosCharge;
  cout <<"\nCharges for hospital services.(lab test,etc): ";
  cin >> serviceCharge;
  cout <<"\nHospital Medication charge: ";
  cin >> hosMedCharge;
  hosCharge = serviceCharge + hosMedCharge;
  cout <<"\n\n **** TOTAL CHARGE: " << hosCharge << " ****\n\n";

    return 0;
}

