#include <iostream>

// 4 1 5 2 9
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void merge_sort(int *array, int size)
{
    for(int i = 0, j = i + 1; i < size && j < size; ++i)
    {
        if(array[i] > array[j])
        {
            swap(&array[i], &array[j]);
            ++j;
        }
    }
}

int main()
{
    int array[] = {11, 5, 1, 6, 3, 0, 4};
    int size = sizeof(array) / sizeof(int);
    merge_sort(array, size);
    for(int i = 0; i < size; ++i)
    {
        std::cout << array[i] << std::endl;
    }
}