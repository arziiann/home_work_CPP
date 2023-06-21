#include <iostream>

double Fahrenheit(double num)
{
    return (num * 9 / 5) + 32;
}



int main()
{
    std::cout << "\n";
    std::cout << "Enter the temperature in Celsius: ";
    double number = 0;
    std::cin >> number;
    std::cout << "Temperature in Fahrenheit: " << Fahrenheit(number);


}