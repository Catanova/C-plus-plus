#include <iostream>
using namespace std;
class Addition {
public:
  int cal(int x1, int x2){
     return x1+x2;
  }
  int cal(int x1, int x2, int x3){
     return x1+x2+x3;
  }
};
int main() {
  Addition obj;
  //Note that both function have the same name

  //Based on how many parameters we pass during function call determines which function is to be called, 
  //this is why it is considered as an example of polymorphism
  cout<<"Result: "<<obj.cal(10, 20)<<endl;
  
  cout<<"Result: "<<obj.cal(11, 22, 33);
  return 0;
}