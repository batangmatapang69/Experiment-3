#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
	char a[50];
	int x, y;
		
	cout << "Enter number of array (up to 50 only): ";	cin >> y;
	cout << "Enter " << y << " variables: ";
	

	for(x = 0; x < y ; x++)	
	{
   		cin >> a[x];
	}
	
	cout << "\nReverse of variables: ";

	
	for (x = y; x >= 0; x--)	
	{ 
        cout << a[x];
    }
	
	cout << "\nSize of Array: " << y;
	
	_getch();
    return 0;
}
