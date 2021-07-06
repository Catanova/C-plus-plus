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

struct Student 
{
	int  studentID;
	string lastName;
	string firstName;
	string zip;
	string address;
	string city;
	short hours;
	double gpa;
			
};

void getData(Student &);

int main()						
{ 
    Student sProfile;
    getData( sProfile);
   
    return 0;
} // end of main function

void getData(Student & sProfile)
{
	
	cout << "Enter student data: ";
	cin >> sProfile.studentID;
	cin.ignore();
	
	cout << "Enter last name: ";
	getline(cin, sProfile.lastName);
	
	cout << "Enter firstName: ";
	getline(cin, sProfile.firstName);
	
	cout << "Enter  address: ";
	getline(cin, sProfile.address);
	
	cout << "Enter  city: ";
	getline(cin, sProfile.city);
	
	cout << "Enter  zip: ";
	getline(cin, sProfile.zip);
	
	cout << "Enter  hours: ";
	cin >> sProfile.hours;
	cout << "Enter  gpa: ";
	cin >> sProfile.gpa;
}

