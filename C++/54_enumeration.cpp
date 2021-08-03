

#include <iostream>
using namespace std;

enum Fast_food { lettuce = 34, fries = 5, fruit = 6, non = 2};

int main() {

    Fast_food dinner;

    dinner = lettuce;
    cout << "Dinner = $" << dinner <<endl;

    return 0;
}