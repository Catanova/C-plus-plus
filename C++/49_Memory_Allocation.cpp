#include <iostream>
using namespace std;

int main() {
    // int pointer
    int* ptr;

    // float pointer
    float* ptr_1;

    // dynamically allocating memory
    ptr = new int;
    ptr_1 = new float;

    // assigning 
    *ptr = 5;
    *ptr_1 = 8.4f;

    cout << *ptr << endl;
    cout << *ptr_1 << endl;

    // deleting the memory
    delete ptr;
    delete ptr_1;

    return 0;
}