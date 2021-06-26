#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) 
    {
        std::vector<int> pair;

         for(int i=0; i<nums.size()-1; i++)
         {
           for(int j= i+1; j<nums.size(); j++)
           {
             if(nums[i]+nums[j]==target)
             {
               pair.push_back(i);
               pair.push_back(j);

               return pair;
             }

           }
         }
         return pair;
    }
};
