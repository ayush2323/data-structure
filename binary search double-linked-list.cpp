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
	Node *tail;
	public:
	
	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}

	void insert(int data1)
	{
		Node *node = new Node;
		node -> data = data1;
		node -> next = NULL;

		if(head == NULL && tail == NULL)
		{
			head = tail = node;
		}
    else if(head == tail)
    {
      tail -> next = node;
      tail = node;
    }
    else
    {
      tail -> next = node;
      tail = node;
    }
	}

  bool search(int value)
  {
    Node *start = head;
    Node *last = NULL;

    do
    {
      Node *mid = middle(start, last);
    
      if(mid == NULL)
      {
        return false;
      }

      if(mid -> data == value)
      {
        return true;
      }
      else if(mid -> data < value)
      {
        start = mid -> next;
      }
      else
      {
        last = mid;
      }
    }
    while(last != start);
      return false;
  }

  Node *middle(Node *start, Node *last)
  {
    if(start == NULL)
    {
      return 0;
    }

    Node *slow = start;
    Node *fast = start -> next;

    while(fast != last)
    {
      fast = fast -> next;
      if(fast != last)
      {
        slow = slow -> next;
        fast = fast -> next;
      }
    }
    return slow;
  }

	void display()
	{
		Node *temp;

    if(head == NULL)
    {
      cout<<"data not exist"<<endl;
    }
    else
    {
      temp = head;
		  while(temp != NULL)
		  {
		  	cout<<temp -> data<<" ";
		  	temp = temp -> next;
		  }
      cout<<endl;
    }
	}
};

int main()
{
	LinkedList *ll = new LinkedList();

	ll -> insert(10);
	ll -> insert(20);
	ll -> insert(30);
	ll -> insert(40);
	ll -> insert(50);
	ll -> insert(60);

	ll -> display();

  ll -> search(30)? cout<<"Yes" : cout<<"No";

	return 0;
}
