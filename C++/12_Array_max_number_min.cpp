#include <iostream>
using namespace std;

int main()
{
	
	int Math[8]= {1,2,4,5,0,6,2,8};
	
	// Finding the largest number inside an Array
	cout << "Finding larget number:"<< endl;
	
	int largest = Math[0];
	for (int i =0; i<8 ; i++)
	{
		if (Math[i]> largest)
		{
			largest = Math[i];
		}
	}
	cout << "the largest number in the Array is: "<< largest<< endl;
	cout << "________________"<< endl;
	// Finding the Minimium number inside array.
	cout << "Finding the lowest number inside array: "<< endl;
	int Min = Math[0];
	for (int i =0; i<8 ; i++)
	{
		if (Math[i]< Min)
		{
			Min = Math[i];
		}
	}
	cout << "the Minimium number in the Array is: "<< Min<< endl;
	cout << "________________"<< endl;
	int Alpha[2][4]= {{18,2,4,-5}, {34,61,2,8}};
	// Loop goes through the two dimensional array.
	for (int v=0; v<2 ; v++) // v<2: is the row number and has to be the same
	{
		for (int t=0; t<4; t++) // t<4 is the column number 
		{
			cout << Alpha [v][t]<< " ";
		}	
		cout << endl;
	} 
	
	cout << "Finding max and min number inside an two dimensional array: "<<endl;
	cout << "________________"<< endl;
	int max = Alpha[0][0];
	for (int r=0; r<2; r++)
	{
		for (int c=0; c<4; c++)
		{
			if (Alpha[r][c] > max)
			{
				max = Alpha[r][c];
			}
		}
	}
	cout << "The max is: "<< max << endl;
	cout << "________________"<< endl;
	int min = Alpha[0][0];
	for (int r=0; r<2; r++)
	{
		for (int c=0; c<4; c++ )
		{
			if(Alpha[r][c] <min)
			{
				min = Alpha[r][c];
			}
		}
	}
	cout << "The min is: "<< min<< endl;
}
