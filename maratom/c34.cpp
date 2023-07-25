#include <iostream>
#include <vector>


class Solution {
public:
    int numUniqueEmails(std::vector<std::string>& emails)
    {
        int count = 0;
        
        for (int i = 0; i < emails.size(); ++i)  
        {
           ++count;
        }
        return count;
    }
};

int main()
{
    std::vector<std::string> my_vec = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
    Solution s;
    std::cout << s.numUniqueEmails(my_vec);
}