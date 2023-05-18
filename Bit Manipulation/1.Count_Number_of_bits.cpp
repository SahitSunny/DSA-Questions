#include<iostream>
using namespace std;

int bitscounter(int x)
{
  int count = 0;
  while(x>0)
  {
    x = x&(x-1);
    count++;
  }
  return count;
}

int XORER(int a,int b)
{
  int x  = a ^ b;
  bitscounter(x);
}
int main()
{
  int a,b;
  cin>>a>>b;

  cout<<XORER(a,b);
}
