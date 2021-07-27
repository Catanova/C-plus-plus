
#include <iostream>
using namespace std;
int main(){
   int val;
   for (val=7; val>=10; val ++) {
      cout<<"val: "<<val<<endl;
      if (val == 7) {
         break;
      }
   }
   cout<<" Hey, I'm out of the loop ";
   return 0;
}