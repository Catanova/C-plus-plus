/*
Name    
Date    
Project 

*****************
Description
This program will show how if statement works
if number is positive then print positive number

*/

#include <iostream>
#include <fstream>				
using namespace std;
void getData(int[], int &);
void calcData(int[], int, int&, int&, int&, int&, int&, int&);
void printData(  int , int , int , int , int , int , int  );
void writeData( int , int , int , int , int  , int , int  );

int main()						
{
		
	int sum = 0;
	int average;
	int count = 0;
	int max;
	int min;
	int pos =0;
	int neg =0;
	int zeroCount = 0;
	
	int maxSize = 25;
	int myArray[maxSize];
	
	getData(myArray, count);
	
	calcData(myArray, count, sum, max, min, neg, pos, zeroCount);
	
	printData(count, sum, max, min, neg, pos, zeroCount);
	
	writeData(count, sum, max, min, neg, pos, zeroCount);

	return 0;
}      

void getData(int myArray[], int & count )
{
	ifstream infile;
	int score;
	infile.open("myData.txt");
	
	if (infile){
		while (infile >> score)
		{
			cout << score << endl;
			
			myArray[count] = score;
			count = count + 1;		
		}
	}
	else{
		cout << "No file exist."<< endl;
	}
	
	infile.close();	
}   // end of getData
                      
void calcData(int myArray[], int count, int & sum, int & max, int & min, 
int & neg, int & pos, int & zeroCount)

{
	max = myArray[0];
	min = myArray[0];
	for (int i =0; i < count; i++)
	{	
		if (myArray[i] > max)
			max = myArray[i];
			
		if (myArray[i] < min)
			min = myArray[i];
			
		if (myArray[i] >0)
			pos = pos+1;
			
		if (myArray[i] ==0)
			zeroCount = zeroCount +1;
			
		if(myArray[i] < 0) 
			neg = neg +1;
			
		cout << myArray[i] << endl;
		sum = sum +myArray[i];
		count = count +1;		
	}

}// end of calcData

void printData(  int count, int sum, int max, int min, int neg, int pos, int zeroCount )
{

	cout << endl;
	cout << "The sum is: " << sum << endl;
	cout << "The count is: " << count << endl;
	cout << "The zeroCount is: " << zeroCount << endl;
	cout << "The average is: "<< sum / count << endl;
	cout << "The max is: " << max << endl;
	cout << "The min is: " << min << endl;
	cout << "The positive number are: "<< pos << endl;
	cout << "The Negative number are: "<< neg << endl;
}// end of printData

void writeData( int count, int sum, int max, int min, int  neg, int pos, int  zeroCount)
{
	ofstream outfile; 
	outfile.open("outData.txt");
	
	if (outfile)
	{
		outfile << "The sum is: " << sum << endl;
		outfile << "The count is: " << count << endl;
		outfile << "The zeroCount is: " << zeroCount << endl;
		outfile << "The average is: "<< sum / count << endl;
		outfile << "The max is: " << max << endl;
		outfile << "The min is: " << min << endl;
		outfile << "The positive number are: "<< pos << endl;
		outfile << "The Negative number are: "<< neg << endl;
	}
	
	outfile.close();
}// end of writeData

