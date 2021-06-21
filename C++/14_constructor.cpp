#include <iostream>
#include <string>
using namespace std;


// consttactor: the constractor has the same name of the class
class newclass{
	public:
		// 2st methode constructor
		newclass(string z){
			assign(z);
		}
		void assign(string s){
			name = s;
		}
		string gethere()
		{	//// 2st meethod: constructor print by itself nothing else
	// use by the professional
			return name;
		}
	private:
		string name;		
};

int main ()
{
	// different way to print a constructor 
	//// 2st meethod: constructor print by itself nothing else
	// use by the professional
	newclass access("Data structure");
	cout << access.gethere()<< endl;;
	
	//each object of the class has it own set variable
	// the object access, access1 do not over each other
	// class can be use over and over
	newclass access1("Proagramming 1");
	std::cout <<access1.gethere();
	return 0;
	
	

	
}
