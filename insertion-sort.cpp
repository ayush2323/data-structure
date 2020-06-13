#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size)
{
  for(int i = 1; i < size; i++)
  {
    int key = arr[i];
    int j = i - 1;

    while(j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

void display(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main() {
  int arr[] = {20,35,40,10,25,50,30,5,45};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout<<"Given array"<<endl;
  display(arr, size);

  cout<<"\narray after insertion sort"<<endl;
  insertion_sort(arr, size);

  display(arr, size);
}
