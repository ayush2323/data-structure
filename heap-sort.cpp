#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
  int largest = i;  // initialise largest as root
  int l = 2 * i + 1; // left = 2 * i + 1
  int r = 2 * i + 2; // right = 2 * i + 2

  // if left child is larger than root
  if(l < n && arr[l] > arr[largest])
  {
    largest = l;
  }

  // if right child is larger than root
  if(r < n && arr[r] > arr[largest])
  {
    largest = r;
  }

  // if(r < n && l < n)
  // {
  //   if(arr[r] > arr[l])
  //   {
  //     if(arr[r] > arr[largest])
  //     {
  //       largest = r;
  //     }
  //   }
  //   else
  //   {
  //     if(arr[l] > arr[largest])
  //     {
  //       largest = l;
  //     }
  //   }
  // }

  // if larger is not root
  if(largest != i)
  {
    swap(arr[i], arr[largest]);

    // recursively heapify the affected sub-tree
    heapify(arr, n, largest);
  }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
  // build heap (rearrange array)
  for(int i = n/2 - 1; i >= 0; i--)
  {
    heapify(arr, n, i);
  }

  // one by one extract an element from heap
  for(int i = n - 1; i >= 0; i--)
  {
    // move current root to end
    swap(arr[0], arr[i]);
    // call max heapify on thr reduced heap
    heapify(arr, i , 0);
  }
}

void print(int arr[], int n)
{
  for(int i = 0; i < n; ++i)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main() {
  int arr[] = {12,54,76,23,15,66,80,31};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout<<"given array is: "<<endl;
  print(arr, n);

  heapSort(arr, n);

  cout<<"\nafter heap sort array is: \n";
  print(arr, n);
}
