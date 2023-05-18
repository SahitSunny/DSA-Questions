#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cin>>n>>i;
  int mask = 1<<i;
  mask = ~(mask);
  int ans = n&mask;
  cout<<ans;
}
