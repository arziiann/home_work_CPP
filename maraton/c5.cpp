#include <iostream>
#include <map>

int sum(int a, int b)
{
  return a + b;
}

int sub(int a, int b)
{
  return a - b;
}

int mul(int a, int b)
{
  return a * b;
}

int div_(int a, int b)
{
  return a / b;
}

int main()
{
  std::map<char, int(*)(int, int)>my_map;
  my_map['+'] = sum;
  my_map['-'] = sub;
  my_map['*'] = mul;
  my_map['/'] = div_;

  char sym = '-';
  int res = 0;
  for(const auto& elem : my_map)
  {
   res = my_map[sym](3, 5);
  }
  std::cout << res;


}
