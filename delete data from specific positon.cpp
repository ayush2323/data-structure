#include <iostream>
using namespace std;
#define max 10

int main() {
  int a[max] = {10,20,30,40,50};
  int pos, num;

  cout<<"enter the positrion that you want to delete"<<endl;
  cin>>pos;

  for(int i = pos; i < 5; i++)
  {
    a[i] = a[i + 1];
  }

  cout<<"new array is: "<<endl;
  for(int i = 0; i < 4; i++)
  {
    cout<<a[i]<<" ";
  }
}
