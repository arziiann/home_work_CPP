#include <iostream>

int count(int* array, int size)
{
  int count = 0;
  for(int i = 0; i < size; ++i)
  {
    if(i == 0 && array[i] == i)
    {
      ++count;
      continue;
    }
    if(array[i] % i == 0)
    {
      ++count;
    }

  }
  return count;
}


int main()
{
  int array[] = { 0, 1, 2, 8, 4, 9 };
  int size = sizeof(array) / sizeof(int);
  std::cout << count(array, size);
}