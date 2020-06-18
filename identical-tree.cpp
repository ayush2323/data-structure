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

bool identical(Node *p1, Node *p2)
{
  if(p1 == NULL && p2 == NULL)
  {
    return true;
  }

  if(p1 != NULL && p2 != NULL)
  {
    if(p1 -> data == p2 -> data && identical(p1 -> left,p2 -> left) && identical(p1 -> right,p2 -> right))
    {
      return true;
    }  
  }
  return false;
}

int main() 
{
  Node *root1 = new Node(1);
  root1 -> left = new Node(2);
  root1 -> right = new Node(3);
  root1 -> left -> left = new Node(4);
  root1 -> left -> right = new Node(5);
  root1 -> right -> left = new Node(6);
  root1 -> right -> right = new Node(7); 

  Node *root2 = new Node(1);
  root2 -> left = new Node(2);
  root2 -> right = new Node(3);
  root2 -> left -> left = new Node(4);
  root2 -> left -> right = new Node(5);
  root2 -> right -> left = new Node(6);
  root2 -> right -> right = new Node(7);

  if (identical(root1,root2))
  {
    cout<<"tree is identical"<<endl;
  }
  else
  {
    cout<<"tree is not identical"<<endl;
  }
}
