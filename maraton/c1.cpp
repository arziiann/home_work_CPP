#include <iostream>
#include <vector>

bool east_least_bits(unsigned int number)
{
  std::vector<int>my_vec;
  while(number != 0)
  {
    my_vec.push_back(number % 2);
    number /= 2;
  } 

  if(*(my_vec.begin()) == *(my_vec.end() - 1))
  {
      return true;
  }  
  return false;
}

int main()
{
  unsigned int num = 5;
  std::cout << east_least_bits(num);
}