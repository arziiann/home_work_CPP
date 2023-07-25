#include <iostream>

enum menam
{
    zero = 4,    one = 3,     two = 3,      three = 5,     four = 4,
    five = 4,    six = 3,     seven = 5,    eight = 5,     nine = 4,
    ten = 3,     eleven = 6,  twelve = 6,   thirteen = 8,  fourteen = 8,
    fifteen = 7, sixteen = 7, seventeen = 9, eighteen = 8,  nineteen = 8,
    twenty = 6,  thirty = 6,  forty = 5,    fifty = 5,     sixty = 5,
    seventy = 7, eighty = 6,  ninety = 6
};

void countUpTo100()
{
    int sum = 0;
    

    for (int i = 1; i <= 19; ++i)
    {
        sum += menam(i);
    }


    for (int i = 2; i <= 9; ++i)
    {
        sum += menam(i * 10); 

        for (int j = 1; j <= 9; ++j)
        {
            sum += menam(i * 10 + j);
        }
    }

    sum += 10; 
    std::cout << sum << std::endl;
}

int main()
{
    countUpTo100();
}
