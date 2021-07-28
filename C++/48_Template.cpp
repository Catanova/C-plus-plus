
#include <iostream>
using namespace std;

// template
template <class Number>

Number bigest( Number e, Number v){

   if (e > v){
      return e;
   }
   else {
      return v;
   }

}

int main(){
   int e, v;
   float x1, x2;

   cout << "Enter a number: \n";
   cin >> e >> v;
   cout << bigest(e,v) << " is the biggest " << endl;

   cout << "Enter a float number: \n";
   cin >> x1 >> x2;
   cout << bigest(e,v) << " is the biggest " << endl;
  
}