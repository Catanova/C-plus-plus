#include <iostream>
using namespace std;

class newclass{
	// making public to read my class inside main
	public:
		void cool(){
			cout << "new presentation."<< endl;
		}
};
int main(){
	// access is my object
	// using my object to access the fuction inside my class which is cool()
	//it is important when sereval class. 
	// 
	newclass access;
	access.cool();
	return 0;
}
