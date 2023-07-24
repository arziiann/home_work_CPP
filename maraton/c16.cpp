#include <iostream>
#include <cstring>

char* strcat_(char* s1, char* s2)
{
  char* tmp = new char[std::strlen(s1) + std::strlen(s2) +1];
  int index = 0;
  for(int i = 0; i < std::strlen(s1); ++i)
  {
    tmp[index++] = s1[i];
  }
  for(int i = 0; i < std::strlen(s1) + std::strlen(s2); ++i)
  {
    tmp[index++] = s2[i];
  }
  
  s1 = tmp;
  tmp = nullptr;
  return s1;
}
int main()
{
  char arr1[] = "hello ";
  char arr2[] = "world";

  std::cout << strcat_(arr1, arr2);
}