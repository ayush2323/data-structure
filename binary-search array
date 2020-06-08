#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int number)
{

  while(start <= end)
  {
    int mid = (end + start) / 2; 
    if(arr[mid] == number)
    {
      return mid;
    }
    else
    {
      if(arr[mid] < number)
      {
        start = mid + 1;
      }
      else if(arr[mid] > number)
      {
        end = mid - 1;
      } 
    }    
  }
  return -1;
}

int main() 
{
  int arr[] = {2 ,3, 4, 10, 40};
  int find = 20;
  int size = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, 0, size - 1, find);

  if(result == -1)
  {
    cout<<"data is not present in array"<<endl;
  }
  else
  {
    cout<<find<<" is present at index "<<result<<endl;
  }
}
