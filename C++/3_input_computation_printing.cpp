#include <iostream>
using namespace std;

// prototype function
void input(int &, int &); // segma & use for the changing values of input
int computation (int , int , int & );
void print (int , int , int );

int main(){

	int val1;
	int val2;
	int sum;
	
	// input data 
	input (val1, val2);
	
	// calculation
	computation(val1, val2, sum);
	//printing
	print(val1, val2, sum);

} // end of main

void input(int & val1, int &val2)
{
	cout << "Enter 1st value: ";
	cin >> val1;
	cout <<"Enter 2nd value: ";
	cin >> val2;
}
// if we use void we can't return sum : "[Error] return-statement with a value, in function returning 'void' [-fpermissive]"
// if we want to use void diable return sum
// if we use int we can return sum
int computation (int val1, int val2, int &sum) 
{
	sum = val1 + val2; 	
	return sum;
}
void print (int val1, int val2, int sum)
{
	cout << "val1 is : "<< val1<< endl;
	cout << "val2 is : "<< val2<< endl;
	cout << "total is: "<< sum << endl;
	
}
