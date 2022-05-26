#include <iostream>
#include "./extends/Elem.hpp"
#include "./extends/Print.cpp"
#include "./extends/Create.cpp"
#include "./extends/FindTwoIdentical.cpp"

using namespace std;

int main()
{
  Elem *begin = NULL,
       *T = NULL;

  int a[5] = {1, 0, 1, 3, 5};

  for (int i = 0; i < 5; i++)
  {
    Create_rec(begin, a[i], T);
  }

  Print_rec(begin);
  cout << endl;

  cout << FindTwoIdentical_rec(begin) << endl;

  return 0;
}