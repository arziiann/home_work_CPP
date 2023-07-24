#include <iostream>

int number_count(int number)
{
  int sum {0};
  while(number != 0)
  {
    sum += number % 10;
    number /= 10;
  }
  return sum;
}
int main()
{
  int num = 12345;
  std::cout << number_count(num);

}