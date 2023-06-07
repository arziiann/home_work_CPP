#include <iostream>

std::string to_upper_case(std::string line);

int main()
{
	std::string line;
	std::cin >> line; 
	std::cout << to_upper_case(line);


	return 0;
}

std::string to_upper_case(std::string line)
{
	for(int i = 0; i < line.size(); i++)
	{
		if(line[i] >= 'a' && line[i] <= 'z')
		{
			line[i] = line[i] - 32;
		}

	}

	return line;

}

