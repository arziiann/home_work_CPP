#include <iostream>

int number_count(int number)
{
  int sum {0};
  int mull = 1;
  int copy = number;
  while(copy != 0)
  {
    sum += copy % 10;
    copy /= 10;
  }
  copy = number;
  while(number != 0)
  {
    mull *= (number % 10);
    number /= 10;
  }
  return mull - sum;
  

}
int main()
{
  int num = 12345;
  std::cout << number_count(num);

}