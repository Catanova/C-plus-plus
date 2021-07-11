//******************************************************************
// Template Program
// Programmer: Scooby Doo
// Completed : Sept 01, 2019
// Status    : Complete
//
// This program will be used to start my project
//******************************************************************

#include <iostream>				// for cin, cout, endl
using namespace std;
#include <fstream>
#include <string>
#include <iomanip>

// global varible
int max = 50;


struct Employee{
	string id; // id
	string Name;// first and last name
	string SSN;
	float PayRate;
	
};

// prototype function
void getData(Employee list[]);



int main()						
{ 
    Employee employees[50];
    getData(employees  );
    return 0;
	           

}                               // end of main function

void getData(Employee list[] )
{
	ifstream infile ("Employee_1.txt");
	string temp;
	int i=0;
	float p;
	if(infile)
	{
		while(!infile.eof() )
		{
			getline(infile, temp);
			cout << temp << endl;
			list[i].id = temp.substr(0,5);
			//cout << list[i].id << endl;
			list[i].Name = temp.substr(5,16);
			list[i].SSN = temp.substr(16,33);
			list[i].PayRate = stof(temp.substr(34,38));
			//list[i].PayRate = p;
			cout << list[i].id<<" " <<	list[i].Name<< " "<< list[i].SSN <<" " <<list[i].PayRate<<endl;
			
			i++;
			
		}
	}
	else{
		cout << "Error while opening the file."<< endl;
	}
}











