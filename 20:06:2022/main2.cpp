#include <iostream>
void odd_or_couple(int num)
{
    if(num % 2 == 0)
    {
        std::cout << "The number is  odd!";
    }
    else
    {
        std::cout << "The number is  couple!";
    }
}


int main()
{
    std::cout <<"\n";
    double number1 = 0;
    std::cout << "Enter number 1: ";
    std::cin >> number1;
    odd_or_couple(number1);
}