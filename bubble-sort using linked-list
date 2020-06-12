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

  void bubble_sort()
  {
    Node *ptr, *ptr1;
    ptr1 = NULL;
    int swap;
    if(head == NULL)
    {
      cout<<"list is empty"<<endl;
    }
    else
    {
      do
      {
        ptr = head;
        swap = 0;
        while(ptr -> next != ptr1)
        {
          if(ptr -> data > ptr -> next -> data)
          {
            int temp = ptr -> next -> data;
            ptr -> next -> data = ptr -> data;
            ptr -> data = temp;

            swap = 1;
          }
          ptr = ptr -> next;
        }
        ptr1 = ptr;
      }
      while(swap);
    }
  }

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

  cout<<"linked list after bubble sort"<<endl;
  ll -> bubble_sort();
  ll -> display();
}
