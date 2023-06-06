#include <iostream>
#include <string.h>
#include <cstring>


char* revers(char *s);

int main()
{
	char array[8] = "asdfghj";
	std::cout << array << "\n";
	std::cout << revers(array) << std::endl;
}

template <typename T>
void swap(T * a, T * b) 
{
	T tmp = *a;
	*a = *b;
	*b = tmp;


}
char * revers(char * s)
{
	for(int i = 0; i < strlen(s) / 2; i++)
	{
	 	swap(s + i, s + (strlen(s) - 1 - i));

	}

	return s;

}
