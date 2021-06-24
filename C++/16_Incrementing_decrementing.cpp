#include <iostream>


using namespace std;
int main(){

    int x = 10;

    cout <<"x1: " <<x++; // incrementing by 1 = 10
    cout << "\nx2: " <<x; // expecting = 11


    int a =20;

    cout << "\na1: " <<++a; // incrementing by 1  = 21
    cout << "\na2: " <<a; // expecting = 21

    int z =10;

    cout << "\nz1: " <<z--; // decrementing by 1  
    cout << "\nz2: " <<z; // expecting = 9

    int y =10;

    cout << "\ny1: " <<--y; // decrementing by 1  
    cout << "\ny2: " <<y; // expecting = 9

    int e =10;
    e*=2;

    cout << "\ne1: " <<e; // mutipling by 2
    e/= 4;
    cout << "\ne2: " <<e;

    e%= 2;  //   e% =4; make sure there is no space between % and =, otherwise there is a bug
    cout << "\ne3: " <<e<< endl;
    

}
