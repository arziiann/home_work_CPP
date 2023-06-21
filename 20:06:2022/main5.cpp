#include <iostream>

void Fibonacci(int num)
{
    int first = 0;
    int second = 1;
    int next = 0;

    std::cout << "Fibonacci Sequence: ";
    for (int i = 0; i <= num; ++i)
    {
        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second; 
            first = second;
            second = next;
        }

        std::cout << " " << next;
    }
    std::cout << std::endl;
}

int main()
{
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    Fibonacci(number);

}
