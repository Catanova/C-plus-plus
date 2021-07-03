/*

*****************
Description
This program will show how if statement works
if number is positive then print positive number

*/

#include <iostream>
#include <fstream>				
using namespace std;


int main()						
{
	ifstream infile;
	int score;
	int sum = 0;
	int average;
	int count = 0;
	int max;
	int min;
	int pos =0;
	int neg =0;
	int zeroCount = 0;
	
	infile.open("xyz.txt");
	
   	if (infile)
	{
		
		max = score;
		min = score;
		infile >> score;
		while( infile >> score)
		{
			if (score > max)
				max = score;
			if (score < min)
				min = score;
			if (score >0)
				pos = pos+1;
			else if (score ==0)
				zeroCount = zeroCount +1;
			else 
				neg = neg +1;
			
			cout << score << endl;
			sum = sum +score;
			count = count +1;
			
		}
	}
	else
	{
		cout << "Error of file"	;
	}
	
	infile.close();
	cout << "The sum is: " << sum << endl;
	average = sum / count;
	cout << "The count is: " << count << endl;
	cout << "The zeroCount is: " << zeroCount << endl;
	cout << "The average is: "<< average << endl;
	cout << "The max is: " << max << endl;
	cout << "The min is: " << min << endl;
	cout << "The positive number are: "<< pos << endl;
	cout << "The Negative number are: "<< neg << endl;
	
	return 0;
}                               


