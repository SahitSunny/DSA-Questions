#include<iostream>
#include<deque>
using namespace std;
int main()
{
  deque<int> a;
  a.push_front(1);
  a.push_back(2);
  a.push_back(3);

  for(int i:a)
  {
    cout<<i<<" ";
  }

  a.erase(a.begin(), a.begin()+1);
  cout<<endl;
  
  for(int i:a)
  {
    cout<<i<<" ";
  }
}
