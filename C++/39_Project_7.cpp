#include <iostream>
using namespace std;

struct Student{
	string name; // not string
	int test1;
	int test2;
	int test3;
	
	int count;
};

//Prototype

void getData(Student [], int &student_Num, double & average);
void print (Student st[], int student_Num , float average );


int main()
{
	int student_Num;
	Student st[10];
	double average;
	getData( st, student_Num, average);
	print( st,  student_Num ,  average );
	
	
	return 0;
}
void getData(Student st[], int &student_Num, double & average)
{
	
	cout << "Enter the number of student: ";
	cin>> student_Num;
	float sum=0;
	//double average =0;
	
	for (int i =0; i <student_Num; i++)
	{
		cout << "Enter name "<< i+1 << ":";
		cin >> st[i].name;
		cout << "Enter Test #1: ";
		cin>> st[i].test1;
		cout << "Enter Test #2: ";
		cin >> st[i].test2;
		cout << "Enter Test #3: ";
		cin >> st[i].test3; // never user in cin >>
		sum = (st[i].test1 +st[i].test2 +st[i].test3);	
	}
	cout << "Total sum: "<< sum<<endl; 
	average = sum/3;
	
}
void print (Student st[], int student_Num , float average )

{
	int number =0;
	int num[20];
	for (int x =0; x <student_Num ; x++)
	{
		num[x] = st[x].test1;
		num[x] = st[x].test2;
		num[x] = st[x].test3;
		
		//cout << st[x].name << "      "<<  st[x].test1 << ", "<<  st[x].test2<< ", "<< st[x].test3;
		//cout << endl;
		
	}
	
	
	for (int i=0; i<student_Num; i++ )
	{
		for (int j=0; j<3; j++)
		{
			if (num[i] < num[j])
			{
				// if find value greather than previous so 
				// we are reversing the value 
				number = num[i];
				num[i] = num[j];
				num[j] = number;
			}
		}
	}
	for (int i=0; i< 3; i++)
	{
		cout << st[i].name << " ";
		cout << num[i]<<" "<< endl;
	}
	
	cout << endl;
	cout <<"____________________________________________"<< endl;	
	cout << "Average: "<< average << endl;
}
