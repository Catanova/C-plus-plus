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


class Triangle{
	private:
		int side1;
		int side2;
		int side3;
	public:
		void setside1(int);
		int getside1();
		
		void setside2(int);
		int getside2();
		
		void setside3(int);
		int getside3();
		
		Triangle()
		{
			cout << "I am the constructor." << endl;
			
		}		
		int per()
		{
			return side1 + side2 + side3;
		}
};

void Triangle::setside1(int value)
{
	side1 = value;
}
int Triangle :: getside1()
{
	return side1;
}
void Triangle::setside2(int value)
{
	side2 = value;
}
int Triangle :: getside2()
{
	return side2;
}
void Triangle::setside3(int value)
{
	side3 = value;
}
int Triangle :: getside3()
{
	return side3;
}



int main()						
{ 
    Triangle tri;
    tri.setside1(3);
    tri.setside2(4);
    tri.setside3(5);
    
    cout <<"The side1 is:" << tri.getside1() << endl;
    cout <<"The side2 is:" << tri.getside2() << endl;
    cout <<"The side3 is:" << tri.getside3() << endl;
    cout << "The perimiter: " << tri.per()<< endl;

    return 0;
	           

}                               // end of main function

