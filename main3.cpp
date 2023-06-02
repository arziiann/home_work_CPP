#include <iostream>


int prime_numbers(int begin, int end);

int main()
{
	int begin = 0;
	int end = 0;

	std::cout << "Enter begin number" << std::endl;
	std::cin >> begin;

	std::cout << "Enter end number" << std::endl;
	std::cin >> end;

	
	std::cout << "Prime numbers count: " << prime_numbers(begin, end);
	return 0;
}

int prime_numbers(int begin, int end )
{

	int count = 0;
	for(int i = begin; i <= end; ++i)
	{
		if(i % 2 == 1)
		{
			++count;
		}
	}  
	return count;

}
