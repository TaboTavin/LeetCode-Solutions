#include <iostream>
#include <queue>

/*  104. Maximum Depth of Binary Tree
//  Given the root of a binary tree, return its maximum depth.
//  A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
*/

struct Node
{
  int data;
  Node *left;
  Node *right;
};

Node * CreateNode(int data)
{
  Node* newNode = new Node();
  if(!newNode)
    return NULL;

  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}

void InOrder(Node* temp)
{
  if(temp == NULL)
    return;
  
  InOrder(temp->left);
  std::cout<< temp->data <<' ';
  InOrder(temp->right);
}

//  Maximum depth of a tree
int MaxDepth(Node* root)
{
  if(root == NULL)
    return 0;
  
  else 
  {
    int leftDepth = MaxDepth(root -> left);
    int rightDepth = MaxDepth(root -> right);
    
    if(leftDepth > rightDepth)
      return(leftDepth + 1);
      
    else
      return (rightDepth + 1);
  }
}

int main() 
{
  // Root
  Node* root = CreateNode(3);

  // Left
  root->left = CreateNode(9);
  
  // Right
  root->right = CreateNode(20);
  root->right->left = CreateNode(15);
  root->right->right = CreateNode(7);

  std::cout<< "Tree: " <<std::endl;
  InOrder(root);
  std::cout<<" "<<std::endl;

  std::cout<< "Max Depth: " <<std::endl;
  std::cout<< MaxDepth(root);
}

/*

//  LeetCode class implementation
class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if(root == NULL)
            return 0;
        
        else 
        {
            int leftDepth = maxDepth(root -> left);
            int rightDepth = maxDepth(root -> right);
            
            if(leftDepth > rightDepth)
                return(leftDepth + 1);
            else
                return (rightDepth + 1);
        }
        
        
    }
};
*/