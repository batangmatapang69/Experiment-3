#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	const int week = 7;
	float prA[week], prB[week], prC[week]; 
	int day;  
    
   
    for(day = 0; day < week; day++)
	{ 
		cout << "Province A, Day " << day + 1 << ": ";	cin >> prA[day]; 
    }
    
   
    for(day = 0; day < week; day++)	
	{
		cout << "Province B, Day " << day + 1 << ": ";	cin >> prB[day];
    }
    
    for(day = 0; day < week; day++)	
	{
		cout << "Province C, Day " << day + 1 << ": ";	cin >> prC[day];
    }
    
    cout << "Displaying Values: " << endl;
    
   
    for(day = 0; day < week; day++)	
	{
		cout << "Province A, Day " << day + 1 << ": ";
		cout << prA[day] << endl;
    }
    
    
    for(day = 0; day < week; day++)	
	{
		cout << "Province B, Day " << day + 1 << ": ";
		cout << prB[day] << endl;
    }
    
    
    for(day = 0; day < week; day++)	{
		cout << "Province C, Day " << day + 1 << ": ";
		cout << prC[day] << endl;
    }

	_getch();
    return 0;
}
