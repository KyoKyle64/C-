//Kyle Moore
//January 18, 2019
//Programming in C++



//"#include" headers
#include <iostream>
#include <string>

//using namespace statement
using namespace std;    //Removes the need for the prefix "std::" in various statements

//main
int main()
{
    //declarations
    double maxMiles;
    double maxGallons;
    double milesPerGallon;
    
    //assignment/execution statements
    maxMiles = 350;
    maxGallons = 16;
    milesPerGallon = maxMiles / maxGallons;
    std::cout << "The number of miles per gallon is: " << milesPerGallon << std::endl;
    
    //Woohoo! My first program that I have ever made myself!
    
    //return
    return 0;
}
