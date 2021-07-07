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


class Quadratic{
	public:
		int side1;
		int side2;
		int side3;
		
	bool deter ()
	{
		int det;
		det = side2 * side2 -4* side1 *side3;
		
		if (det < 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
};

int main()						
{ 
    Quadratic Quad;
    int perimeter;
    
    Quad.side1 = 1;
    Quad.side2 = -1;
    Quad.side3 = -6;
    
    if (Quad.deter())
    {
    	cout << "Real Roots " << endl;
    }
    else
    {
    	cout << "Imaginary Roots " << endl;
    }
    return 0;
}                               // end of main function

