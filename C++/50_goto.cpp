
# include <iostream>
using namespace std;

int main()
{
    float number, avg, total = 0;
    int v, e;

    cout << "Maximum number of inputs: ";
    cin >> e;

    for(v = 1; v <= e; ++v)
    {
        cout << "Enter n" << v << ": ";
        cin >> number;
        
        if(number < 0)
        {
           // skip if statement and go directly to average :
            goto skip;
        } 
        total += number;
    }
    
skip:
    avg = total / (v - 1);
    cout << "\nAverage = " << avg<<endl;
    return 0;
}