#include <iostream>

class Mlass
{
    private:
        static int count_object;
    
    public:

       Mlass ()
       {
            ++count_object;
       }
       static int function()
       {
            return count_object;
       }
};
    
int  Mlass::count_object = 0;


int main()
{
    Mlass obj1;
    Mlass obj2;
    Mlass obj3;
    Mlass obj4;
    std::cout << "Object count im my class: " << Mlass::function();
    
    return 0;
}
