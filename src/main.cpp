#include <iostream>

#include "./extends/Elem.hpp"
#include "./extends/Print.cpp"
#include "./extends/Create.cpp"
#include "./extends/FindTwoIdentical.cpp"

using namespace std;

int main()
{
  Elem* begin = NULL;

	int a1[5] = { 1,0,1,3,5 };

	for (int i = 0; i < 5; i++)
	{
		Create(begin, a1[i]);
	}

	Print(begin);

  cout << FindTwoIdentical(begin) << endl;

  return 0;
}