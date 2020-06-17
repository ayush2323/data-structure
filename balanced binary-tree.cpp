
#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node *left;
  Node *right;

  Node(int data)
  {
    this -> data = data;
    left = right = NULL;
  }
};

int findHeight(Node *root)
{
  if(root == NULL)
  {
    return 0;
  }
  
  int leftHeight = findHeight(root -> left);
  int rightHeight = findHeight(root -> right);

  if(leftHeight > rightHeight)
  {
    return (leftHeight + 1);
  }
  else
  {
    return (rightHeight + 1);
  }

  // return max(findHeight(root -> left),findHeight(root -> right)) + 1;
}

bool isBalanced(Node *root)
{
  if(root == NULL)
  {
    return true;
  }

  int leftHeight = findHeight(root -> left);
  int rightHeight = findHeight(root -> right);

  if((leftHeight - rightHeight) <= 1 && isBalanced(root -> left) && isBalanced(root -> right))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main() 
{
  Node *root = new Node(1);
  root -> left = new Node(2);
  root -> right = new Node(3);
  root -> left -> left = new Node(4);
  root -> left -> right = new Node(5);
  root -> right -> left = new Node(6);
  root -> right -> right = new Node(7); 

  if(isBalanced(root) == true)
  {
    cout<<"tree is balanced"<<endl;
  }
  else
  {
    cout<<"tree is not balanced"<<endl;
  }
}
