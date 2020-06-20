#include <iostream>
using namespace std;

int main() {
  int a[10],num,i = 0, counter;
  char choice;

  do
  {
    cout<<"enter the number"<<endl;
    cin>>num;
    a[i] = num;
    i++;
    counter++;
    cout<<"do you want to add more number(press Y) otherwise(press any key)"<<endl;
    cin>>choice;
  }
  while(choice == 'Y' || choice =='y');

  cout<<"your array is: "<<endl;
  for(i = 0; i < counter; i++)
  {
    cout<<a[i]<<" ";
  }
}
