#include <iostream>
#include <string>
#include <stack>

/*  20. Valid Parentheses
//  Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//  An input string is valid if:
//
//  1. Open brackets must be closed by the same type of brackets.
//  2. Open brackets must be closed in the correct order.
*/

bool isValid(std::string s)
{
  std::stack<char> stackChar;

  for(int i=0; i< s.length();i++)
  {
    if(s[i] == '[' || s[i] == '(' || s[i] == '{')
      stackChar.push(s[i]);

    else if (s[i] == ']' || s[i] == ')' || s[i] == '}')
    {
      if(stackChar.empty())
        return false;
      
      else if(s[i] == ']' && stackChar.top() != '[')
        return false;

      else if(s[i] == ')' && stackChar.top() != '(')
        return false;
      
      else if(s[i] == '}' && stackChar.top() != '{')
        return false;

      else stackChar.pop();
    }

  }

  if(stackChar.empty())
    return true;

  else 
    return false;

}

int main() 
{
  bool isValidPrint = false;
  std::string s = "([])";

  isValidPrint=isValid(s);
  
  std::cout<<isValid(s);
}

/*

//  LeetCode class implementation using a stack 

class Solution {
public:
    bool isValid(string s) 
    {
        std::stack<char> stackChar;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '[' || s[i] == '(' || s[i] == '{')
              stackChar.push(s[i]);
            
            else if (s[i] == ']' || s[i] == ')' || s[i] == '}')
            {
              if(stackChar.empty())
                return false;

              else if(s[i] == ']' && stackChar.top() != '[')
                return false;

              else if(s[i] == ')' && stackChar.top() != '(')
                return false;

              else if(s[i] == '}' && stackChar.top() != '{')
                return false;

              else stackChar.pop();
            }

            
        }
        
        if(stackChar.empty())
            return true;
        
        else 
            return false;  
    }
    
};
*/

