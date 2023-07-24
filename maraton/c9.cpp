#include <iostream>
#include <fstream>

void upper_case(std::string file_name)
{



  std::ifstream inputFile(file_name);
  
  if(!inputFile.is_open())
  {
    std::cerr << "File is not opern: " << std::endl;
  }

  std::string line;
  std::ofstream outputFile("output_c9.txt");

  while (inputFile >> line)
  {
        if ((!line.empty()) && line[0] >= 'a' && line[0] <= 'z')
        {
            line[0] -= 32;
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
}
int main()
{
  upper_case("c9_string.txt");
}