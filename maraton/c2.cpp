#include <iostream>
#include <map>

std::map<int, int> bits_count(unsigned int number)
{
  int zero_count = 0;
  int one_count = 0;
  std::map<int, int> my_map;
  while(number != 0)
  {
    if(number % 2)
    {
      my_map[number % 2] = ++one_count;
    }
    else
    {
       my_map[number % 2] = ++zero_count;

    }
    number /= 2;
    
  }
  return my_map;
}

int main()
{
  unsigned int number  = 5;
  std::map<int, int> my_map = bits_count(number);
  for(const auto& elem : my_map)
  {
    std::cout << "key: " << elem.first << " value: " << elem.second << std::endl;
  }

}