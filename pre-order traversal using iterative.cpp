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

void preOrder(Node *root)
{
  // base case
  if(root == NULL)
  {
    return;
  }

  // create an empty stack and push root to it
  stack<Node *>s;
  s.push(root);

  /*pop all items one by one. do following for every popped items
  a) print it
  b) push its right child
  c) push its left child*/
  // note that right child is pushed first on that left is processed first
  while(s.empty() == false)
  {
    // pop the top item from stack and print it
    Node *node = s.top();
    cout<<node -> data<<" ";
    s.pop();

    // push right and left children of the popped node to stack
    if(node -> right)
    {
      s.push(node -> right);
    }
    if(node -> left)
    {
      s.push(node -> left);
    }
  }
}


// driver program
int main() 
{
  Node *root = new Node(1);
  root -> left = new Node(2);
  root -> right = new Node(3);
  root -> left -> left = new Node(4);
  root -> right -> right = new Node(5);
  root -> left -> right = new Node(6);
  root -> right -> left = new Node(7); 
  
  preOrder(root);  
}
