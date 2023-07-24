#include <iostream>
int binary(int * array, int start, int end, int key)
{
  int med = start + (end - start) / 2;
  if(key == array[med])
  {
    return med;
  }
  else if(key < array[med])
  {
    return binary(array, start, med - 1, key);
  }
  else
  {
    return binary(array, med + 1, end, key);
  }
}

int main()
{
  int array[] = {1, 2, 3, 4, 5, 6};
  int start = 0;
  int size = sizeof(array) / sizeof(int);
  int end = size - 1;
  std::cout << binary(array, start, end, 6);
}