#include<iostream>
using namespace std;

int main()
{
  int a;
  cin>>a;
  int i;
  cin>>i;
  int mask = 1<<i;
  int ans = a & mask;
  if(ans != 0)
  {
    cout<<"1";
  }
  else
  {

    cout<<"0";
  }
}
