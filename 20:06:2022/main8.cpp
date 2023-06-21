#include<iostream>
int avg(int num)
{
    int sum = 0;
    for(int i = 1; i < num; ++i)
    {
        if(i % 5 == 0 || i % 3 == 0)
        {
           sum+=i;
           
        }
    }
    return sum;
    
}

int main()
{
    std::cout <<"\n";
    int number = 0;
    std::cout << "Enter number: ";
    std::cin >> number;

    std::cout << avg(number);


}