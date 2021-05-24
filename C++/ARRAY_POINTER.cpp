#include <iostream>
using namespace std;
#define MAX 4


int main(){
	
	// intialize array
	int *d;
	//create  
	d = new int[MAX];
	// loop
	for(int i=0;i<MAX; i++)
	{
		d[i]=i+1;
	}
	// print
	for (int v=0; v<MAX; v++){
		cout <<d[v]<<endl;
		
	}
}
