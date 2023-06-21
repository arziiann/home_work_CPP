#include <iostream>

int max_array(const int * array, const int size)
{
    int max = array[0];
    for(int i = 0; i < size; ++i)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        
    }
    return max;
}


int main()
{
    const int size = 5;
    int array[size];
    std::cout << "Enter the elements of an array of size 5: ";
    for(int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
    std::cout << max_array(array, size);
}