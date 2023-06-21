#include <iostream>

int big_number(int num1, int num2, int num3)
{
    if(num1 == num2 && num1 == num3 && num2 == num3)
    {
        return num1;
    }

    if(num1 >= num2 && num1 >= num3)
    {
        return num1;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    std::cout <<"\n";
    int number1 = 0;
    std::cout << "Enter number 1: ";
    std::cin >> number1;

    std::cout <<"\n";
    int number2 = 0;
    std::cout << "Enter number 2: ";
    std::cin >> number2;

    std::cout <<"\n";
    int number3 = 0;
    std::cout << "Enter number 3: ";
    std::cin >> number3;
    std::cout << "\n";
    std::cout << "Highest number entered: " << big_number(number1, number2, number3);
}