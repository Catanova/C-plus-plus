#include <iostream>
using namespace std;


void mycheck(float &, float  , float &);
void deposit(float & , float , float);
void end_of_month(float &, float);

int main(){
	
	float balance;
	char let;
	float check; // check 
	float counter_fee =0; // counter
	
	// input of the begining of the balance
	cout << "Enter the begining balance: ";
	cin >> balance;
	cout << "C - process a check: " << endl;
	cout << "D - process a deposit: " << endl;
	cout << "end of the program : " << endl;
	
	// input of transaction 
	cout <<"Enter transaction: ";
	cin >> let >> check;
	
	
	
	while (let !='E') // sentinel value give total balance en of the month
	{
		
		if (let=='C') // "C" process check
			
			mycheck(balance, check, counter_fee);
		if (let=='D') // "D" process deposit
		
			deposit(balance, check, counter_fee);
		cout <<"Enter transaction: ";
		cin >> let >> check; // update
		
	}
	cout << "Processing end of month." << endl;
	end_of_month(balance, counter_fee); // "E" sentinel fuction
		
	return 0;
}

void mycheck(float & bal, float  check, float & counter_fee){
	
	
	//cout << "Enter transaction amount: ";
	//cin >> check;
	cout << "Processing check for $" << check << endl; 
	bal = bal -check;
	cout << "Balance: "<< bal << endl ;
	counter_fee = counter_fee +0.25;
	cout << "Service charge: " << counter_fee << " for a check "<< endl;
	if (bal <800)
	{
		counter_fee = counter_fee + 5.0;
		cout << "Service charge: $" << counter_fee << " balance belance $800.00. "<< endl;
	}
	cout << "Total service charge: " << counter_fee << endl;
	cout << "-------------------------" << endl;		
} // end mycheck

void deposit(float & bal, float check, float counter_fee){
	
	//cout << "Enter transaction amount:";
	//cin >> check;
	bal = bal + check;
	cout << "Processing check for $" << check << endl;
	cout << "Balance: $"<< 	bal << endl;
	cout << "Total Service charge: $" << counter_fee << endl;
	
} // end of deposit funtion

void end_of_month(float & bal, float counter_fee)
{
	cout << "Processing end of the month."<< endl;
	bal = bal -counter_fee;
	cout << "Final balance: $" << bal << endl;		
} // end of end_of_month function



