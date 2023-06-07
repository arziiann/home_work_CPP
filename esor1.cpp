#include <iostream>
#include <string>

char * strcat_function(char* s1, char* s2);

int main()
{
	int size1 = 0;
	std::cout << "Enter 1 line size: ";
	std::cin >> size1;

	char * line1 = new char[size1]; 
	for(int i = 0; i < size1; ++i)
	{
		std::cin >> line1[i];
	}

	int size2 = 0;
	std::cout << "Enter 2 line size: ";
	std::cin >> size2;
	char * line2 = new char[size2];
	for(int i = 0; i < size2; ++i)
	{
		std::cin >> line2[i];
	}
	
	std::cout << strcat_function(line1, line2) << std::endl;

}



char * strcat_function(char* s1, char* s2)
{
	int count = 0;
	char * line3 = new char[strlen(s1) + strlen(s2)];
	for(int i = 0; i < strlen(s1); ++i, ++count)
	{
		line3[i] = s1[i];
	}
	
	for(int i = 0; i < strlen(line3); ++i, ++count)
	{
		line3[count] = s2[i];
		
	}	
	delete[] s1;
	s1 = line3;
	line3 = nullptr;
	return s1;


}
