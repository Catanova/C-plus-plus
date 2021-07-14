#include <iostream>
using namespace std;

// Prototype
void getData(int & );
bool process(int  );
void print (int );
int main(){
	int val;
	
	
	getData(val);
	process(val);
	print(val);
	main();
	
	//return 0;
}// end of main

void print(int  value){
	if (process (value))
		cout << "The number  is odd "<< endl;
	else
		cout << "The number  is even " << endl;
}// end of print


bool  process(int  value){
	if (value %2 == 0)
		return true;
	else 
		return false; 
}

void getData(int & value){
	cout << "Enter your  letter grade:";
	cin >> value;
	
}// end of geData

