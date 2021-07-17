#include <iostream>
#include <fstream>
using namespace std;

struct Box{
	int length; int width; int height;
	int largeSide;
	int girth;
};
//Prototype
void getData(int array1[], float array2[] , int count, int & weight, double & charge);
void myBox( Box & box);
void print(Box box, int weight, double charge );

int main()
{
	Box box;
	int array1[20];
	float array2[20];
	int count =0;
	int result;
	int weight;
	double charge;
	getData(array1,  array2 ,  count, weight, charge);
	myBox(  box);
	print(box, weight, charge );
	
}



void getData(int array1[], float array2[] , int count, int & weight, double & charge)
{
	int w; float p; 

	
	ifstream infile("Shipment.txt");
	if (infile)
	{
		while (infile >> w >> p)
		{
			array1[count]= w;
			array2[count] = p;
			count = count +1;	
		}
	}
	else
	{
		cout << "Error whie opning the file.";
	}
	cout << "Enter weight: ";
	cin >> weight;
	
	for (int i =0; i < count; i++)
	{
		if (weight == array1[i])
		{
			charge = array2[i];
		}
	}
		
	if (weight <0)
		{
			cout << "Enter an integer weight. "<< endl;
			cout << "Enter weight: ";
			cin >> weight;
			
		}
	//cout <<"for weight: "<< weight << "lb "<< " The cost is: $"<< charge << endl;
	
}// end of getData

void myBox( Box & box)
{
	
	
	cout <<"Enter length:";
	cin >> box.length;
	cout <<"Enter width:";
	cin >> box.width;
	cout <<"Enter height:";
	cin >> box.height;
	
	// if statement find largest side to calculate girth
	if (box.length > box.width && box.length > box.height )
	{
		box.largeSide = box.length;
	}
	else if (box.width > box.length && box.width > box.height){
		
		box.largeSide = box.width;
	}
	else {
		box.largeSide = box.height;	
	}
	
	box.girth = 2 *(box.length + box.width + box.height -box.largeSide);
	
	//cout << "largest is :" << box.largeSide << endl;
	//cout << "girth: " << box.girth << endl;
	// wieght must not exceed 50 pound	
}

void print(Box box, int weight, double charge )
{
	
	
	cout << "largest is :" << box.largeSide << endl;
	cout << "girth: " << box.girth << endl;
	cout <<"for weight: "<< weight << "lb "<< " The cost is: $"<< charge << endl;
	
}
