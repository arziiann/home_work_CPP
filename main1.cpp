#include <iostream>

int num_cout_sum(int number);


int main()
{
	int num = 0;
	std::cout << "Enter number" << std::endl;
	std::cin >> num;
	if(num < 0)
	{
		num = num * (-1);
		std::cout << num_cout_sum(num);
	}
	else
	{		
		std::cout << num_cout_sum(num);
	}
	
	return 0;
}

int num_cout_sum(int number)
{
	int count = 0;
	while(number != 0)
	{
		count += number % 10;
		number /= 10;

	}

	return count;

}
