#include <iostream>
#include <set>

// it mentain the assending order of the set

using namespace std;

int main() {
  set<int> s;

  s.insert(40); // adding data to set
  s.insert(30);
  s.insert(60);
  s.insert(20);
  s.insert(50);
  s.insert(50); // duplicate data cant be addded
  s.insert(10);

  set<int, greater<int>> :: iterator itr;
  cout<<"\n the set s is : ";

  // printing the data
  for(itr = s.begin(); itr != s.end(); itr++)
  {
    cout<< '\t' <<*itr;
  }
  cout<<endl;

  // assigning the elements from s to s1
  set <int> s1(s.begin(), s.end());

  // print all the elements of the set s1
  cout<<"\n the set s1 is : ";

  // printing the data
  for(itr = s.begin(); itr != s.end(); itr++)
  {
    cout<< '\t' <<*itr;
  }
  cout<<endl;

  // remove all elements upto 30 in s1
  cout<<"\ns1 after removal of elements less than 30: ";
  s1.erase(s1.begin(), s1.find(30));
  for(int x : s1) // other way of writing iterator
  {
    cout<<x<<" ";
  }
  cout<<endl;

  // remove element with value 50 in s1
  int num;
  num = s1.erase(50);
  cout<<"\ns1.erase(50) : ";
  cout<<num<<" removed \t";

  for(int x : s1)
  {
    cout<<x<<" ";
  }
  cout<<endl;

  // lower bound and upper bound for set s
  cout<<"s.lower_bound(40) : "<<*s.lower_bound(40)<<endl;
  cout<<"s.upper_bound(40) : "<<*s.upper_bound(40)<<endl;

  // lower bound and upper bound for set s1
  cout<<"s1.lower_bound(40) : "<<*s1.lower_bound(40)<<endl;
  cout<<"s1.upper_bound(40) : "<<*s1.upper_bound(40)<<endl;

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

  auto it2 = s.lower_bound(30);
  auto it3 = s.upper_bound(30);
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

  it = s.begin(); // delete the first data
  ++it; // delete the next data
  s.erase(it);

  for(int x : s)
  {
    cout<< x <<" ";
  }
  cout<<endl;
}
