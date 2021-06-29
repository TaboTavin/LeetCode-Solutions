#include <iostream>
#include <vector>

/*  1. Two Sum
//  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//  You may assume that each input would have exactly one solution, and you may not use the same element twice.
//  You can return the answer in any order.
*/

std::vector<int> TwoSum(std::vector<int>& nums, int target)
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
                
                std::cout<< i << "," << j <<std::endl;

                return pair;
              }

          }
     }
     
     return pair;
}

int main ()
{
  std::vector<int> nums = {10,13,6,0};
  int target = 16;

  TwoSum(nums,target);
}

/*

//  LeetCode class implementation 

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
*/
