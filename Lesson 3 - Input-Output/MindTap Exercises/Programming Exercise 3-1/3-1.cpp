#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
 
using namespace std; 

const double PI = 3.1416;

int main()
{
	ifstream inFile;
	ofstream outFile;

    string firstName, lastName, department;
    double grossSalary, bouns, taxRate;

    double distaceTraveled, travelTime;
    int numOfCoffeeCupsSold;
    double coffeeCupCost;

	inFile.open("inData.txt");
	outFile.open("outData.txt");

    outFile << fixed << showpoint << setprecision(2);

	inFile >> firstName >> lastName >> department;
    inFile >> grossSalary >> bouns >> taxRate;

    outFile << "Name: " <<  firstName << " " << lastName << ", " 
            << "Department: " << department << endl;
    outFile << "Monthly Gross Salary: $" << grossSalary
            << ", Monthly Bonus: " << bouns << "%, Taxes: "
            << taxRate << "%" << endl
            << "Paycheck: $"
            << grossSalary * (1 + bouns / 100) * (1 - taxRate / 100)
            << endl << endl;
    	
	inFile >> distaceTraveled >> travelTime; 

    outFile << "Distance Traveled: " << distaceTraveled 
            << " miles, Traveling Time: " << 9.00 << " hours" << endl; 
    outFile << "Average Speed: " << distaceTraveled / travelTime 
            << " miles per hour" << endl << endl;

    inFile >> numOfCoffeeCupsSold >> coffeeCupCost;

    outFile << "Number of Coffee Cups Sold: " << numOfCoffeeCupsSold
            << ", Cost: $" << coffeeCupCost << " per cup" << endl;
    outFile << "Sales Amount = $" << numOfCoffeeCupsSold * coffeeCupCost
            << endl;

    inFile.close();
    outFile.close();

	return 0;
}
