#include <iostream>
using namespace std;

class Hello {
  public:
    Hello() {
      cout << "hello." << endl;
    }
};

class World {
  public:
    World() {
      cout << "World." << endl;
    }
};

class L: public Hello, public World {};

int main() {
    L obj;
    return 0;
}
