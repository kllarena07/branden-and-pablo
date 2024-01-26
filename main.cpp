#include <iostream>
using std::cout;

int main()
{
  int a = 1;
  int *aPtr = &a;
  int *aPtrPtr = aPtr;

  return 0;
}