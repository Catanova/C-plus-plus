#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declared Variables Block
    int id;
    string first, last;
    double hours;
    double minutes;
    float hourly_wage;
    float computed_pay;
    float overtime_pay;
    double max_hours = 40;
    // calculate gross pay, tax, net pay.
    for (int i =0; i<4; i++)
    {
    	// Input Statements Block
    	cout << "Employee id n*"<< i+1 << ": ";
    	cin >> id;
	cout << "Enter the Employee's first and last name (ie. Roger Smith): "; 
	cin >> first >>  last;
	cout << "Enter Hours worked: ";
	cin >> hours;
	cout << "Enter Minutes worked: ";
	cin >> minutes;
	cout << "Enter hourly wage: ";
	cin >> hourly_wage;
    }
    for (int i=0; i <4; i++)
    {
	    	// Output Statements Block
	    cout << "\n";
	    cout << "---------- Employee Information -----------" << endl;
	    cout << "Employee: " << first << " " << last << endl;
	    cout << "Time worked: " << hours << "hours"
	         << ", " << minutes << " minutes" << endl;
	    cout << "Hourly wage: " << hourly_wage << endl;
	    cout << "\n";
	    
	    // Conditional Statement Block
	    if (hours > 40)
	       {
	              overtime_pay = (hours - 40) * 1.5 * hourly_wage;
	              computed_pay = max_hours * hourly_wage + overtime_pay;
	              cout << "The computed pay is: " << computed_pay;
	              cout << "\n";
	       }
	    else if (hours <= 40)
	         {
	                computed_pay = hourly_wage * hours;
	                cout << "The computed pay is: " << computed_pay;
	                cout << "\n";
	         }
	    system ("pause");
	    return 0;
	    }
    
}
