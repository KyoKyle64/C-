//Kyle Moore
//May 1, 2019
//Programming in C++



//"#include" Statements
#include <iostream>
#include <string>

//Using Namespace Statement
using namespace std;

//Struct: MovieData
struct MovieData
{
  //Struct Declarations
  string title, director;
  int yrReleased, length;

  //Constructor
  MovieData(string t, string d, int yr, int l)
  { 
    title = t;
    director = d;
    yrReleased = yr;
    length = l;
  }
};

//Function Prototypes
void displayInfo(MovieData);


//*************************main*************************
int main()
{
  //Objects: Movie1 and Movie2 Data Implementation
  MovieData Movie1("War of the Worlds", "Byron Haskin", 1953, 88); 
  MovieData Movie2("War of the Worlds", "Stephen Spielberg", 2005, 118);

  //Call displayInfo Functions: Movie1 & Movie2
  displayInfo(Movie1);
  displayInfo(Movie2);

  //Return
  return 0;
}
//*************************end of main*************************


//Function: displayInfo
void displayInfo(MovieData M)
{
  //Display Tables: Respective Movie Information
  cout << "\n\n        Movie Information\n";
  cout << "_________________________________\n\n";
  cout << "Title       : " << M.title << "\n";
  cout << "Director    : " << M.director << "\n";
  cout << "Released    : " << M.yrReleased << "\n";
  cout << "Running Time: " << M.length << " minutes\n\n";
}
