#include <iostream>

int lenght(std::string list)
{
    int count = 0;
    int max= 0;

    for (int i = 0; i < list.size(); ++i)
    {
        if (list[i] != ' ')
        {
            ++count;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 0;
        }
    }

    if (count > max)
    {
        max = count;
    }
    return max;
}
int main()
{
    std::string list = "hello my worl in C++";
    std::cout << lenght(list);

}