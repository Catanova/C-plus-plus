#include <iostream>
using namespace std;

class XYZ {
    public:
      void printing() {
          cout<<"Hello world."<<endl;
      }
};

class Funct_1 : public XYZ {};

class Funct_2 : public Funct_1 {};

int main() {
    Funct_2 object;
    object.printing();
    return 0;
}