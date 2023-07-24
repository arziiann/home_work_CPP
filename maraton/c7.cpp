#include <iostream>

std::string to_upper_case(std::string line)
{
  for(int i = 0; i < line.size(); ++i)
  {
    if(line[i] >= 'a'  && line[i] <= 'z')
    {
      line[i] -= 32;
    }
  }
  return line;
}
int main()
{
  std::string line = "HelLoo";
  std::cout << to_upper_case(line);
}