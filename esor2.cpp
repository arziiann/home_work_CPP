#include <iostream>
#include <string>

char * strset_function(char* s, char ch);

int main()
{
	char ch;
	std::cout << "Enter char: " << std::endl;
	std::cin >> ch;	
	
	int size = 0;
	std::cout << "Enter array size: " << std::endl;
	std::cin >> size;
	char array[size];
	
	std::cout << "Enter array elements: ";	
	for(int i = 0; i < size; ++i)
	{
		std::cin >> array[i];
	}
	
	
	std::cout << "result: " << strset_function(array, ch);
	return 0;
}

char * strset_function(char * s, char ch)
{	
	for(int i = 0; i < strlen(s); ++i)
	{
		s[i] = ch;

	}

	return s;

}
