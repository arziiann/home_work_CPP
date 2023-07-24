#include <iostream>

bool math(std::string line)
{
  int bac = 0;
  int pak = 0;
  for(int i = 0; i < line.size(); ++i)
  {
    if(line[i] == '(')
    {
      ++bac;
    }
    if(line[i] == ')')
    {
      ++pak;
    }
  }

  if(bac == pak)
  {
    return true;
  }
  return false;
}


int main()
{
  std::string line = "(1+2) / 3 + 9";
  std::cout << math(line);

}