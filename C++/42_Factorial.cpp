#include <iostream>
using namespace std;
//Factorial function
int f(int z){
  
   if (z <= 1)
        return 1;
   else 
       return z*f(z-1);
}
int main(){
   int x;
   cout<<"Enter a number: ";
   cin>>x;
   cout<<"Factorial of: "<<f(x);
   return 0;
}