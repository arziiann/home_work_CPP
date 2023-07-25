#include <iostream>
#include <vector>


class Solution
{
    public:
        std::vector<int> searchRange(std::vector<int>& nums, int target)
        {
            int count = 0;
            std::vector<int> vec;
            for (int  i = 0; i < nums.size(); ++i)
            {
                if (nums[i] == target)
                {
                    ++count;
                    vec.push_back(i);
                }
            }
            if(count == 0)
            {
                vec.push_back(-1);
                vec.push_back(-1);
            }
            else if(nums.capacity() == 0 && target == 0)
            {
                vec.push_back(-1);
                vec.push_back(-1);
            }
            return vec;
        }
};

int main()
{
    //[5,7,7,8,8,10]

    std::vector<int> my_vec = { 5, 7, 7, 8, 8, 10 };
    Solution s;
    std::vector<int> res = s.searchRange(my_vec, 8);

    for(const auto& elem : res)
    {
        std::cout << elem;
    }
}