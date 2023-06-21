#include <iostream>

class Calcolator
{
    private:
        double number1;
        double number2;
    
    public:
        double sum(double num1, double num2)
        {
            return num1 + num2;
        }
        double sub(double num1, double num2)
        {
            return num1 - num2;
        }
        double multiplication(double num1, double num2)
        {
            return num1 * num2;
        }
        double division(double num1, double num2)
        {
            return num1 / num2;
        }
        bool check_key(char key)
        {
            if(key == '+' || key == '/' || key == '*' || key == '-')
            {
                return 0;
            }
            return 1;
        }

        double function(char key, double number1, double number2)
        {
            
            switch (key)
            {
            case '+':
                return sum(number1, number2);  
                break;
            case '-':
                return sub(number1, number2);  
                break; 
            case '*':
                return multiplication(number1, number2);  
                break;   
            case '/':
                return division(number1, number2);  
                break;       
            default:
                break;
            }
            return 0;
        }
};

int main()
{
    while(true){
        std::cout << "\n";
        std::cout << "If you enter numbers and the * symbol, the entered numbers will be multiplied" << std::endl;
        std::cout << "\n";
        std::cout << "If you type the numbers and - symbol will subtract the second from the first entered number"<< std::endl; 
        std::cout << "\n";
        std::cout << "If you type the numbers and * symbol, the entered numbers will be multiplied" << std::endl;
        std::cout << "\n";
        std::cout << "If you type numbers and the / symbol, the first number entered will be divided by 2d" << std::endl;

        
        Calcolator calcolator;
        std::cout <<"\n";
        double number1 = 0;
        std::cout << "Enter number 1: ";
        std::cin >> number1;

        std::cout <<"\n";
        double number2;
        std::cout << "Enter number 2: ";
        std::cin >> number2;

        std::cout << "\n";
        char key;
        std::cout << "Enter key: ";
        std::cin >> key;
        std::cout << "\n";
        while((calcolator.check_key(key)) == 1)
        {
            std::cout << "You typed wrong: " << std::endl;
            std::cout << "Enter key: ";
            std::cin >> key;
        }

        
        std::cout << "Resault --> " << calcolator.function(key, number1, number2);
   }

}