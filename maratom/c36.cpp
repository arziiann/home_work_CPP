#include <iostream>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void bubble_sort(int *array, int size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = i + 1; j < size; ++j)
        {
            if(array[i] > array[j])
            {
                swap(&array[i], &array[j]);
            }
        }
    }
}
int main()
{
    int array[] = {1, 5, 1, 6, 3, 0, 4};
    int size = sizeof(array) / sizeof(int);
    bubble_sort(array, size);
    for(int i = 0; i < size; ++i)
    {
        std::cout << array[i] << std::endl;
    }
}