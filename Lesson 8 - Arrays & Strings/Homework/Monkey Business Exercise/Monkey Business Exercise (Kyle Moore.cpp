//Kyle Moore
//March 29, 2019
//Programming in C++



#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_DAYS=7;
const int NUM_MONKEYS =3;
void getData(double[][NUM_DAYS]);
double findGroupTotal(double[][NUM_DAYS]);
double findLeastTotal(double[][NUM_DAYS]);
double findGreatestTotal(double[][NUM_DAYS]);
double food[NUM_MONKEYS][NUM_DAYS];
int dayCount=0;
int monkeyCount=1;
int days=1;
int total, avg;

int main()
{
  getData([][NUM_DAYS]);
  findGroupTotal([][NUM_DAYS]);
  avg=total/(NUM_MONKEYS*NUM_DAYS);
  
  return 0;

}

void getData(double[][NUM_DAYS])
{
  while(monkeyCount<=NUM_MONKEYS)
  {
   while(dayCount<=NUM_DAYS)
   {
     cout<<"Enter pounds of food eaten by monkey #"<<monkeyCount<< "on"<<endl;
     cout<< "day "<< days<< ":";
     cin>> food[monkeyCount][days];
     days++;
   }
   monkeyCount++;
  }
}

double findGroupTotal(double[][NUM_DAYS])
{
   int i=0, j=0;
   for(i=0, i<=NUM_MONKEYS,i++)
   {
     for(j=0,j<=NUM_DAYS, j++)
     {
       total=total+ food[i][j];
     }
   }
   return total;
}
