#include <iostream>
int numbers(int num1, int num2)
{
  int count {};
  for(int i = num1; i <= num2; ++i)
  {
    if(i % 2 == 1)
    {
      ++count;
    }
  }
  return count;
}

int main()
{
  std::cout << numbers(4, 8);
}