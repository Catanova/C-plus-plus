#include <iostream>
#include <iomanip>
using namespace std;
/*
create progess val that
*/
// Prototype

int main(){
	int val;
	int count = 0;
	int sum = 0;
	float average ;
	int countPos = 0;
	int countNeg = 0;
	int max;
	int min;
	cout << "Enter value over 0 or -999:  ";
	cin >> val;
	max = val;
	min = val;
	
	while (val !=-999)
	{
		if (val < min)
			min = val;
		if (val > max)
			max = val;
			
		if (val >= 0)
			countPos = countPos +1;
		else
			countNeg = countNeg +1;
		
		count = count +1;
		sum = sum +val;
		cout <<"Enter value over 0 ;-999 will terminate the entry: ";
		cin >> val;// update
	}
	cout << "The number of value entered is " << count << endl;
	cout << "The sum is: "  << sum << endl;
	
	if (count > 0)
	{
		cout << "The positives: " << countPos << endl;
		cout << "The Negative: " << countNeg << endl;
	 	average = (float) sum/ (float) count;
	 	cout << setiosflags(ios::fixed) << setprecision(2);
	 	cout << "The average is: " << average << endl;
	 	cout << "The max is: " << max << endl;
	 	cout << "The min is: " << min << endl;
	}
	else 
		cout << "no data entry";
	
	
	
}// end of main


