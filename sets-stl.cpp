#include <iostream>
#include <set>

// it mentain the assending order of the set

using namespace std;

int main() {
  set<int> s;

  s.insert(1); // adding data to set
  s.insert(2);
  s.insert(3);
  s.insert(-1);
  s.insert(-10);

  for(int x : s)
  {
    cout<< x <<" ";
  }
  cout<<endl;

  auto it = s.find(-1); // find the data and pointing to that position

  if(it == s.end())
  {
    cout<<"data is not present"<<endl;
  }
  else
  {
   cout<<"data is present"<<endl;
   cout<<"data is "<<*it<<endl; 
  }

  auto it2 = s.lower_bound(-1);
  auto it3 = s.upper_bound(-1);
  cout<<"data is "<<*it2<<" and data is "<<*it3<<endl; 

  auto it4 = s.upper_bound(3);

  if(it4 == s.end())
  {
    cout<<"data is not present"<<endl;
  }
  else
  {
   cout<<"data is present"<<endl;
   cout<<"data is "<<*it<<endl; 
  }
  
  s.erase(2); // deleting the data

  it = s.begin(); // delete the first data
  ++it; // delete the next data
  s.erase(it);

  for(int x : s)
  {
    cout<< x <<" ";
  }
  cout<<endl;
}
