#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int left, int right)
{
  int pivot = arr[right];
  int pIndex = left;

  for(int i = left; i < right; i++)
  {
    if(arr[i] < pivot)
    {
      swap(&arr[pIndex], &arr[i]);
      pIndex++;
    }
  }
  swap(&arr[pIndex], &arr[right]);
  return pIndex;
}

void quickSort(int arr[], int left, int right)
{
  if(left < right)
  {
    int pi = partition(arr, left, right);
    quickSort(arr, left, pi - 1);
    quickSort(arr, pi + 1, right);
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
  int arr[] = {15,30,25,35,40,5,30,20,50,60,10};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout<<"given array"<<endl;
  print(arr, size);

  cout<<"\narray after using quack sort"<<endl;
  quickSort(arr, 0, size - 1);
  print(arr, size);
}
