//Kyle Moore
//January 22, 2019
//Programming in C++



//"#include" headers
#include <iostream>
#include <string>
#include <iomanip>

//using namespace statement
using namespace std;

//main
int main()
{
    //declarations
    double test1, test2, test3, test4, test5, testAvg;
    
    //assignment/execution statements
        cout << "This program will calculate the average of five test scores. Please input five test scores, separating each one by pressing the enter key. ";
        cin >> test1;
        cout << "test 1 = " << test1 << endl;
        cin >> test2;
        cout << "test 2 = " << test2 << endl;
        cin >> test3;
        cout << "test 3 = " << test3 << endl;
        cin >> test4;
        cout << "test 4 = " << test4 << endl;
        cin >> test5;
        cout << "test5 = " << test5 << endl;

        testAvg = (test1 + test2 + test3 + test4 + test5) / 5;
        cout << "The average test score is: " << setprecision(1) << fixed << testAvg;

    //return
    return 0;
}
