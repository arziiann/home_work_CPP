#include <iostream>
#include <string>

char * strmove_function(char* s, int n);
void push_front_(char **arr, char n);
void pop_back_(char ** arr);

int main()
{
	 int shift_count = 0;
 	std::cout << "Enter shift_count: ";
 	std::cin >> shift_count;

	int size = 0;
 	std::cout << "Enter array size: ";
 	std::cin >> size;
	
	char* array = new char[size];

	std::cout << "Enter array elements: ";
 	for(int i = 0; i < size; ++i)
 	{
  		std::cin >> array[i];
 	}
	
	

	std::cout << "Result: " << strmove_function(array, shift_count);
	
}

void push_front_(char **arr, char c)
{
    int size = strlen(*arr);
    char* new_arr = new char[size + 1];
	new_arr[0] = c;
    for(int i = 0; i < size; ++i)
	{
        new_arr[i + 1] = (*arr)[i]; 
    } 
    delete[] *arr; 
    *arr = new_arr;
}

void  pop_back_(char ** array)
{
	int size = strlen(*array);
	char *arr = new char[size - 1];
	for(int i = 0; i < size - 1; ++i)
	{
		arr[i] = (*array)[i];
	}
	
	delete[] *array;
	*array = arr; 
}

char * strmove_function(char* s, int n)
{
 int size = strlen(s);	
 char count;
 for(int i = 0; i < n; ++i)
 {
 	count = s[size - 1];
	pop_back_(&s);
	push_front_(&s, count); 
	size--;
 }
 
 return s;
}
