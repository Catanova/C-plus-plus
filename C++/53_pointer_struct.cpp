#include <iostream>
using namespace std;

struct D {
    int calories;
    float weight;
};

int main() {
    D *ptr, d;

    ptr = &d;
    
    cout << "Enter calories: ";
    cin >> (*ptr).calories;
    cout << "Enter weight: ";
    cin >> (*ptr).weight;
 
    cout << "Displaying information." << endl;
    cout << "calories  = " << (*ptr).calories << " weight " << (*ptr).weight << " lb" << endl;

    return 0;
}