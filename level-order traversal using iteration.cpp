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

void levelOrder(Node *root)
{
  // base condition
  if(root == NULL)
  {
    return;
  }

  // create an empty queue
  queue<Node *>q;

  // enqueue root 
  q.push(root);

  while(q.empty() == false)
  {
    // count (queue size) indicates number of nodes at current level
    int count = q.size();

    // dequeue all nodes of current level and enqueue all nodes of next level
    while(count > 0)
    {
      Node *node = q.front();
      cout<<node -> data<<" ";
      q.pop();
      if(node -> left != NULL)
      {
        q.push(node -> left);
      }
      if(node -> right != NULL)
      {
        q.push(node -> right);
      }
      count--;
    }
    cout<<endl;
  }
}

int main() {
  Node *root = new Node(1);
  root -> left = new Node(2);
  root -> right = new Node(3);
  root -> left -> left = new Node(4);
  root -> right -> right = new Node(5);
  root -> left -> right = new Node(6);
  root -> right -> left = new Node(7); 
  
  levelOrder(root);
}
