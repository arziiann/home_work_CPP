#include <iostream>


int function_in_array(int * array, int array_size);

int main()
{
	int array_size = 0;
	std::cout << "Ender array size" << std::endl;
	std::cin >> array_size;

	int array[array_size];
	std::cout << "Enter array elements" << std::endl;
	for(int i = 0; i < array_size; ++i)
	{
		std::cin >> array[i];
	}

	std::cout << function_in_array(array, array_size);

	return 0;
}

int function_in_array(int * array, int array_size)
{
	int count = 0;

	for(int i = 0; i < array_size; ++i)
	{
		if(array[i] == i)
		{
			++count;
		}

	}

	return count;
}
