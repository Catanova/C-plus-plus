#include <iostream>
using namespace std;

int main()
{
	

	cout << "---------------4th Loop"<< endl;
	int v=0;
	bool condition = true;
	for ( ; condition; )
	{
		cout << "City of Minneapolis."<< endl;
		v++; // incrementing my loop
		if (!(v<4)) // if my condition reach 4 loop end and condtion become false.
		{
			condition = false;
		}
	}

}