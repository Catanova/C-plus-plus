#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	float val;
	cout << "Enter value: ";
	cin >> val ;
	float max;
	float min;
	int count =0;
	float Pos =0; // intiial in order to count number of positive number
	float Neg =0; // intiial in order to count number of negative number
	float average;
	float sum =0;
	
	max =val; // set Entered value to max and min then 
	min = val;
	
		
		while (val !=100)
		{
			if (val > max)
				max= val;
			if (val < min)
				min = val;
			if(val >= 0)
				Pos = Pos +1; // increment by 1 for every positive value added
			if (val < 0)
				Neg = Neg +1; // increment by 1 for every negative value added
			count = count +1;
			sum = sum + val;
			average = sum /count;
			// update 
			cout << "Enter value: ";
			cin >> val ;		
		} 
		if (count >0)
		{
			cout << "Acerage is: "<< average << endl;
			//cout << setiosflags(ios::fixed) << setprecision(2);
			cout << setiosflags(ios::fixed) << setprecision(4);
			cout << "The max value: "<< max<< endl;
			cout << "The min value: "<< min<< endl;
			cout << "The Positve numbers are: "<< Pos<< endl;
			cout <<" The negative number are: "<< Neg << endl;
		}
	

	
}
