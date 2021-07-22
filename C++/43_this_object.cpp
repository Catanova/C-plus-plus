#include <iostream>
using namespace std;

class Test {
private:
  int prize;
  char gas;
public:
  void set(int prize, char gas){
    this->prize =prize;
    this->gas=gas;
  }
  void display(){
    cout<<gas<<endl;
    cout<<prize;
  }
};
int main(){
  Test object;
  object.set(5, 'G');
  object.display();
  return 0;
}