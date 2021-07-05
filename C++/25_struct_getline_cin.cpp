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


//Prototype
void getData(Student &);
void printData(Student );
void calGPA( Student & );


int main()						
{ 
    Student sProfile;
    
    
    getData( sProfile);
    
    calGPA( sProfile );
 
    printData(sProfile);
    
   
   
    return 0;
} // end of main function

void getData(Student & sProfile)
{
	
	cout << "Enter student ID: ";
	cin >> sProfile.studentID;
	//cin.ignore();
	
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
}// getData

void printData( Student sProfile )
{
	
	cout << "Student ID: ";
	cout << sProfile.studentID << endl;
	
	
	cout << "Last name: ";
	cout <<  sProfile.lastName << endl;
	
	cout << "First Name: ";
	cout << sProfile.firstName << endl;
	
	cout << "Address: ";
	cout << sProfile.address << endl;
	
	cout << "City: ";
	cout << sProfile.city << endl;
	
	cout << "Zip code: ";
	cout << sProfile.zip << endl;
	
	cout <<  "Hours: ";
	cout <<sProfile.hours << endl;
	cout << "Enter  gpa: ";
	cout << sProfile.gpa << endl;
}

void calGPA( Student & sProfile)
{
	float gpa;
	int hours;
	float semesterPts;
	float overallPts;
	
	cout << "Enter the hour taken this semester: ";
	cin >> hours;
	
	cout << "Enter gpa: ";
	cin >> gpa;
			
	semesterPts = gpa *hours;
	overallPts = sProfile.gpa * sProfile.hours;
	
	sProfile.hours = sProfile.hours + hours;
	
	sProfile.gpa = (semesterPts + overallPts)/ sProfile.hours;
	
	cout << "semesterPts: " << semesterPts << endl;
	cout << "overallPts: " << overallPts << endl;
	cout << "sProfile.gpa: " << sProfile.gpa << endl;
	
	
	
}
