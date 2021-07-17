

#include <iomanip>
#include <iostream>
using namespace std;

//Prototype functions used
void getData(float[][7], int, float&);
void calc(float[][7], int, float&, float&);
void printing(float[][7], int, float, float, float);

 
//The main function
int main()
{
	//Amount of monkeys this prograam is used for 
	int monkey = 3;
	
	//Array and variable declaration (4 monkeys, 7 days)
	float array[monkey][7];
	float sum, average, max, min;
	
	//Set the decimal count to 2
	std::cout << std::setprecision(2);
	
	//Call working functions
	getData(array, monkey, average);
	calc(array, monkey, max, min);
	printing(array, monkey, average , max, min);
	
	//Return 0 if all runs properly
	return 0;
    
}

//User input and calculations function
void getData(float array[][7], int monkey, float & average)
{  
	//Local variables 
	float sum = 0;
	average = 0;
			
	//Loop to get user input and test data
	for (int i = 0; i < monkey; i++)
	{
 		for (int j = 0; j < 7; j++)
		 {  
		 	cout << "Food eaten by monkey " << i << " by day " << j  << ": ";
		 	cin >> array[i][j];
		 	//the value enter in each index can be negative
			if (array[i][j] > -1) 
			{
			//calculating sum
				sum += array[i][j]; 
			}
			else //start over again from the index where invalid input was entered
				cout << "Enter positive float number." << endl;
		}
	}
	
	//When input is done, find average and save as reference
	average = (sum/(monkey*7));		
}


void calc(float array[][7], int monkey, float& max, float& min)
{	
	//Initalize max and min and assigning to each index of my array
	max = 0;
	min = 0;
	max = array[0][0];
	min = array[0][0];
	
	//searching maximium food eaten
	for (int i = 0; i < monkey; i++)
	{
 		for (int j = 0; j < 7; j++)
		 {  
		// accessing the maximium index where any monkey eat the most
			if (max <array[i][j] ) 
				max = array[i][j]; 	
		 }
	}
	
	//searching minumium food eaten
	for (int i = 0; i < monkey; i++)
	{
 		for (int j = 0; j < 7; j++)
		 {  
			
			if (min >array[i][j] ) 
				min = array[i][j]; 	
		 }
	}
}


void printing(float array[][7], int monkey, float average, float max, float min)
{
	//output and summary
	cout << endl << "Monkey   Sun   Mon   Tus   Wed   Thu   Fri   Sat" << endl;
	 
	for (int i = 0; i < monkey; i++)
	{	
		cout << "     " << i + 1 << "   " << array[i][0] << "   " << array[i][1] << "   " << array[i][2] << "   " << array[i][3]
		<< "   " << array[i][4] << "   " << array[i][5] << "   " << array[i][6] << endl;
		 
	}
	
	//average , max and min 
	
	cout << "Average  food eaten: " << average << endl;  
    	cout << "Maximium food eaten by monkey in a day: " << max << endl;
    	cout << "Minimium food eaten by monkey in a day: " << min <<  endl;
   
}
