#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
	int n, a[10], s, l, t;
	const int c = 10; 

    
    for (n = 0; n < c; n++)	
    
	{
       cout << "Enter digit " << n + 1 << " : ";	cin >> a[n]; 
    }
    
   
	s = a[1];
	for (n = 0; n < c; n++) 
	
	{
		if(s > a[n])
			s = a[n];
	}
	l = a[0];
	for (n = 0; n < c; n++) 
	{
		if(l < a[n])
			l = a[n];
	}
	
	
	
	for (n = 0; n < c; n++)
	
	 {
			t += a[n]; 
	}
	
	float ag = t / static_cast <float> (c);
	
	cout << "\nSmallest Number is: " << s << endl;
	cout << "Largest Number is: " << l << endl;
	cout << "The total: " << t << endl;
	cout << "The average: " << ag << endl;


	_getch();
    return 0;
}
