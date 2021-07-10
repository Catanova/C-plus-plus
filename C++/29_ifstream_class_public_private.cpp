//******************************************************************
// Template Program
// Programmer: Awaleh Houssein 
// Completed : Sept 01, 2019
// Status    : Complete
//
// This program will be used to start my project
//******************************************************************

#include <iostream>	
#include <fstream>
#include <string>			// for cin, cout, endl
using namespace std;

class Employee{
	private:
		int eCount;
	public:
		Employee()
		{
			cout << "Getting ready to create payroll."<< endl;
			eCount =0;
			
			ifstream infile;
			infile.open("Employee.txt", ios ::in);
			string line;
			if (infile)
			{
				while (infile >> line)
				{
					cout << "Employee id: "<< line << endl;
					
				}
			}
			infile.close();
		}
	
	
	int getCount()
	{
		return eCount;
	}
	
};

int main()						
{ 
    Employee employee;
    cout << "Number of employee: "<< employee.getCount() << endl;
    
    
    

    return 0;
	           

}                               // end of main function

