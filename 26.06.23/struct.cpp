#include <iostream>

struct Mlass
{
    int age = 90;
    std::string name = "Artur";
};

int main()
{
    Mlass m;
    m.age = 98;
    std::cout << m.age;
}