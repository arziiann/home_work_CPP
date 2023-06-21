#include <iostream>

int factorial(int num)
{
    static int tmp = 1;  
    if(tmp < num)
    {
        return num * factorial(num - 1);  

    }
    else
    {
        if (num <= 1)
        {
            return 1;
        }

        if (tmp != 1)  
        {
            return num * tmp;
        
        }
        std::cout << "1" << std::endl;

        tmp = num * factorial(num - 1);  

        return tmp;
    }
}

int main()
{
    int num = 5;

    std::cout << factorial(5) << std::endl;
    std::cout << factorial(4) << std::endl;  
    return 0;
}
