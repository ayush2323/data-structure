#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
  
  array<int,6> ar1 {4, 1, 5, 2, 3, 6};
  array<int,6> ar2 = {5, 3, 6, 1, 2, 4};
  array<string,2> ar3 = {{string("a"), "b"}};

  cout<<"size of array are"<<endl;
  cout<<ar1.size()<<endl;
  cout<<ar2.size()<<endl;
  cout<<ar3.size()<<endl;

  cout<<"\ninitial ar1: ";
  for(auto i : ar1)
  {
    cout<<i<<" ";
  }

  sort(ar1.begin(), ar1.end());

  cout<<"\nsorted ar1: ";
  for(auto i : ar1)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  cout<<"back element "<<ar1.back()<<endl;
  cout<<"front element "<<ar1.front()<<endl;

  cout<<ar2.at(1)<<endl;

  ar1.swap(ar2);

  cout<<"after swapping: ";
  for(auto i : ar1)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  ar2.fill(10);

  cout<<"\nfilled ar2: ";
  for(auto i : ar2)
  {
    cout<<i<<" ";
  }

  cout<<"\nar3: ";
  for(auto &s : ar3)
  {
    cout<<s<<" ";
  }
  cout<<endl;

  cout<<ar1.max_size();


}
