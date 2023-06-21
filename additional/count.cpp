#include <iostream>

static int count_function = 0;

void count(int& counter)
{
    ++count_function;
}

int factorial(int num)
{
    if (num < 1)
    {
        return 1;
    }

    count(count_function);

    if (num == 1)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    int num1 = 5;
    std::cout << factorial(num1) << "\n";
    std::cout << "Function coll count: " << count_function << std::endl;

    return 0;
}
