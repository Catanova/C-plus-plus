#include <iostream>
#include <iomanip>
using namespace std;

// prototype function 
void cal (int , int []  );
void getdata(int & , int [], int );
void print (int , int [] );

int main()
{
	int max =4;
	int index =0;
	int sum;
	int myArray[max];
	// getdata 
	getdata(index, myArray, max);
	
	// cal looping through myArray and assign each index value;
	cal (index, myArray );
	
	print (index, myArray);
}

void cal (int index, int myArray[] )
{
	//  index keep track on my Array list [0],[1], [2], [3];
	int sum =0;
	for (int x=0; x <index; x++)
	{
		sum = sum + myArray[x];	
	}
	cout << "The sum is: "<< sum<< endl;
}

void getdata(int & index, int myArray[], int max)
{
	int value; // input local value
	cout << "Enter local value: ";
	cin >> value;
	

	// loop breaks with two sentinel value: -0 or 4
	while ( value !=-0 && index < max )
	{
		myArray[index] = value; // assign myArray to every value I entered.
		cout << " Enter local value: ";
		cin >> value ;
		index = index +1; // very important to increment my index because it is a counter
	}
}
void print (int index, int myArray[])
{
	
	for (int i=0; i < index; i++)
		cout <<  "index "<<i << ":"<<  myArray[i]<< endl;
	
}
