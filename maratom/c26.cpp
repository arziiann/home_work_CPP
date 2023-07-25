#include <iostream>

class Solution
{
    public:
        int lengthOfLastWord(std::string s)
        {
            int count = 0;
            std::cout << s[10];

            for (int i = 10; i >= ' '; --i)
            {
                ++count;
                std::cout << s[i];

            }
            return count;

        }
};

int main()
{
    Solution s;
    std::cout << s.lengthOfLastWord("Hello world");
}