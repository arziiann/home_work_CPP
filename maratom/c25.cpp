#include <iostream>
#include <unordered_map>
#include <fstream>

void file(std::string file_name)
{
    std::ifstream inputFile;
    inputFile.open(file_name);


    if(!inputFile)
    {
        std::cerr << "NO open" <<  std::endl;
    }

    char sym;
    std::unordered_map<char, int> my_map;
    while (inputFile.get(sym))
    {
        if(sym != '"' && sym != ',')
        my_map[sym]++;
    }

    for(const auto& elem : my_map)
    {
        std::cout << elem.first << elem.second <<  std::endl;
    }

    inputFile.close();
}



int main()
{
    file("c24_names.txt");
}