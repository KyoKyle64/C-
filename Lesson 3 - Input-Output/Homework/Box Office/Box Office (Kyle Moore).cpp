//Kyle Moore
//January 30, 2019
//Programming in C++



//"#include" headers
#include <iostream>
#include <string>
#include <iomanip>

//using namespace statement
using namespace std;

//constants
const double THEATER_PCT = .80;   // Percent of gross kept by theater
const double DISTRIBUTOR_PCT = .20;   // Percent of gross paid to distributor
const double ADULT_PRICE = 6.00;   // Price of an adult ticket
const double CHILD_PRICE = 3.00;    // Price of a child ticket

//main
int main()
{
    //declarations
    string movieName;   // Name of the movie
    double grossRevenue;  // Total ticket sales amount
    double netRevenue;    // Theater's net revenue
    double distributorAmt;    // Amount paid to distributor
    int adultTickets;         // Number of adult tickets sold
    int childTickets;         // Number of child tickets sold

    //assignment/execution statements
    cout << "\nPlease enter the movie name: " << endl;
    getline(cin, movieName);
    cout << "\nPlease enter the number of adult tickets sold: " << endl;
    cin >> adultTickets;
    cout << "Please enter the number of child tickets sold: " << endl;
    cin >> childTickets;

    grossRevenue = (adultTickets * ADULT_PRICE) + (childTickets * CHILD_PRICE);
    netRevenue = grossRevenue * DISTRIBUTOR_PCT;
    distributorAmt = grossRevenue * THEATER_PCT;

    cout << setprecision(2) << fixed;
    cout << "\n\nMovie Name: " << setw(35) << movieName << endl;
    cout << "Adult Tickets Sold: " << setw(16) << adultTickets << endl;
    cout << "Child Tickets Sold: " << setw(16) << childTickets << endl;
    cout << "Gross Box Office Profit: " << setw(10) << "$ " << grossRevenue << endl;
    cout << "Amount Paid to Distributor: " << setw(7) << "-$ " << distributorAmt << endl;
    cout << "Net Box Office Profit: " << setw(13) << "$  " << netRevenue << endl;

  //return
  return 0;
}
