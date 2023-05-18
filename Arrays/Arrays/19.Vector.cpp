#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> a;
  cout<<"Capacity = "<<a.capacity()<<endl;

  a.push_back(1);
  cout<<"Capacity = "<<a.capacity()<<endl;

  a.push_back(2);
  cout<<"Capacity = "<<a.capacity()<<endl;

  a.push_back(3);
  cout<<"Capacity = "<<a.capacity()<<endl;

  cout<<"size of vector "<<a.size()<<endl;

  a.pop_back();
  for(int i:a)
  {
    cout<<i<<" ";
  }
  return 0;
}
