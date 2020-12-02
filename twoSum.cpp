#include <iostream>
#include <vector>
using namespace std;

extern int nums[] = {2,7,11,15};
extern int target[] = {9};

//暴力解法

class Solution
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            int len = nums.size();
            for (int i = 0; i < len-1; i++)
            for (int j = i + 1; j < len; j++)
            {
                if (nums[i] + nums[j] == target)
                return {i,j};
            }

        return {};

        }

};


void Solution::twoSum(vector<int>& nums, int target)
{
    nums = nums;
    target = target;
}

int main()
{
    Solution s;
    apple = Solution.twoSum()
}