#include <iostream>
using namespace std;
#define max 10

int main()
{
	int a[max] = {10,20,30,40,50};
	int pos, num,i;

	cout<<"enter the position where you want to enter the number and the number"<<endl;
	cin>>pos;

	cout<<"enter the numnber"<<endl;
	cin>>num;

  cout<<"initial array is: "<<endl;
	for(i = 0; i < 5; i++)
	{
		cout<<a[i]<<endl;
	}

	for(i = max; i >= pos; i--)
	{
		a[i + 1]  = a[i];
	}
	a[pos] = num;
	cout<<"new array is: "<<endl;
	for(i = 0; i < 6; i++)
	{
		cout<<a[i]<<endl;
	}
}
