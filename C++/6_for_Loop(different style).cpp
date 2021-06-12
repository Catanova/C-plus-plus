#include <iostream>
using namespace std;

int main()
{
	cout << "--------------1st Loop"<< endl;
	for (int i =0; i <3; i++)
	{
		cout <<"Hello"<< endl;
	}
	cout << "______________2nd Loop"<< endl;
	int x =0;
	for (;x<4; x++ )
		cout << "World."<< endl;
	cout << "--------------3th Loop"<< endl;
	int j=0;
	for (  ;j <3; )
	{
		cout << "I'm a Robot."<< endl;
		j++; // j++ need to remind inside the braces other for loop don't stop.
	}
}
