#include <iostream>
using namespace std;


void swap(int *min, int *i)
{
  int temp = *min;
  *min = *i;
  *i = temp;
}

void selection_sort(int arr[], int size)
{
  for(int i = 0; i < size - 1; i++)
  {
    int min = i;
    for(int j = i + 1; j < size; j++)
    {
      if(arr[j] < arr[min])
      {
        min = j;
      }      
    }
    swap(&arr[min], &arr[i]);
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

  cout<<"\narray after using selection sort"<<endl;
  selection_sort(arr, size);
  print(arr, size);
}
