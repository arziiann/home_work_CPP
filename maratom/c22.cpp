#include <iostream>
#include <cstdlib> 

int numbers()
{
    int sum = 0;
    int mull = 0;
    for(int i = 1; i <= 100; i++)
    {
        mull += (i * i);

    }
    for(int i = 1; i <= 100; i++)
    {
        sum += i;

    }
    sum *= sum;
    return abs(sum) - abs(mull);
}


int main()
{
    std::cout << numbers();
}
