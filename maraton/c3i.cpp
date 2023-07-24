#include <iostream>

int binary(int * array, int start, int end, int key)
{
  while(start <= end)
  {
    int med = start + (end - start) / 2;
    if(key == array[med])
    {
      return med;
    }
    else if(key < array[med])
    {
      end = med - 1;
    }
    else
    {
      start = med + 1;
    }
  }
  return -1;

}

int main()
{
  int array[] = {1, 2, 3, 4, 5, 6};
  int start = 0;
  int size = sizeof(array) / sizeof(int);
  int end = size - 1;
  std::cout << binary(array, start, end, 6);
   
}