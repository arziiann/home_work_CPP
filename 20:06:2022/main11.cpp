#include <iostream>

int vowels(std::string list)
{   
    int count = 0;
    for(int i = 0; i < list.size(); ++i)
    {
        if(list[i] == 'a' || list[i] == 'e' || list[i] == 'u' || list[i] == 'i' || list[i] == 'o' || list[i] == 'y')
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    std::string list = "asdfgopooohjkl";
    std::cout << vowels(list);

}