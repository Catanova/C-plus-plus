#include <iostream>
#include <string>
using namespace std;

class myclass{
	// the only thing that access our private function 
	public:
		//  first assigning my private string: name
		void assign(string s)
		{
			name =s;
		}
		// second  get my string
		string gethere()
		{
			return name;
		}
		
		
	private:
		string name;
};

int main(){
	/*
	----this wrong way to access private--- make setter and getter--
	
	myclass p;
	p.name = ("new info");
	cout << p.name;
	*/
	
	myclass p;
	p.assign("new info");
	// cout<< p.name; it is wrong
	// p.gethere return the name;
	cout << p.gethere() << endl;
	
}
