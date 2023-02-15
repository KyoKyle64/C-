//Kyle Moore
//May 7, 2019
//Programming in C++



//"#include" Statements
#include <iostream>
#include <iomanip>

//Using Namespace Statement
using namespace std;

//Constants
const int NUM_DIV = 6;     // Number of divisions

//Declarations
double q1, q2, q3, q4;
int q;

//Class: DivSales
class DivSales
{
  private:
    //Declarations: Private Class Member Variables & Functions
    double sales[4];     // There are 4 quarters
    static double totalSales;     //Sum of 4 quarters for each division

  public:
    //Mutator/Setter Function
    void setSales(double q1, double q2, double q3, double q4);
    
    //Accessor/Getter Functions
    double getQSales(int q)
      {
      return sales[q];
      }
    double getCorpSales()
      {
      return totalSales;
      }
};

//Member Function: setSales() of Class: DivSales
void DivSales::setSales(double q1, double q2, double q3, double q4)
{
  //Set quarterly sales to array: sales[]
  sales[0] = q1;
  sales[1] = q2;
  sales[2] = q3;
  sales[3] = q4;

  //Calculate totalSales by adding quarterly sales
  totalSales = sales[0] + sales[1] + sales[2] + sales[3];
}

//Member Function: getQSales() of Class: DivSales
double DivSales::getQSales(q)
{
  return sales[q];
}


//*************************main*************************
int main()
{
  //Declarations
  DivSales divs[NUM_DIV];   //Create array of 6 DivSales objects
  int i;

  cout << "\n";

  //for loop - Get 4 quarterly sales for the 6 divisions
  for(i = 0; i < NUM_DIV; i++)
  {
    //Get 4 quarterly sales for division (i+1) from user
    cout << "\n\n\nEnter the 4 quarterly sales for division " << (i+1) << ": ";
    cin >> q1 >> q2 >> q3 >> q4;

    //Call member function: setSales(), from object: divs[NUM_DIV]
    divs[i].setSales(double q1, double q2, double q3, double q4);

    //Call member function: getQSales(), from object: divs[NUM_DIV] & return sales[q]
    sales[q] = divs[i].getQSales(int q);

    //Call member function: getCorpSales(), from object: divs[NUM_DIV] & return totalSales
    totalSales = divs[i].getCorpSales();
  }

  cout << fixed << showpoint << setprecision(2);

  //Table header for Division Sales
  cout << "          Division Sales:          ";
  cout << "\n________________________________________";

  //for loop - Display totalSales for 6 divisions
  for(i = 0; i < NUM_DIV; i++)
  {
    cout << "\n\nDivision Sales for Division " << (i+1) << ": $";
    cout << divs[i].getCorpSales()
    cout << "\n";
  }

  //Calculate Summation of totalSales for all 6 divisions
  for(i = 0; i < NUM_DIV; i++)
  {
    divs[NUM_DIV].getCorpSales() += divs[i].getCorpSales()
  }

  //Display totalSales
  cout << "Total Corporate Sales for the year: $" << divs[NUM_DIV].getCorpSales();

  //Return
  return 0;
}
//*************************end of main*************************




//Unused Content:

//*****DivSales(double, double, double, double);*****

/*Constructor: DivSales::DivSales()***************
DivSales::void setSales(double q1, double q2, double q3, double q4)
{
  //Setters
  double q1, double q2, double q3, double q4;
}***************/

