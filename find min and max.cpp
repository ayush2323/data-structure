#include <iostream>
using namespace std;

int main() {
  int a[] = {10,20,40,50,5,35};
  int min, max;

  max = a[0];
  for(int i = 0; i < 6; i++)
  {
    if(max < a[i])
    {
      max = a[i];
    }
  }
  cout<<"maximum value is: "<<max<<endl;

  min = a[0];
  for(int i = 0; i < 6; i++)
  {
    if(min > a[i])
    {
      min = a[i];
    }
  }
  cout<<"minimun value is: "<<min<<endl;
}
