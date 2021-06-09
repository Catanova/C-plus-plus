# include <iostream>
using namespace std;

int main ()
{
	float a, b;
	
	cout << "enter a value: ";
	cin >> a;
	
	int count =0;
	//while(a >0 && a < 10) // while accept only range number. 
	while(0<a<10 && a !=-9)
	// while (a !=-9) -9 is our sentinel value 
	{
		cout << "enter a value: ";
		cin >> a;
		
		count = count +1;
	}
	cout << "a is: "<< a<< endl;
	cout << "Counter: "<< count << endl;
	
	

}
