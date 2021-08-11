// clearing vectors
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> New_Vector;
  New_Vector.push_back (2);
  New_Vector.push_back (3);
  New_Vector.push_back (4);

  std::cout << "New_vector are:";
  for (int e=0; e<New_Vector.size(); e++)
    std::cout << ' ' << New_Vector[e];
    std::cout <<"\n";
  

// deleting all vector
  New_Vector.clear();
  New_Vector.push_back (10);
  New_Vector.push_back (202);

  std::cout << "New_Vector are:";
  for (int e=0; e<New_Vector.size(); e++)
    std::cout<< " " << New_Vector[e];

    
    return 0;
}