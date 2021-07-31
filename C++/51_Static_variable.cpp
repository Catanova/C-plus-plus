#include <iostream>
using namespace std;

void t()
{
    // 
    static int num = 10;
    num--;

    cout << num << endl;
}

int main()
{
    
    t();
    t();

    return 0;
}