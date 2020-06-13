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

void inOrder(Node *root)
{
  stack<Node*>s;
  Node *curr = root;

  while(curr != NULL || s.empty() == false)
  {
    while(curr != NULL)
    {
      s.push(curr);
      curr = curr -> left;
    }

    curr = s.top();
    s.pop();

    cout<<curr -> data<<" ";

    curr = curr -> right;
  }
}

int main() 
{
  Node *root = new Node(1);
  root -> left = new Node(2);
  root -> right = new Node(3);
  root -> left -> left = new Node(4);
  root -> right -> right = new Node(5);
  root -> left -> right = new Node(6);
  root -> right -> left = new Node(7); 
  
  inOrder(root);
}
