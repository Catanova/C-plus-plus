#include <iostream>

using namespace std; 

bool fuct(int);
int main(){
	int val; 
	cout<< "Enter intger"<<endl;
	cin >>val;
	if(fuct(val)){
		cout <<val <<": is even";
	}else{
		cout <<val<< ": is odd";
	}
	
	
}

bool fuct(int x ){
	if( x %2 ==0)
	{
		return true;
	}
	else{
		return false; 
	}
	
}
