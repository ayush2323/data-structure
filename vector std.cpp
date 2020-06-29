#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> arr1;
  vector<int> arr2 {5,20};
  vector<int> arr3 {1,2,3,4,5,7};
  vector<int> arr4 = {3,4,5,6,7,8,9};

  arr1.push_back(10);
  arr1.push_back(20);
  arr1.push_back(30);
  arr1.push_back(40);
  arr1.push_back(50);
  arr1.push_back(60);

  for(auto i : arr1)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  cout<<"size of array is: "<<arr1.size()<<endl;
  cout<<"capacity of array is: "<<arr1.capacity()<<endl;

  arr1.push_back(70);
  arr1.push_back(80);
  arr1.push_back(90);

  cout<<"size of array is: "<<arr1.size()<<endl;
  cout<<"capacity of array is: "<<arr1.capacity()<<endl;

  arr2.at(1) = 10;

  for(auto i : arr2)
  {
    cout<<i<<" ";
  }
  vector<int> arr5;
  arr5.reserve(31);

  for(int i = 0; i < 32; ++i)
  {
    arr5.push_back(i);
    cout<<"size: "<<arr5.size() <<"  capacity: "<<arr5.capacity()<<endl;
  }

  // arr5.resize(20);

  // cout<<"size: "<<arr5.size() <<"  capacity: "<<arr5.capacity()<<endl;

  arr5.shrink_to_fit();
  cout<<"size: "<<arr5.size() <<"  capacity: "<<arr5.capacity()<<endl;

  int* pos = arr5.data();

  cout<<"\nthe first element is "<<*pos;

  // arr5.assign(5,10);

  cout<<"the vector elements are: ";
  for(int i = 0; i < arr5.size(); i++)
  {
    cout<<arr5[i]<<" ";
  }
  cout<<endl;

  arr5.pop_back();

  cout<<"the vector elements are: ";
  for(int i = 0; i < arr5.size(); i++)
  {
    cout<<arr5[i]<<" ";
  }
  cout<<endl;

  arr5.insert(arr5.begin(),5);

  cout<<"\nfirst element is: "<<arr5[0];

  arr5.erase(arr5.begin());

  cout<<"\nfirst element is: "<<arr5[0];

  arr5.emplace(arr5.begin(),6);
  cout<<"\nfirst element is: "<<arr5[0];

  arr5.emplace_back(20);
  int n = arr5.size();
  cout<<"\nthe last element is: "<<arr5[n - 1];

  arr5.clear();
  cout<<"\nvector size after erase: "<<arr5.size();

  arr5.push_back(30);
  arr5.push_back(40);

  arr5.swap(arr2);

  cout<<"\nafter swapping arr5"<<endl;
  for(int i = 0; i < arr5.size(); i++)
  {
    cout<<arr5[i]<<" ";
  }
  cout<<endl;

  cout<<"\nafter swapping arr2"<<endl;
  for(int i = 0; i < arr2.size(); i++)
  {
    cout<<arr2[i]<<" ";
  }
  cout<<endl;
  
  vector<int>arr6 = {100,46,24,76};

  sort(arr6.begin(), arr6.end());

  arr6.push_back(100);
  arr6.push_back(100);
  arr6.push_back(100);
  arr6.push_back(100);

  vector<int>:: iterator it3;

  for(it3 = arr6.begin(); it3 != arr6.end(); it3++)
  {
    cout<<*it3<<" ";
  }
  cout<<endl;

  bool present = binary_search(arr6.begin(), arr6.end(), 76);
  present = binary_search(arr6.begin(), arr6.end(), 79);

  auto it = lower_bound(arr6.begin(), arr6.end(), 100); // another easier way to iterate

  vector<int>::iterator it2 = upper_bound(arr6.begin(), arr6.end(), 100);

  cout<< *it <<" "<< *it2 <<endl;
  cout<<it2 - it<<endl;

  sort(arr6.begin(), arr6.end(), f);
  
  arr6.erase(arr6.begin()); // delete first element
  arr6.erase(arr6.begin() + 1); // delete second element

  for(int x : arr6) // another method to iterate
  {
    cout<<x<<" ";
  }
  cout<<endl;

  for(int &x : arr6) // reference
  {
    x++;
  }
  cout<<endl;
}
