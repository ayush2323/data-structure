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

void postOrder(Node *root)
{
  // create two stack
  stack<Node *>s1, s2;

  // push root to first stack
  s1.push(root);
  Node *curr;

  // run while first stack is not empty
  while(!s1.empty())
  {
    curr = s1.top();
    // pop first item from first stack and push it to second stack
    s1.pop();
    s2.push(curr);
    
    // Push left and right children of removed item to s1 
    if(curr -> left)
    {
      s1.push(curr -> left);
    }
    if(curr -> right)
    {
      s1.push(curr -> right);
    }
  }

  // print all the element of second stack
  while(!s2.empty())
  {
    curr = s2.top();
    s2.pop();
    cout<<curr -> data<<" ";
  }

}

// driver code
int main() {
  Node *root = new Node(1);
  root -> left = new Node(2);
  root -> right = new Node(3);
  root -> left -> left = new Node(4);
  root -> right -> right = new Node(5);
  root -> left -> right = new Node(6);
  root -> right -> left = new Node(7); 
  
  postOrder(root);
}
