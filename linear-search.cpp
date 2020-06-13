#include <iostream>
using namespace std;

int search (int arr[], int size, int find)
{
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == find)
		{
			return i;
		}
	}
  return -1;
}

int main()
{
	int arr[] = {2 ,3 ,4 ,10 , 14};
	int find = 8;
	int size = sizeof(arr)/sizeof(arr[0]);
	int result = search (arr, size, find);

  if(result == -1)
  {
    cout<<"data is not present in array"<<endl;
  }
  else
  {
    cout<<find<<" is at the position "<<result<<endl;
  }
}
