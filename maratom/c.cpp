#include <iostream>

int fibonache()
{
    int end = 4000000;
    int count = 1;
    int new_c = 0;
    int sum = 0;
    
    while(count <= end)
    {
        count += new_c ;
        new_c = count - new_c;
        if(count % 2 == 0)
        {
            sum += count;
        }
    }
       
    return sum;
    
}

int main()
{
    std::cout << fibonache(); 
}