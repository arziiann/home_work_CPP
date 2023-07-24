#include <iostream>

void swap(int* a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
void sort(int * array, int size)
{
  for(int i = 0; i < size; ++i)
  {
    for(int j = i + 1; j < size; ++j)
    {
      if(array[i] < array[j])
      {
        swap(&array[i], &array[j]);
      }
    }
  }
}
int* array_(int * array, int size)
{
  int* tmp = new int[size];
  for (int i = 0; i < size; ++i)
  {
    tmp[i] = array[i] * array[i];
  }
  sort(tmp, size);
  return tmp;
}


int main()
{
  int array[] = {3, 5, 9, 2, 1};
  int size = 5;
  int *tmp = array_(array, size);
  for(int i = 0; i < size; ++i)
  {
    std::cout << tmp[i] << std::endl;
  }
}