#include <iostream>
#include <fstream>

int sum_file_numbers(std::string file_name)
{
    std::ifstream inputFile(file_name);
    if(inputFile.is_open())
    {
        std::cerr << "Error file not a open:" << std::endl;
    }
    int sum = 0;
    int number = 0;
    while(inputFile >> number)
    {
        sum += number; 
    }
    inputFile.close();
    return sum;
    
}

int  main()
{
    std::string file_name = "c8_number.txt";
    std::cout << sum_file_numbers(file_name);
}