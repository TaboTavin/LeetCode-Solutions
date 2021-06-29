#include <iostream>

/*  2. Reverse Integer
//  Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go 
//  outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
*/

int reverse(int x) 
    {
          bool isNegative = false;
          long int reverseInt = 0;

          if(x >= 2147483647 || x <= -2147483648)
            return 0;

          else 
          {
            if(x < 0)
            {
              isNegative = true;
              x = abs (x);
            }

            while(x > 0)
            {
              reverseInt = reverseInt * 10;
              
              if(reverseInt >= 2147483647 || reverseInt <= -2147483648)
                 return 0;
             
              reverseInt = reverseInt + (x % 10);
              x = x / 10;
            }

            if(isNegative)
              reverseInt = reverseInt * -1;
          }
        
          return (int)reverseInt;      
    }


int main()
{
  int num=-56723;

  std::cout<<reverse(num);
}


/*

//  LeetCode class implementation

class Solution {

public:

    int reverse(int x) 
    {
          bool isNegative = false;
          long int reverseInt = 0;

          if(x >= 2147483647 || x <= -2147483648)
            return 0;

          else 
          {
            if(x < 0)
            {
              isNegative = true;
              x = abs (x);
            }

            while(x > 0)
            {
              reverseInt = reverseInt * 10;
              
              if(reverseInt >= 2147483647 || reverseInt <= -2147483648)
                 return 0;
             
              reverseInt = reverseInt + (x % 10);
              x = x / 10;
            }

            if(isNegative)
              reverseInt = reverseInt * -1;
          }
        
          return (int)reverseInt;      
    }
};
*/