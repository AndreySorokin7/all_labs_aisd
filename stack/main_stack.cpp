#include <iostream>
#include "stack.h"
#include "stack.cpp"
int main()
{
  TStack<int> a(5);
  a.Push(2);
  a.Push(3);
  a.Push(4);
  a.Push(5);
  
  a.printstack();
  std::cout << "\n";
  a.Get();
  a.printstack();
  return 0;
}
