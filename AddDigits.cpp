#include <iostream>

/*  258. Add Digits
//  Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
*/

int AddDigits(int num)
{
    if(num == 0)
      return 0;

    if(num % 9 == 0)
      return 9;

    return(num % 9);

}


int main()
{
    int num = 225;
    std::cout<< AddDigits(num);
}

/*

//  LeetCode class implementation 

class Solution {
public:
    int addDigits(int num) 
    {
        if(num == 0)
            return 0;
        
        if(num % 9 == 0)
            return 9;
        
        return(num % 9);
        
    }
};

*/