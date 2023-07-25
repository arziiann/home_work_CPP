#include <iostream>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void selection_sort(int *array, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        int min_index = i;
        for(int j = i + 1; j < size; ++j)
        {
            if(array[min_index] > array[j])
            {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            swap(&array[min_index], &array[i]);
        }
    }

    
}
int main()
{
    int array[] = {11, 5, 1, 6, 3, 0, 4};
    int size = sizeof(array) / sizeof(int);
    selection_sort(array, size);
    for(int i = 0; i < size; ++i)
    {
        std::cout << array[i] << std::endl;
    }
    
}