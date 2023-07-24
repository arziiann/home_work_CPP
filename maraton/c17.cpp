#include <iostream>

 char* strset(char* s, char ch)
 {
   for(int i = 0; s[i] != '\0'; ++i)
   {
     s[i] = ch;
   }
   return s;
 }

int main()
{
  char arr[] = "hello";
  std::cout << strset(arr, 'j');
  
}