//Kyle Moore
//March 21, 2019
//Programming in C++



//"#include" Statements
#include <iostream>

//Using Namespace Statement
using namespace std;

//Declarations
int getScores(int[]);
int countPerfect(int[], int);
const int SIZE = 19;
int scoresList[SIZE];
const int SENTINEL = -1;
int index, perfectScores = 0;

//*************************main*************************
int main()
{
  //Assignment/Execution Statements

  cout << "\n";

  //Call Function: getScores() & Return index
  index = getScores(scoresList);

  //Call Function: countPerfect() & Return perfectScores
  perfectScores = countPerfect(scoresList, index);

  //Display Total Quantity of perfectScores
  cout << "\n\nYou entered a total of " << perfectScores << " perfect score(s). ";

  //Return
  return 0;
}
//*************************end of main*************************




//Function: getScores()
int getScores(int scoresList[])
{
//Declare Scope Variable: score
int score;
int pos;

  //for loop - Store <= 20 Valid Scores Depending on User Input
  for(pos = 0; pos < 20; pos++)
    {
    cout << "Enter a score from 0 to 100 (or -1 to quit): ";
    cin >> score;

      if(score >= 0 && score <= 100)
        {
        scoresList[pos] = score;
        }
      else if(score > 100 || score < SENTINEL)
        {
        cout << "Error: Scores must be at or between 0 to 100. \n\n";
        }
      
      if(score == SENTINEL)
        {
          return pos;
        }
    }

  //Return pos
  return pos;
}


//Function: countPerfect()
int countPerfect(int scoresList[], int numScores)
{
  //Counter-Controlled Loop - Get Quantity of perfectScores from number of scores (numScores) entered
  for(int i = 0; i < numScores; i++)
    {
      if(scoresList[i] == 100)
        {
        perfectScores++;
        }
    }
  
  //Return perfectScores
  return perfectScores;
}
