#include <iostream>
using namespace std;


//Prototype 
void print (int num[]);
void data(int num[]);


int main()
{
	int num[100];
	print(num);
	data(num);
}

void data(int num[])
{
		for (int i=0; i< 3; i++)
	{
		cout << num[i]<< " " ;
	}
	
}
void print(int num[])
{
	//int num [100];
	int number=0;
	
	for(int i=0; i <3; i++)
	{
		cout << "Enter number:";
		cin >> num[i];
	}
	for (int i=0; i<3; i++ )
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

}
