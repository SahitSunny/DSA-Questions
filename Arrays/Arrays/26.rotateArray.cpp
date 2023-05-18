#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> a, int k)
{
  vector<int> temp(a.size());
  for(int i=0; i<a.size(); i++)
  {
    temp[(i+k)%(a.size())] = a[i];
  }
  a = temp;
  for(int i:a)
  {
    cout<<i<<" ";
  }
}

int main()
{
  vector<int> a;
  a.push_back(11);
  a.push_back(12);
  a.push_back(13);
  a.push_back(14);
  a.push_back(15);
  int k = 3;
  rotate(a,k);
}
