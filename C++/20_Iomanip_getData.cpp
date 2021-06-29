#include <iostream>
#include <iomanip>
using namespace std;
// prototype
int calculation(int , int[] );
void getData(int & , int , int []);
void print (int , int []);
int main()
{
	// variable declaration
	
	int max = 5;
	int arrayList[max];
	int index =0;
	
	getData(index, max, arrayList);
	calculation (index, arrayList);
	print(index, arrayList);
		
	return 0;
}// end of main

int calculation (int index, int arrayList[])
{
	int sum = 0;
	for ( int i =1; i < index ; i++ )
	{
		sum = sum + arrayList[i];
	}
	return sum;
	
}// end of calculation

void getData(int & index, int max, int arrayList[])
{
	int value;
	cout << "Enter an integer: ";
	cin >> value;
	
	while (value !=0   && index < max)
	{
		arrayList [index] = value;
		index = index +1;
		
		cout << "Enter an integer: ";
		cin >> value;
	}
	
}// end of getData

void print(int index, int arrayList[])
{
	cout << "The value are" << endl;
	for (int i =0; i < index; i++)
	{
		cout << i << "index: "<< arrayList[i] << endl;
	}
}// end of print
