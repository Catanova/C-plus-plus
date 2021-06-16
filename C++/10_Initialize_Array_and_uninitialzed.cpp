#include <iostream>
using namespace std;
#include <iomanip>


int main(){


	// initializing 2d array
	int xyz[3][10] = {{1,1,1,2,2,2,3,3,3,3},
					{4,4,4,5,5,5,6,6,6,6},
					{7,7,7,8,8,8,9,9,9,9}};
	int row,col;

	for(row=0;row<3;row++){
		for (col=0; col<10;++col){
			cout << xyz[row][col]<<" ";
		}
		cout<< endl;
	}

	
int r =2;
	int c = 3;
	int Array [r][c];
	for (int i =0; i<r; i++)
	{
		for (int e=0; e<c; e++)
			{
				Array[i][e] = e;
				
			}	
		cout << endl;// end row each time.  
	}
	

	
	for (int i =0; i<r; i++)
	{
		for (int e=0; e<c; e++)
			{
				cout << Array[i][e] <<" ";
			}	
		cout << endl;// end row each time.  
	}
}

