#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int> xyz;
  
    for (int e = 4; e <= 7; e++)
        xyz.push_back(e);
  
    cout << "begining and ending: ";
    for (auto e = xyz.begin(); e != xyz.end(); ++e)
        cout << *e << " ";
  
    cout << " \ncbegin and cend: ";
    for (auto e = xyz.cbegin(); e!= xyz.cend(); ++e)
        cout << *e << " ";
  
    cout << "\n rbegin and rend: ";
    for (auto v = xyz.rbegin(); v != xyz.rend(); ++v)
        cout << *v << " ";
    
}