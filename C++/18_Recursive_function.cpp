#include <iostream>
using namespace std; 



int factorial(int );	
int factorial2(int );

int main(){
	cout << factorial(7)<<endl ;
	cout << factorial2(7)<<endl ;

	
}
int factorial(int num){
	if (num==1){
		return 1;
	}else{
		return num* factorial(num-1);
	}
}

int factorial2(int num){
	if (num==1){
		return 1;
	}else{

		return num* factorial2(num-2);
	}
}

