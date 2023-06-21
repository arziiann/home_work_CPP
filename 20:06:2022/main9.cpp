#include <iostream>
int sum(int num)
{
    int sum = 0;
    for(int i = 0; i <= num; ++i)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    std::cout <<"\n";
    int number = 0;
    std::cout << "Enter number: ";
    std::cin >> number;
    while(number <= 0)
    {
        std::cout << "Enter again: ";
        std::cin >> number;
    }
    std::cout << "Result --> " << sum(number);
}