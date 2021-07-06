#include <iostream>
#include <vector>

/*  94. Binary Tree Inorder Traversal
//  Given the root of a binary tree, return the inorder traversal of its nodes' values.
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

void InOrderTraversal(Node* root)
{
  if(root == NULL)
    return;
  
  InOrderTraversal(root->left);
  std::cout<< root->data <<' ';
  
  InOrderTraversal(root->right);

}

int main() 
{
  // Root
  Node* root = CreateNode(1);
  
  // Right
  root->right = CreateNode(2);
  root->right->left = CreateNode(3);


  std::cout<< "Tree: " <<std::endl;
  InOrderTraversal(root);
  std::cout<<" "<<std::endl;

}


/*

//  LeetCode class implementation

class Solution {
public:
    std::vector<int> resultVector;
    vector<int> inorderTraversal(TreeNode* root) 
    {
        
        
        if(root == NULL)
          return resultVector;
        
        resultVector = inorderTraversal(root->left);
        resultVector.push_back(root->val);
        resultVector = inorderTraversal(root->right);
        
        return resultVector;
        
    }
};

*/