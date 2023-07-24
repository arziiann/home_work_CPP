#include <iostream>
#include <cstring>


char* strmove_(char* s, int n)
{
  char sym = '0';
  int size = std::strlen(s);
  int count = 0;
  while(n != 0)
  {
    sym = s[0];
    s[count] = s[size - 1];
    for(int i = size; i >= count + 1; --i)
    {
      s[i] = s[i - 1];
    }
    
    s[count + 1] = sym;
    ++count;
    --n;

  }
  s[size] = '\0';

  return s;
}

int main()
{
  char array[] = "hello";
  std::cout << strmove_(array, 2);
}