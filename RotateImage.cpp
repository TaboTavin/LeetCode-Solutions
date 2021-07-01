#include <iostream>
#include <vector>

/*  48. Rotate Image
//  You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
//  You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT // //  allocate another 2D matrix and do the rotation.
//
*/


void Rotate(std::vector<std::vector<int>>& matrix)
{
    //  Transpose Matrix
    for(int i=0; i<matrix.size(); i++)
    {
      for(int j=i; j<matrix[i].size(); j++)
      {
        if(i!=j)
        {
          int temp = matrix[i][j];
          matrix[i][j] = matrix[j][i];
          matrix[j][i] = temp;
        }
      }
    }

    //  Swaping elements from same row and diffrent columns
    for(int i=0; i<matrix.size(); i++)
    {
      for(int j=0; j<( matrix.size()/2 ); j++)
      {
        int temp = matrix[i][j];
        matrix[i][j] = matrix[i][matrix.size() - j -1];
        matrix[i][matrix.size() - j -1] = temp; 

      }
    }

    //  Printing Matrix
    for(int i=0; i<matrix.size(); i++)
    {
      for(int j=0; j<matrix.size(); j++)
      {
        std::cout<<matrix[i][j];
      }

      std::cout<<""<<std::endl;
    }

    return;
}


int main()
{
    std::vector<std::vector<int>> matrix ={{1,2,3},{4,5,6},{7,8,9}};
    Rotate(matrix);

}

/*

//  LeetCode class implementation 
class Solution 
{

public:
    void rotate(vector<vector<int>>& matrix) 
    {
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=i; j<matrix[i].size(); j++)
            {
                if(i!=j)
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
        }
        
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<( matrix.size()/2 ); j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][matrix.size() - j -1];
                matrix[i][matrix.size() - j -1] = temp; 

            }
        }
    }
    
};
*/