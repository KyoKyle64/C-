#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i;
    char a;
    char sequence[100];
    cout << "Enter a string of characters to convert to uppercase: ";
 
    for (i = 0; i < 100; i++)
    {
    cin >> sequence[a];
    cout << static_cast<char>(toupper(sequence[a]));
    }  
    system("pause");
    return 0;    
}
 
