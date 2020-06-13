#include <iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;
};

class LinkedList
{
  Node *head;
  public:

  LinkedList()
  {
    head = NULL;
  }

// insertion at beginning of the linked list
  void insert(int value)
  {
    
    Node *node = new Node();
    node -> data = value;
    node -> next = NULL;

    if(head == NULL)
    {
      head = node;
    }
    else 
    {
      node -> next = head;
      head = node;
    }
  }

  void selection_sort()
  {
    Node *i = head;
    while(i)
    {
      Node *min = i;
      Node *j = i -> next;
      while(j)
      {
        if(min -> data > j -> data)
        {
          min = j;
        }
        j = j -> next;
      }
      int temp = min -> data;
      min -> data = i -> data;
      i -> data = temp;
      i = i -> next;
    }
  }
  
  /*  void selection_sort()
  {
    for(Node *i = head; i != NULL; i = i -> next)
    {
      Node *min = i;
      for(Node *j = i -> next; j != NULL; j = j -> next)
      {
        if(min -> data > j -> data)
        {
          min = j;
        }
      }
      int temp = min -> data;
      min -> data = i -> data;
      i -> data = temp;
    }
  }
  */

  void display()
  {
    Node *temp = head;
    while(temp != NULL)
    {
      cout<<temp -> data<<" ";
      temp = temp -> next;
    }
    cout<<endl;
  }
};

int main()
{
  LinkedList *ll = new LinkedList();
  ll -> insert(10);
  ll -> insert(40);
  ll -> insert(50);
  ll -> insert(30);
  ll -> insert(45);
  ll -> insert(25);
  ll -> insert(20);
  ll -> insert(5);
  ll -> insert(40);

  cout<<"given LinkedList"<<endl;
  ll -> display();

  cout<<"linked list after selection sort"<<endl;
  ll -> selection_sort();
  ll -> display();
}
