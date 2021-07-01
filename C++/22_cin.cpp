#include <iostream>
#include <iomanip>
using namespace std;
// prototype

int main()
{
	// variable declaration
	int col = 5;
	int row = 2;
	int id;
	int grade;
	int array[row][col];
	for (int j =0; j< col; j++)
	{
		cout << "Enter student id: ";
		cin >> id;
		array[0][j] =id;
		
		cout << "Enter student grade: ";
		cin >> grade;
		array[1][j] =grade;
	}
	
	for ( int j = 0; j <col ; j++)
	{
		cout << "Student id "<< array[0][j] << endl;
		cout << "Student grade " << array[1][j] << endl;
	}
		
	
	return 0;
	
}
