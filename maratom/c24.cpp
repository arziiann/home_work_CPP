#include <iostream>
#include <fstream>
#include <cstring>

void file(std::string file_name)
{
    std::ifstream inputFile;
    inputFile.open(file_name);

    std::ofstream outputFile;
    outputFile.open("output.txt"); // 

    if(!inputFile)
    {
        std::cerr << "NO open" <<  std::endl;
    }

    std::string line;
    while (std::getline(inputFile, line, ','))
    {
        for (int i = 2; i < line.length(); ++i)
        {
            if (line[i] >= 'A' && line[i] <= 'Z')
            {
                line[i] = std::tolower(line[i]);
            }
        }
        outputFile << line << "   " << std::endl;
    }

    inputFile.close();
    outputFile.close();

    
}



int main()
{
    file("c24_names.txt");
}