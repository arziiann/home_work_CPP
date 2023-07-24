#include <iostream>
#include <cstdlib>

void swap(char* c1, char* c2)
{
  char tmp = *c1;
  *c1 = *c2;
  *c2 = tmp;
}
void char_re(char * array, int size)
{
  for(int i = 0; i <= size / 2; ++i)
  {
    swap(&array[i], &array[size - i]); 

  }
}

int main()
{
  char array[] = "hello";
  int size = 4;
  char_re(array, size);
  std::puts(array);
}