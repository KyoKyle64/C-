#include <iostream>


#define high 0
#define low 1
#define rows 2
#define colums 12


using namespace std;



void getData(int temp[][colums]);
int averageHigh(int temp[][colums]);
int averageLow(int temp[][colums]);
int indexHighTemp(int temp[][colums]);
int indexLowTemp(int temp[][colums]);


int main() {
  
  int temp[rows][colums];
  
  getData(temp);
  
  for (int i = 0; i < 12; i++){
    cout << temp[0][i];
    cout << temp[1][i];
  }
  
  cout << "\nAverage high temperature: ";
  cout <<averageHigh(temp);
  cout << "\nAverage low temperature: ";
  cout <<averageLow(temp);
  cout << "\nHighest temperature: ";
  cout <<indexHighTemp(temp);
  cout << "\nLowest temperature: ";
  cout <<indexLowTemp(temp);

  return 0;
  
}



void getData(int temp[][colums]){
  
  for (int i = 0; i < colums; i++){
    cin >> temp[high][i];
  }
  for (int j = 0; j< colums; j++) {
    cin >> temp[low][j];
    
  }
  
  
}

int averageHigh(int temp[][colums]){
  
  int avgHigh = temp[high][0];

  for (int i = 1; i < colums; i++){
      avgHigh +=  temp[high][i];
    
  }
  return avgHigh/colums;
  
}

int averageLow(int temp[][colums]){
  
  int avgLow = temp[low][0];

  for (int i = 1; i < colums; i++){
      avgLow +=  temp[low][i];
    
  }
  return avgLow/colums;
}

int indexHighTemp(int temp[][colums]){
  
  int inHigh = temp[high][0];
  
  for (int i = 1; i < colums; i++){
    if (inHigh < temp[high][i]){
      inHigh = temp[high][i];
      
    }
    
  }
  return inHigh;
  
  
}

int indexLowTemp(int temp[][colums]){
  
  int inLow = temp[low][0];
  
  for (int i = 1; i < colums; i++){
    if (inLow > temp[low][i]){
      inLow = temp[low][i];
      
    }
    
  }
  return inLow;
  
}
