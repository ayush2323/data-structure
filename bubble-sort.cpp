#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
  for(int k = 1; k < size; k++)
  {
    for(int i = 0; i < size - k; i++)
    {
      if(arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}

void print(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main() {
  int arr[] = {15,30,25,35,40,5,20};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout<<"given array"<<endl;
  print(arr, size);

  cout<<"\narray after using bubble sort"<<endl;
  bubble_sort(arr, size);
  print(arr, size);
}
