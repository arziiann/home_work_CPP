#include <iostream>

bool pagram(const std::string& sentence)
{
    bool letters[26] = {false};

    for (char c : sentence)
    {
        if ('A' <= c && c <= 'Z')
        {
            letters[c - 'A'] = true;
        }
        else if ('a' <= c && c <= 'z')
        {
            letters[c - 'a'] = true;
        }
    }

    for (bool index : letters)
    {
        if (!index)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::string list = "qwertyuiopasdfghjklzxcvbnm";
    if(pagram(list) == true)
    {
        std::cout << "TRUE";
    }
    else
    {
        std::cout << "False";
    }

}
    





